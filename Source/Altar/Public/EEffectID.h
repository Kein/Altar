#pragma once
#include "CoreMinimal.h"
#include "EEffectID.generated.h"

UENUM()
enum class EEffectID : int64 {
    NoEffect,
    WaterBreathing = 1380073815,
    WaterWalking = 1096237399,
    Shield = 1145849939,
    FireShield = 1213417798,
    LightningShield = 1213417804,
    FrostShield = 1213420102,
    Burden = 1313100354,
    Feather = 1380471878,
    Lock = 1262702412,
    Open = 1313165391,
    FireDamage = 1195657542,
    ShockDamage = 1195657299,
    FrostDamage = 1195659846,
    DamageAttribute = 1413564228,
    DamageSpellPoints = 1347635012,
    DamageFatigue = 1095124804,
    DrainAttribute = 1413567044,
    DrainHealth = 1162367556,
    DamageHealth = 1162364740,
    DrainSpellPoints = 1347637828,
    DrainFatigue = 1095127620,
    DrainSkill = 1263751748,
    PoisonInfo = 1314082640,
    Disease_INFO = 1163086148,
    WeaknessToFire = 1229343575,
    WeaknessToFrost = 1380338519,
    WeaknessToShock = 1213418327,
    WeaknessToMagic = 1095584599,
    WeaknessToDisease = 1229212503,
    WeaknessToPoison = 1330662231,
    WeaknessToNormalWeapons = 1464748887,
    DisintegrateWeapon = 1163348292,
    DisintegrateArmor = 1380010308,
    Vampirism = 1347240278,
    SunDamage = 1195660627,
    StuntedMagicka = 1095586899,
    MehrunesDagonCustom = 1498240324,
    Invisibility = 1230392905,
    Chameleon = 1280133187,
    Paralyze = 1095909712,
    Silence = 1129204819,
    Charm = 1297238083,
    Demoralize = 1330464068,
    Rally = 1498169682,
    Frenzy = 1515082310,
    Calm = 1296843075,
    Night_eye = 1163478350,
    Light = 1414022988,
    Darkness = 1263681860,
    Confusion = 1430670915,
    Dispel = 1280332612,
    SoulTrap = 1347572819,
    Telekinesis = 1162626388,
    SigilStoneActivation = 1128354643,
    SigilStoneDeactivation = 1162105683,
    Recall = 1094927698,
    DetectLife = 1413698628,
    SpellAbsorption = 1396851027,
    Reflect = 1129072210,
    Intervention = 1448365641,
    ReflectDamage = 1195656530,
    MysticVision = 1397315149,
    RestoreAttribute = 1413563730,
    RestoreHealth = 1162364242,
    RestoreSpellPoints = 1347634514,
    RestoreFatigue = 1095124306,
    FortifyAttribute = 1413566278,
    FortifyHealth = 1162366790,
    FortifySpellPoints = 1347637062,
    FortifyFatigue = 1095126854,
    FortifySkill = 1263750982,
    FortifyMagickaMultiplier = 1296912198,
    FortifyAttackBonus = 1111576390,
    AbsorbAttribute = 1413562945,
    AbsorbHealth = 1162363457,
    AbsorbSpellPoints = 1347633729,
    AbsorbFatigue = 1095123521,
    AbsorbSkill = 1263747649,
    ResistFire = 1229345618,
    ResistFrost = 1380340562,
    ResistShock = 1213420370,
    ResistMagic = 1095586642,
    ResistDisease = 1229214546,
    ResistPoison = 1330664274,
    ResistParalysis = 1095783250,
    ResistNormalWeapons = 1464750930,
    CureDisease = 1229215043,
    CurePoison = 1330664771,
    CureParalysis = 1095783747,
    ResistWaterDamage = 1146573650,
    SummonGhost = 1330136922,
    SummonLich = 1128877146,
    SummonSkeleton = 1162564442,
    SummonSkeletonArcher = 1095455578,
    SummonSkeletonChampion = 1129010010,
    SummonSkeletonHero = 1212896090,
    SummonWraith = 1095915354,
    SummonWraithLord = 1280464730,
    SummonZombie = 1297046106,
    SummonHeadlessZombie = 1514424410,
    SummonFireAtronach = 1095321178,
    SummonFrostAtronach = 1095911002,
    SummonStormAtronach = 1096045402,
    SummonDaedroth = 1161905242,
    SummonDremora = 1163019354,
    SummonScamp = 1094931290,
    SummonClannfear = 1095517018,
    SummonDremoraLord = 1280459866,
    SummonSpiderDaedra = 1146114906,
    SummonXivilai = 1447647322,
    SummonExtra01 = 825241690,
    SummonExtra02 = 842018906,
    SummonExtra03 = 858796122,
    SummonExtra04 = 875573338,
    SummonExtra05 = 892350554,
    SummonExtra06 = 909127770,
    SummonExtra07 = 925904986,
    SummonExtra08 = 942682202,
    SummonExtra09 = 959459418,
    SummonExtra10 = 808530010,
    SummonExtra11 = 825307226,
    SummonExtra12 = 842084442,
    SummonExtra13 = 858861658,
    SummonExtra14 = 875638874,
    SummonExtra15 = 892416090,
    SummonExtra16 = 909193306,
    SummonExtra17 = 925970522,
    SummonExtra18 = 942747738,
    SummonExtra19 = 959524954,
    SummonExtra20 = 808595546,
    CommandCreature = 1380142915,
    CommandHumanoid = 1430802243,
    BoundBoots = 1329742146,
    BoundCuirass = 1430470978,
    BoundGauntlets = 1095188802,
    BoundGreaves = 1380401474,
    BoundHelmet = 1162363202,
    BoundShield = 1213415746,
    BoundAxe = 1480677186,
    BoundBow = 1329747778,
    BoundDagger = 1094997826,
    BoundMace = 1095587650,
    BoundSword = 1465079618,
    Reanimate = 1312900434,
    TurnUndead = 1314018644,
    MythicDawnArmor = 1213487437,
    MythicDawnHelm = 1279809869,
    BoundaExtra01 = 825246018,
    BoundaExtra02 = 842023234,
    BoundaExtra03 = 858800450,
    BoundaExtra04 = 875577666,
    BoundaExtra05 = 892354882,
    BoundaExtra06 = 909132098,
    BoundaExtra07 = 925909314,
    BoundaExtra08 = 942686530,
    BoundaExtra09 = 959463746,
    BoundaExtra10 = 808534338,
    BoundwExtra01 = 825251650,
    BoundwExtra02 = 842028866,
    BoundwExtra03 = 858806082,
    BoundwExtra04 = 875583298,
    BoundwExtra05 = 892360514,
    BoundwExtra06 = 909137730,
    BoundwExtra07 = 925914946,
    BoundwExtra08 = 942692162,
    BoundwExtra09 = 959469378,
    BoundwExtra10 = 808539970,
    ScriptEffect = 1179010387,
};

