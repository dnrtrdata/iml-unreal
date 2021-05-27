//----
// InteractML - University Of Arts London
//----

#include "InteractML.h"

//unreal

//module
#include "InteractMLStorage.h"
#include "InteractMLTrainingSet.h"
#include "InteractMLModel.h"

// PROLOGUE

// CONSTANTS & MACROS

// LOCAL CLASSES & TYPES

//dev/unit testing (at end of file)

// GLOBAL STATE


// some minor dev-only testing
static void InteractMLTests_MLObjectReqeusts()
{
	FInteractMLModule& iml = FInteractMLModule::Get();

	UInteractMLTrainingSet* ts1 = iml.GetTrainingSet(TEXT("Test/MyExamples"));
	check(ts1);
	UInteractMLTrainingSet* ts2 = iml.GetTrainingSet(TEXT("Test/MyExamples"));
	check(ts1==ts2);
	
	UInteractMLModel* m1 = iml.GetModel(TEXT("Test/MyModel"));
	check(m1);
	UInteractMLModel* m2 = iml.GetModel(TEXT("Test/MyModel"));
	check(m1==m2);
	
}

// main test entry point
// requires "extern void InteractMLTests_Run();" to use
void InteractMLTests_Run()
{
	InteractMLTests_MLObjectReqeusts();
}



