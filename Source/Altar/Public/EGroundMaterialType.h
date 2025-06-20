#pragma once
#include "CoreMinimal.h"
#include "EGroundMaterialType.generated.h"

UENUM(BlueprintType)
enum class EGroundMaterialType : uint8 {
    MT_STONE,
    MT_CLOTH,
    MT_DIRT,
    MT_GLASS,
    MT_GRASS,
    MT_METAL,
    MT_ORGANIC,
    MT_SKIN,
    MT_WATER,
    MT_WOOD,
    MT_HEAVYSTONE,
    MT_HEAVYMETAL,
    MT_HEAVYWOOD,
    MT_CHAIN,
    MT_SNOW,
    MT_STAIRS,
    MT_STONESTAIRS = MT_STAIRS,
    MT_CLOTHSTAIRS,
    MT_DIRTSTAIRS,
    MT_GLASSSTAIRS,
    MT_GRASSSTAIRS,
    MT_METALSTAIRS,
    MT_ORGANICSTAIRS,
    MT_SKINSTAIRS,
    MT_WATERSTAIRS,
    MT_WOODSTAIRS,
    MT_HEAVYSTONESTAIRS,
    MT_HEAVYMETALSTAIRS,
    MT_HEAVYWOODSTAIRS,
    MT_CHAINSTAIRS,
    MT_SNOWSTAIRS,
    MT_ELEVATOR,
    MT_TOTAL,
    MT_INVALID = MT_TOTAL,
};

