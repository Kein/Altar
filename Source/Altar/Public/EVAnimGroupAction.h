#pragma once
#include "CoreMinimal.h"
#include "EVAnimGroupAction.generated.h"

UENUM(BlueprintType)
enum class EVAnimGroupAction : uint8 {
    NONE,
    START,
    STOP,
    ATTACK_START = START,
    ATTACK_HIT = STOP,
    ATTACK_SWITCH,
    ATTACK_POWER_STOP = ATTACK_SWITCH,
    ATTACK_STOP,
    BOW_START = START,
    BOW_ATTACH = STOP,
    BOW_HOLD = ATTACK_SWITCH,
    BOW_RELEASE = ATTACK_STOP,
    BOW_STOP,
    GROUP_ACTION_COUNT,
    BLOCK_START = START,
    BLOCK_ATTACK = STOP,
    BLOCK_STOP = ATTACK_SWITCH,
    EQUIP_START = START,
    EQUIP_ATTACH = STOP,
    EQUIP_STOP = ATTACK_SWITCH,
    UNEQUIP_START = START,
    UNEQUIP_DETACH = STOP,
    UNEQUIP_STOP = ATTACK_SWITCH,
    CAST_START = START,
    CAST_HIT = STOP,
    CAST_STOP = ATTACK_SWITCH,
};

