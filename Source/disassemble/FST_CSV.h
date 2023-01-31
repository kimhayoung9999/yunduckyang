#pragma once

#pragma once

#include "Engine/DataTable.h"
#include "FST_CSV.generated.h"

USTRUCT(BlueprintType)
struct FST_CSV : public FTableRowBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CSV")
		FString Assemble;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CSV")
		int32 Process;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CSV")
		int32 Num;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CSV")
		int32 Cam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CSV")
		FString ProcessText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CSV")
		FString NumText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CSV")
		FString CamText;

};