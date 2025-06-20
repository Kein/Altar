#pragma once
#include "CoreMinimal.h"
#include "EActorValue.generated.h"

UENUM()
enum class EActorValue : int64 {
    None = -1,
    Strength = 0,
    Intelligence,
    Willpower,
    Agility,
    Speed,
    Endurance,
    Personality,
    Luck,
    Health,
    Magicka,
    Fatigue,
    Encumbrance,
    Armorer,
    Athletics,
    Blade,
    Block,
    Blunt,
    HandToHand,
    HeavyArmor,
    Alchemy,
    Alteration,
    Conjuration,
    Destruction,
    Illusion,
    Mysticism,
    Restoration,
    Acrobatics,
    Lightarmor,
    Marksman,
    Mercantile,
    Security,
    Sneak,
    Speechcraft,
    Aggression,
    Confidence,
    Energy,
    Responsibility,
    Bounty,
    Fame,
    Infamy,
    MagickaMultiplier,
    NightEyeBonus,
    AttackBonus,
    DefendBonus,
    CastingPenalty,
    Blindness,
    Chameleon,
    Invisibility,
    Paralysis,
    Silence,
    Confusion,
    DetectRange,
    AbsorbChance,
    ReflectChance,
    SwimSpeedMult,
    WaterBreathing,
    WaterWalking,
    StuntedMagicka,
    DetectLifeRange,
    ReflectDamage,
    Telekinesis,
    ResistFire,
    ResistFrost,
    ResistDisease,
    ResistMagic,
    ResistNormalWeapons,
    ResistParalysis,
    ResistPoison,
    ResistShock,
    Vampirism,
    Darkness,
    ResistWaterDamage,
};

