#pragma once
#include "CoreMinimal.h"
#include "EVAnimAction.generated.h"

UENUM(BlueprintType)
enum class EVAnimAction : uint8 {
    ANIM_ACTION_NONE,
    ANIM_ACTION_EQUIP_WEAPON,
    ANIM_ACTION_UNEQUIP_WEAPON,
    ANIM_ACTION_ATTACK,
    ANIM_ACTION_ATTACK_FOLLOW_THROUGH,
    ANIM_ACTION_ATTACK_BOW,
    ANIM_ACTION_ATTACK_BOW_ARROW_ATTACHED,
    ANIM_ACTION_BLOCK,
    ANIM_ACTION_RECOIL,
    ANIM_ACTION_STAGGER,
    ANIM_ACTION_DODGE,
    ANIM_ACTION_WAIT_FOR_LOWER_BODY_ANIM,
    ANIM_ACTION_WAIT_FOR_SPECIAL_IDLE,
    ANIM_ACTION_FORCE_SCRIPT_ANIM,
    ANIM_ACTION_COUNT,
};

