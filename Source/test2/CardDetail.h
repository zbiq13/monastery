#pragma once

#include "Engine/DataTable.h"
#include "CardDetail.generated.h"

/** Structure that defines a level up table entry */
/*USTRUCT(BlueprintType)
struct FLevelUpData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

	FLevelUpData()
		: XPtoLvl(0)
		, XP(0)
	{}


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LevelUp)
		int32 XPtoLvl;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LevelUp)
		int32 XP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LevelUp)
		TAssetPtr<UTexture> Asset;
};*/


/** Structure that defines a level up table entry */
USTRUCT(BlueprintType)
struct FWaypointsData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:

	FWaypointsData()
	{}

	/** The 'Name' column is the same as the XP Level */

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Waypoints)
		FName Waypoint1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Waypoints)
		FName Waypoint2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Waypoints)
		FName Waypoint3;
};



UCLASS(Abstract, CustomConstructor)
class UCardDetail : public UObject
{
	GENERATED_UCLASS_BODY()
		UCardDetail(const class FPostConstructInitializeProperties& PCIP) : Super(PCIP) {}
};