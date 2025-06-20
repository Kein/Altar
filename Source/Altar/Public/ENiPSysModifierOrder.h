#pragma once
#include "CoreMinimal.h"
#include "ENiPSysModifierOrder.generated.h"

UENUM()
enum class ENiPSysModifierOrder : uint32 {
    ORDER_KILLOLDPARTICLES,
    ORDER_BSLOD,
    ORDER_EMITTER = 1000,
    ORDER_SPAWN = 2000,
    ORDER_FO3_BSSTRIPUPDATE = 2500,
    ORDER_GENERAL = 3000,
    ORDER_FORCE = 4000,
    ORDER_COLLIDER = 5000,
    ORDER_POS_UPDATE = 6000,
    ORDER_POSTPOS_UPDATE = 6500,
    ORDER_WORLDSHIFT_PARTSPAWN = 6600,
    ORDER_BOUND_UPDATE = 7000,
    ORDER_SK_BSSTRIPUPDATE = 8000,
};

