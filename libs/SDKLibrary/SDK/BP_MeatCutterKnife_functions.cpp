#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MeatCutterKnife.BP_MeatCutterKnife_C
// (Actor)

class UClass* ABP_MeatCutterKnife_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MeatCutterKnife_C");

	return Clss;
}


// BP_MeatCutterKnife_C BP_MeatCutterKnife.Default__BP_MeatCutterKnife_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MeatCutterKnife_C* ABP_MeatCutterKnife_C::GetDefaultObj()
{
	static class ABP_MeatCutterKnife_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MeatCutterKnife_C*>(ABP_MeatCutterKnife_C::StaticClass()->DefaultObject);

	return Default;
}

}


