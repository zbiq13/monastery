#pragma once

#include "Engine/DataTable.h"
#include "CardDetail.generated.h"

/** Structure that defines a level up table entry */
USTRUCT(BlueprintType)
struct FLevelUpData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

	FLevelUpData()
		: XPtoLvl(0)
		, XP(0)
	{}

	/** The 'Name' column is the same as the XP Level */

	/** XP to get to the given level from the previous level */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LevelUp)
		int32 XPtoLvl;

	/** This was the old property name (represented total XP) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LevelUp)
		int32 XP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LevelUp)
		TAssetPtr<UTexture> Asset;
};


UCLASS(Abstract, CustomConstructor)
class UCardDetail : public UObject
{
	GENERATED_UCLASS_BODY()
		UCardDetail(const class FPostConstructInitializeProperties& PCIP) : Super(PCIP) {}
};