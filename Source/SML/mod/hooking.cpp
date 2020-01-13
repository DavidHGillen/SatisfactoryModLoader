#include "hooking.h"
#include <string>
#include <unordered_map>
#include "util/funchook.h"
#include "util/Internal.h"
#include "SatisfactoryModLoader.h"

//since templates are actually compiled for each module separately,
//we need to have a global handler map which will be shared by all hook invoker templates available in all modules
//to keep single hook instance for each method
static std::unordered_map<std::string, void*> registeredListenerMap;

//map of all currently installed hooks to their names
//to have exactly one hook installed for each function
static std::unordered_map<std::string, void*> installedHookMap;

void* getHandlerListInternal(const std::string& identifier) {
	return registeredListenerMap[identifier];
}

void setHandlerListInstanceInternal(const std::string& identifier, void* handlerList) {
	registeredListenerMap[identifier] = handlerList;
}

std::string decorateSymbolName(const char* functionName, const char* symbolType) {
	//TODO support hooking different C++ function overloads (bootstrapper supports it)
	//SML::Logging::info(TEXT("Function signature: "), symbolType);
	//SML::Logging::info(TEXT("Function name: "), functionName);
	return std::string("void ").append(functionName).append("()");
}

#define CHECK_FUNCHOOK_ERR(arg, message) \
	if (arg != FUNCHOOK_ERROR_SUCCESS) SML::shutdownEngine(SML::formatStr(message, convertStr(functionNameStr.c_str()), TEXT(": "), convertStr(funchook_error_message(funchook))));

void* registerHookFunction(const std::string& functionNameStr, void* hookFunction) {
	if (installedHookMap[functionNameStr] == nullptr) {
		funchook* funchook = funchook_create();
		if (funchook == nullptr) {
			SML::shutdownEngine(TEXT("funchook_create() returned NULL"));
		}
		void* gameFunctionPtr = SML::ResolveGameSymbol(functionNameStr.c_str());
		if (gameFunctionPtr == nullptr) {
			SML::shutdownEngine(SML::formatStr(TEXT("Hook target function not found: "), convertStr(functionNameStr.c_str())));
		}
		CHECK_FUNCHOOK_ERR(funchook_prepare(funchook, &gameFunctionPtr, hookFunction), TEXT("funchook_prepare returned error: "));
		CHECK_FUNCHOOK_ERR(funchook_install(funchook, 0), TEXT("funchook_install returned error:"));
		
		installedHookMap[functionNameStr] = gameFunctionPtr;
		return gameFunctionPtr;
	}
	return installedHookMap[functionNameStr];
}

