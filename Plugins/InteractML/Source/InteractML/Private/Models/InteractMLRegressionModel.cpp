//----
// InteractML - University Of Arts London
//----

#include "InteractMLRegressionModel.h"

//unreal

//module

// PROLOGUE
#define LOCTEXT_NAMESPACE "InteractML"

// CONSTANTS & MACROS

// extension prefix for model data files
FString UInteractMLRegressionModel::cExtensionPrefix(TEXT(".regression"));

// LOCAL CLASSES & TYPES

// init on demand, clear, reset
//
void UInteractMLRegressionModel::ResetModelInstance()
{
	//create on demand
	if (!Model.IsValid())
	{
		Model = MakeShareable(new regressionFloat());
	}

	//reset
	Model->reset();
}


// EPILOGUE
#undef LOCTEXT_NAMESPACE
