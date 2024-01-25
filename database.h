#pragma once
#include "pch.h"

namespace database
{
	static std::vector<std::string> db_items = 
	{
     "Accessory_NormalResist_1",
     "Accessory_NormalResist_2",
     "Accessory_NormalResist_3",
     "Accessory_AquaResist_1",
     "Accessory_AquaResist_2",
     "Accessory_AquaResist_3",
     "Accessory_AT_1",
     "Accessory_AT_2",
     "Accessory_AT_3",
     "Accessory_CoolResist_1",
     "Accessory_CoolResist_2",
     "Accessory_CoolResist_3",
     "Accessory_DarkResist_1",
     "Accessory_DarkResist_2",
     "Accessory_DarkResist_3",
     "Accessory_defense_1",
     "Accessory_defense_2",
     "Accessory_defense_3",
     "Accessory_DragonResist_1",
     "Accessory_DragonResist_2",
     "Accessory_DragonResist_3",
     "Accessory_EarthResist_1",
     "Accessory_EarthResist_2",
     "Accessory_EarthResist_3",
     "Accessory_FireResist_1",
     "Accessory_FireResist_2",
     "Accessory_FireResist_3",
     "Accessory_HeatResist_1",
     "Accessory_HeatResist_2",
     "Accessory_HeatResist_3",
     "Accessory_HP_1",
     "Accessory_HP_2",
     "Accessory_HP_3",
     "Accessory_IceResist_1",
     "Accessory_IceResist_2",
     "Accessory_IceResist_3",
     "Accessory_LeafResist_1",
     "Accessory_LeafResist_2",
     "Accessory_LeafResist_3",
     "Accessory_ThunderResist_1",
     "Accessory_ThunderResist_2",
     "Accessory_ThunderResist_3",
     "Accessory_WorkSpeed_1",
     "Accessory_WorkSpeed_2",
     "Accessory_WorkSpeed_3",
     "AirGrapplingGun",
     "AnimalSkin",
     "AnimalSkin2",
     "Antibiotic_Good",
     "Antibiotic_Normal",
     "Antibiotic_Super",
     "Arrow",
     "Arrow_Poison",
     "Arrow_Fire",
     "AssaultRifle_Default1",
     "Axe_Tier_00",
     "Axe_Tier_01",
     "Axe_Tier_02",
     "Axe_Tier_03",
     "Baked_Berries",
     "Baked_Potato",
     "Baked_Unko",
     "BakedMushroom",
     "Bandage_Good",
     "Bandage_Normal",
     "Bandage_Super",
     "Bat",
     "Bat2",
     "MeatCutterKnife",
     "BAT_NPC",
     "Beer",
     "Berries",
     "Berries2",
     "BerrySeeds",
     "BLT",
     "BOSS_1",
     "Bow",
     "Bow_Fifth",
     "Bow_Triple",
     "BowGun",
     "BowGun_Fire",
     "BowGun_Poison",
     "CaptureRope",
     "Carbonara",
     "CashFang",
     "CashScales",
     "Charcoal",
     "CheeseBurger",
     "Claws",
     "Claws2",
     "ClawsPendant",
     "Cloth",
     "Cloth2",
     "ClothArmor",
     "ClothHat",
     "Coal",
     "Computer",
     "CopperArmor",
     "CopperHelmet",
     "CopperIngot",
     "CopperOre",
     "Corn",
     "CornSoup",
     "CrudeOil",
     "Curry",
     "DebugHandgun",
     "Diamond",
     "DoubleBarrelShotgun",
     "Eemerald",
     "Egg",
     "ElecBaton",
     "ElectronicCircuit",
     "EnergyDrink",
     "ExplosiveBullet",
     "Fang",
     "Fang2",
     "FangNecklace",
     "FarmCrop_Tmp",
     "Fiber",
     "FishingRod_Good",
     "FishingRod_Legendary",
     "FishingRod_Old",
     "FishingRod_Super",
     "FishMeat",
     "FishMeat2",
     "Flint",
     "FriedEggs",
     "FurArmor",
     "FurHelmet",
     "GasMask",
     "Glider_Good",
     "Glider_Legendary",
     "Glider_Old",
     "Glider_Super",
     "Grape",
     "GrilledFish",
     "GrilledMeat",
     "Gunpowder",
     "Gunpowder2",
     "Hamburger",
     "HandGun_Default",
     "HandgunBullet",
     "Herbs",
     "HomingSphereLauncher",
     "Honey",
     "Sweet",
     "Hop",
     "HotMilk",
     "IronArmor",
     "IronHelmet",
     "IronIngot",
     "IronOre",
     "JamBun",
     "Kitsunebi_Fire",
     "LargeBullet",
     "LaserBullet",
     "LaserRifle",
     "Launcher_Default",
     "Launcher_Meat",
     "Leather",
     "Leather2",
     "Lettuce",
     "LettuceSeeds",
     "LightzHelmet",
     "LuxuryMedicines",
     "LuxuryOmelette",
     "MachineParts",
     "MachineParts2",
     "MakeshiftHandgun",
     "meat",
     "Meat2",
     "Medicines",
     "Milk",
     "MindControlDrug",
     "Money",
     "Mushroom",
     "NightVisionGoggles",
     "NPC_WEAPON",
     "Omelet",
     "Pal_crystal_L",
     "Pal_crystal_S",
     "PAL_Growth_Stone_L",
     "PAL_Growth_Stone_M",
     "PAL_Growth_Stone_S",
     "PAL_Growth_Stone_XL",
     "PalBox_ticket",
     "PalCrystal_Ex",
     "PalEgg",
     "PalEgg_Dark_01",
     "PalEgg_Dark_02",
     "PalEgg_Dark_03",
     "PalEgg_Dark_04",
     "PalEgg_Dark_05",
     "PalEgg_Dragon_01",
     "PalEgg_Dragon_02",
     "PalEgg_Dragon_03",
     "PalEgg_Dragon_04",
     "PalEgg_Dragon_05",
     "PalEgg_Earth_01",
     "PalEgg_Earth_02",
     "PalEgg_Earth_03",
     "PalEgg_Earth_04",
     "PalEgg_Earth_05",
     "PalEgg_Electricity_01",
     "PalEgg_Electricity_02",
     "PalEgg_Electricity_03",
     "PalEgg_Electricity_04",
     "PalEgg_Electricity_05",
     "PalEgg_Fire_01",
     "PalEgg_Fire_02",
     "PalEgg_Fire_03",
     "PalEgg_Fire_04",
     "PalEgg_Fire_05",
     "PalEgg_Ice_01",
     "PalEgg_Ice_02",
     "PalEgg_Ice_03",
     "PalEgg_Ice_04",
     "PalEgg_Ice_05",
     "PalEgg_Leaf_01",
     "PalEgg_Leaf_02",
     "PalEgg_Leaf_03",
     "PalEgg_Leaf_04",
     "PalEgg_Leaf_05",
     "PalEgg_Normal_01",
     "PalEgg_Normal_02",
     "PalEgg_Normal_03",
     "PalEgg_Normal_04",
     "PalEgg_Normal_05",
     "PalEgg_Water_01",
     "PalEgg_Water_02",
     "PalEgg_Water_03",
     "PalEgg_Water_04",
     "PalEgg_Water_05",
     "PalItem_ToSell_01",
     "PalItem_ToSell_02",
     "PalItem_ToSell_03",
     "PalItem_ToSell_04",
     "PalItem_ToSell_05",
     "PalOil",
     "PalItem_ColorfulBird",
     "PalItem_PlantSlime",
     "PalItem_CaptainPenguin",
     "PalItem_CatMage",
     "PalSphere",
     "PalSphere_Giga",
     "PalSphere_Legend",
     "PalSphere_Master",
     "PalSphere_Mega",
     "PalSphere_Tera",
     "PalSphere_Robbery",
     "PalSphere_Debug",
     "PalUpgradeStone",
     "PalUpgradeStone2",
     "PalUpgradeStone3",
     "Pan",
     "PenguinLauncher",
     "Pickaxe_Tier_00",
     "Pickaxe_Tier_01",
     "Pickaxe_Tier_02",
     "Pickaxe_Tier_03",
     "Pizza",
     "Plastic",
     "Polymer",
     "Potage",
     "Potato",
     "PotatoSeedPotatoes",
     "PumpActionShotgun",
     "Pumpkin",
     "PV_ITEMS",
     "Quartz",
     "RecurveBow",
     "Relic",
     "RepairKit",
     "RifleBullet",
     "Ruby",
     "Salad",
     "Sandwich",
     "Sapphire",
     "Scales",
     "Scales2",
     "SeafoodSoup",
     "Seed_Tmp",
     "Sharkkid_Scale",
     "Shield_01",
     "Shield_02",
     "Shield_03",
     "Shield_04",
     "Shield_05",
     "Shield_06",
     "ShotgunBullet",
     "RoughBullet",
     "MachingunBullet",
     "AssaultRifleBullet",
     "MagnumBullet",
     "SingleShotRifle",
     "SkillCard_PowerShot",
     "SkillCard_PowerBall",
     "SkillCard_HyperBeam",
     "SkillCard_AirCanon",
     "SkillCard_SelfDestruct",
     "SkillCard_WindCutter",
     "SkillCard_GrassTornado",
     "SkillCard_SolarBeam",
     "SkillCard_SeedMachinegun",
     "SkillCard_RootAttack",
     "SkillCard_SeedMine",
     "SkillCard_WaterGun",
     "SkillCard_WaterBall",
     "SkillCard_HydroPump",
     "SkillCard_AquaJet",
     "SkillCard_BubbleShot",
     "SkillCard_AcidRain",
     "SkillCard_FireBlast",
     "SkillCard_Flamethrower",
     "SkillCard_FireBall",
     "SkillCard_FlareArrow",
     "SkillCard_FireSeed",
     "SkillCard_Inferno",
     "SkillCard_FlareTornado",
     "SkillCard_ElecWave",
     "SkillCard_Thunderbolt",
     "SkillCard_LineThunder",
     "SkillCard_ThunderFunnel",
     "SkillCard_SpreadPulse",
     "SkillCard_LockonLaser",
     "SkillCard_ThunderBall",
     "SkillCard_ThreeThunder",
     "SkillCard_ThrowRock",
     "SkillCard_SandTornado",
     "SkillCard_RockLance",
     "SkillCard_MudShot",
     "SkillCard_StoneShotgun",
     "SkillCard_IceMissile",
     "SkillCard_BlizzardLance",
     "SkillCard_IcicleThrow",
     "SkillCard_DarkWave",
     "SkillCard_ShadowBall",
     "SkillCard_Psychokinesis",
     "SkillCard_PoisonShot",
     "SkillCard_GhostFlame",
     "SkillCard_DarkLaser",
     "SkillCard_DragonBreath",
     "SkillCard_DragonCanon",
     "SkillCard_DragonWave",
     "SkillCard_DragonMeteor",
     "SkillCard_LightningStrike",
     "SkillCard_IceBlade",
     "SkillCard_FrostBreath",
     "SkillUnlock_Alpaca",
     "SkillUnlock_AmaterasuWolf",
     "SkillUnlock_Anubis",
     "SkillUnlock_BadCatgirl",
     "SkillUnlock_BirdDragon",
     "SkillUnlock_BlackCentaur",
     "SkillUnlock_BlackFurDragon",
     "SkillUnlock_BlackGriffon",
     "SkillUnlock_BlackMetalDragon",
     "SkillUnlock_BlueDragon",
     "SkillUnlock_Boar",
     "SkillUnlock_CaptainPenguin",
     "SkillUnlock_Carbunclo",
     "SkillUnlock_ColorfulBird",
     "SkillUnlock_DarkMutant",
     "SkillUnlock_Deer",
     "SkillUnlock_DreamDemon",
     "SkillUnlock_DrillGame",
     "SkillUnlock_Eagle",
     "SkillUnlock_ElecLion",
     "SkillUnlock_ElecPanda",
     "SkillUnlock_FairyDragon",
     "SkillUnlock_FeatherOstrich",
     "SkillUnlock_FengyunDeeper",
     "SkillUnlock_FireKirin",
     "SkillUnlock_FlameBuffalo",
     "SkillUnlock_FlowerDinosaur",
     "SkillUnlock_FlowerRabbit",
     "SkillUnlock_FlyingManta",
     "SkillUnlock_Garm",
     "SkillUnlock_GhostBeast",
     "SkillUnlock_GoldenHorse",
     "SkillUnlock_GrassMammoth",
     "SkillUnlock_GrassPanda",
     "SkillUnlock_GuardianDog",
     "SkillUnlock_HadesBird",
     "SkillUnlock_HawkBird",
     "SkillUnlock_Hedgehog",
     "SkillUnlock_HerculesBeetle",
     "SkillUnlock_Horus",
     "SkillUnlock_IceDeer",
     "SkillUnlock_IceFox",
     "SkillUnlock_IceHorse",
     "SkillUnlock_JetDragon",
     "SkillUnlock_KingAlpaca",
     "SkillUnlock_KingBahamut",
     "SkillUnlock_Kirin",
     "SkillUnlock_Kitsunebi",
     "SkillUnlock_LazyDragon",
     "SkillUnlock_LilyQueen",
     "SkillUnlock_Manticore",
     "SkillUnlock_Monkey",
     "SkillUnlock_MopKing",
     "SkillUnlock_NaughtyCat",
     "SkillUnlock_NegativeOctopus",
     "SkillUnlock_Penguin",
     "SkillUnlock_RaijinDaughter",
     "SkillUnlock_RedArmorBird",
     "SkillUnlock_SaintCentaur",
     "SkillUnlock_SakuraSaurus",
     "SkillUnlock_Serpent",
     "SkillUnlock_SkyDragon",
     "SkillUnlock_Suzaku",
     "SkillUnlock_ThunderBird",
     "SkillUnlock_ThunderDog",
     "SkillUnlock_Umihebi",
     "SkillUnlock_VolcanicMonster",
     "SkillUnlock_WeaselDragon",
     "SkillUnlock_WingGolem",
     "SkillUnlock_WindChimes",
     "SkillUnlock_Yeti",
     "SkillUnlock_Umihebi_Fire",
     "SkillUnlock_Deer_Ground",
     "SkillUnlock_Hedgehog_Ice",
     "SkillUnlock_FlowerDinosaur_Electric",
     "SkillUnlock_GrassMammoth_Ice",
     "SkillUnlock_LazyDragon_Electric",
     "SkillUnlock_FireKirin_Dark",
     "SkillUnlock_SakuraSaurus_Water",
     "SkillUnlock_FairyDragon_Water",
     "SkillUnlock_Manticore_Dark",
     "SkillUnlock_Suzaku_Water",
     "SkillUnlock_Serpent_Ground",
     "SkillUnlock_VolcanicMonster_Ice",
     "SkillUnlock_IceHorse_Dark",
     "SkillUnlock_GrassPanda_Electric",
     "SkillUnlock_Yeti_Grass",
     "SkillUnlock_KingAlpaca_Ice",
     "SkillUnlock_BirdDragon_Ice",
     "SkillUnlock_WindChimes_Ice",
     "SmallBullet",
     "SniperRifle_Default",
     "SphereLauncher",
     "SphereLauncher_Once",
     "StealArmor",
     "StealHelmet",
     "StealIngot",
     "Stew",
     "Stone",
     "Sulfur",
     "Sword",
     "TechnologyBook_G1",
     "TechnologyBook_G2",
     "TechnologyBook_G3",
     "ThrowStone",
     "FragGrenade",
     "FragGrenade_Fire",
     "FragGrenade_Ice",
     "FragGrenade_Elec",
     "Tomato",
     "TomatoSeeds",
     "Torch",
     "Unko_L",
     "Unko_S",
     "VenisonBoiledInTomato",
     "WaterBucket",
     "WazaTest",
     "WeakerBow",
     "Bow_Fire",
     "Bow_Poison",
     "Wheat",
     "WheatSeeds",
     "Flour",
     "Wine",
     "Wood",
     "Wool",
     "ElectricOrgan",
     "Venom",
     "FireOrgan",
     "IceOrgan",
     "Bone",
     "Sand",
     "Silicon",
     "Cement",
     "CarbonFiber",
     "Horn",
     "Spear",
     "Spear_2",
     "Spear_3",
     "Lantern",
     "AutoMealPouch_Tier1",
     "AutoMealPouch_Tier2",
     "AutoMealPouch_Tier3",
     "AutoMealPouch_Tier4",
     "AutoMealPouch_Tier5",
     "GrapplingGun_1",
     "GrapplingGun_2",
     "GrapplingGun_3",
     "GrapplingGun_4",
     "Head001",
     "Head002",
     "Head003",
     "Head004",
     "Head005",
     "Head006",
     "Head007",
     "Head008",
     "Head009",
     "Head010",
     "Head011",
     "Head012",
     "Head013",
     "Head014",
     "Head015",
     "Head016",
     "Head017",
     "MateItem01",
     "TreasureBoxKey01",
     "TreasureBoxKey02",
     "TreasureBoxKey03",
     "Musket",
     "FriedVegetables",
     "HotDog",
     "Pancake",
     "MarinatedMushrooms",
     "MushroomSoup",
     "MushroomStew",
     "MeatSauce",
     "Cake",
     "WeakerBow_2",
     "WeakerBow_3",
     "WeakerBow_4",
     "WeakerBow_5",
     "BowGun_2",
     "BowGun_3",
     "BowGun_4",
     "BowGun_5",
     "HandGun_Default_2",
     "HandGun_Default_3",
     "HandGun_Default_4",
     "HandGun_Default_5",
     "AssaultRifle_Default2",
     "AssaultRifle_Default3",
     "AssaultRifle_Default4",
     "AssaultRifle_Default5",
     "PumpActionShotgun_2",
     "PumpActionShotgun_3",
     "PumpActionShotgun_4",
     "PumpActionShotgun_5",
     "Launcher_Default_2",
     "Launcher_Default_3",
     "Launcher_Default_4",
     "Launcher_Default_5",
     "Blueprint_ClothArmorHeat_2",
     "Blueprint_ClothArmorHeat_3",
     "Blueprint_ClothArmorHeat_4",
     "Blueprint_ClothArmorHeat_5",
     "Blueprint_ClothArmorCold_2",
     "Blueprint_ClothArmorCold_3",
     "Blueprint_ClothArmorCold_4",
     "Blueprint_ClothArmorCold_5",
     "Blueprint_FurArmorHeat_2",
     "Blueprint_FurArmorHeat_3",
     "Blueprint_FurArmorHeat_4",
     "Blueprint_FurArmorHeat_5",
     "Blueprint_FurArmorCold_2",
     "Blueprint_FurArmorCold_3",
     "Blueprint_FurArmorCold_4",
     "Blueprint_FurArmorCold_5",
     "Blueprint_CopperArmorHeat_2",
     "Blueprint_CopperArmorHeat_3",
     "Blueprint_CopperArmorHeat_4",
     "Blueprint_CopperArmorHeat_5",
     "Blueprint_CopperArmorCold_2",
     "Blueprint_CopperArmorCold_3",
     "Blueprint_CopperArmorCold_4",
     "Blueprint_CopperArmorCold_5",
     "Blueprint_IronArmorHeat_2",
     "Blueprint_IronArmorHeat_3",
     "Blueprint_IronArmorHeat_4",
     "Blueprint_IronArmorHeat_5",
     "Blueprint_IronArmorCold_2",
     "Blueprint_IronArmorCold_3",
     "Blueprint_IronArmorCold_4",
     "Blueprint_IronArmorCold_5",
     "Blueprint_StealArmorHeat_2",
     "Blueprint_StealArmorHeat_3",
     "Blueprint_StealArmorHeat_4",
     "Blueprint_StealArmorHeat_5",
     "Blueprint_StealArmorCold_2",
     "Blueprint_StealArmorCold_3",
     "Blueprint_StealArmorCold_4",
     "Blueprint_StealArmorCold_5",
     "Blueprint_FurHelmet_2",
     "Blueprint_FurHelmet_3",
     "Blueprint_FurHelmet_4",
     "Blueprint_FurHelmet_5",
     "Blueprint_CopperHelmet_2",
     "Blueprint_CopperHelmet_3",
     "Blueprint_CopperHelmet_4",
     "Blueprint_CopperHelmet_5",
     "Blueprint_IronHelmet_2",
     "Blueprint_IronHelmet_3",
     "Blueprint_IronHelmet_4",
     "Blueprint_IronHelmet_5",
     "Blueprint_StealHelmet_2",
     "Blueprint_StealHelmet_3",
     "Blueprint_StealHelmet_4",
     "Blueprint_StealHelmet_5",
     "Blueprint_Head001_1",
     "Blueprint_Head001_2",
     "Blueprint_Head001_3",
     "Blueprint_Head001_4",
     "Blueprint_Head001_5",
     "Blueprint_Head002_1",
     "Blueprint_Head002_2",
     "Blueprint_Head002_3",
     "Blueprint_Head002_4",
     "45264",
     "Blueprint_Head003_1",
     "Blueprint_Head003_2",
     "Blueprint_Head003_3",
     "Blueprint_Head003_4",
     "Blueprint_Head003_5",
     "Blueprint_Head004_1",
     "Blueprint_Head004_2",
     "Blueprint_Head004_3",
     "Blueprint_Head004_4",
     "Blueprint_Head004_5",
     "Blueprint_Head005_1",
     "Blueprint_Head005_2",
     "Blueprint_Head005_3",
     "Blueprint_Head005_4",
     "Blueprint_Head005_5",
     "Blueprint_Head006_1",
     "Blueprint_Head006_2",
     "Blueprint_Head006_3",
     "Blueprint_Head006_4",
     "Blueprint_Head006_5",
     "Blueprint_Head007_1",
     "Blueprint_Head007_2",
     "Blueprint_Head007_3",
     "Blueprint_Head007_4",
     "Blueprint_Head007_5",
     "Blueprint_Head008_1",
     "Blueprint_Head008_2",
     "Blueprint_Head008_3",
     "Blueprint_Head008_4",
     "Blueprint_Head008_5",
     "Blueprint_Head009_1",
     "Blueprint_Head009_2",
     "Blueprint_Head009_3",
     "Blueprint_Head009_4",
     "Blueprint_Head009_5",
     "Blueprint_Head010_1",
     "Blueprint_Head010_2",
     "Blueprint_Head010_3",
     "Blueprint_Head010_4",
     "Blueprint_Head010_5",
     "Blueprint_Head011_1",
     "Blueprint_Head011_2",
     "Blueprint_Head011_3",
     "Blueprint_Head011_4",
     "Blueprint_Head011_5",
     "Blueprint_Head012_1",
     "Blueprint_Head012_2",
     "Blueprint_Head012_3",
     "Blueprint_Head012_4",
     "Blueprint_Head012_5",
     "Blueprint_Head013_1",
     "Blueprint_Head013_2",
     "Blueprint_Head013_3",
     "Blueprint_Head013_4",
     "Blueprint_Head013_5",
     "Blueprint_Head014_1",
     "Blueprint_Head014_2",
     "Blueprint_Head014_3",
     "Blueprint_Head014_4",
     "Blueprint_Head014_5",
     "Blueprint_Head015_1",
     "Blueprint_Head015_2",
     "Blueprint_Head015_3",
     "Blueprint_Head015_4",
     "Blueprint_Head015_5",
     "Blueprint_Head016_1",
     "Blueprint_Head016_2",
     "Blueprint_Head016_3",
     "Blueprint_Head016_4",
     "Blueprint_Head016_5",
     "Blueprint_Head017_1",
     "Blueprint_Head017_2",
     "Blueprint_Head017_3",
     "Blueprint_Head017_4",
     "Blueprint_Head017_5",
     "Blueprint_WeakerBow_2",
     "Blueprint_WeakerBow_3",
     "Blueprint_WeakerBow_4",
     "Blueprint_WeakerBow_5",
     "Blueprint_BowGun_2",
     "Blueprint_BowGun_3",
     "Blueprint_BowGun_4",
     "Blueprint_BowGun_5",
     "Blueprint_AssaultRifle_Default2",
     "Blueprint_AssaultRifle_Default3",
     "Blueprint_AssaultRifle_Default4",
     "Blueprint_AssaultRifle_Default5",
     "Blueprint_PumpActionShotgun_2",
     "Blueprint_PumpActionShotgun_3",
     "Blueprint_PumpActionShotgun_4",
     "Blueprint_PumpActionShotgun_5",
     "Blueprint_HandGun_Default_2",
     "Blueprint_HandGun_Default_3",
     "Blueprint_HandGun_Default_4",
     "Blueprint_HandGun_Default_5",
     "Blueprint_Launcher_Default_2",
     "Blueprint_Launcher_Default_3",
     "Blueprint_Launcher_Default_4",
     "Blueprint_Launcher_Default_5",
     "ClothArmor_2",
     "ClothArmor_3",
     "ClothArmor_4",
     "ClothArmor_5",
     "FurArmor_2",
     "FurArmor_3",
     "FurArmor_4",
     "FurArmor_5",
     "CopperArmor_2",
     "CopperArmor_3",
     "CopperArmor_4",
     "CopperArmor_5",
     "IronArmor_2",
     "IronArmor_3",
     "IronArmor_4",
     "IronArmor_5",
     "StealArmor_2",
     "StealArmor_3",
     "StealArmor_4",
     "StealArmor_5",
     "Blueprint_ClothArmor_2",
     "Blueprint_ClothArmor_3",
     "Blueprint_ClothArmor_4",
     "Blueprint_ClothArmor_5",
     "Blueprint_FurArmor_2",
     "Blueprint_FurArmor_3",
     "Blueprint_FurArmor_4",
     "Blueprint_FurArmor_5",
     "Blueprint_CopperArmor_2",
     "Blueprint_CopperArmor_3",
     "Blueprint_CopperArmor_4",
     "Blueprint_CopperArmor_5",
     "Blueprint_IronArmor_2",
     "Blueprint_IronArmor_3",
     "Blueprint_IronArmor_4",
     "Blueprint_IronArmor_5",
     "Blueprint_StealArmor_2",
     "Blueprint_StealArmor_3",
     "Blueprint_StealArmor_4",
     "Blueprint_StealArmor_5",
     "Poppy",
     "Opium",
     "Narcotic",
     "StatusPointResetSan",
     "ClothArmorHeat",
     "ClothArmorCold",
     "FurArmorHeat",
     "FurArmorCold",
     "CopperArmorHeat",
     "CopperArmorCold",
     "IronArmorHeat",
     "IronArmorCold",
     "StealArmorHeat",
     "StealArmorCold",
     "Spear_QueenBee",
     "Spear_SoldierBee",
     "Spear_ForestBoss",
     "DecalGun_1",
     "DecalGun_2",
     "DecalGun_3",
     "DecalGun_4",
     "DecalGun_5",
     "InkBullet",
     "PalFluid",
     "Meat_ChickenPal",
     "Meat_SheepBall",
     "Meat_Kelpie",
     "Meat_Eagle",
     "Meat_Boar",
     "Meat_LazyCatfish",
     "Meat_Deer",
     "Meat_IceDeer",
     "Meat_BerryGoat",
     "Meat_CowPal",
     "Meat_SakuraSaurus",
     "Meat_GrassMammoth",
     "BakedMeat_ChickenPal",
     "BakedMeat_SheepBall",
     "BakedMeat_Kelpie",
     "BakedMeat_Eagle",
     "BakedMeat_Boar",
     "BakedMeat_LazyCatfish",
     "BakedMeat_Deer",
     "BakedMeat_IceDeer",
     "BakedMeat_BerryGoat",
     "BakedMeat_CowPal",
     "BakedMeat_SakuraSaurus",
     "BakedMeat_GrassMammoth",
     "ChickenSaute",
     "GrilledSheepHerbs",
     "GenghisKhan",
     "Eaglestew",
     "BaconEggs",
     "StewedIceDeer",
     "FriedChicken",
     "HotDog_2",
     "DeerLocoMoco",
     "DeerStew",
     "Hamburger_2",
     "Cheeseburger_2",
     "FriedKelpie",
     "Chowder",
    };
}