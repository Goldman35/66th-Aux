class CfgPatches
{
	class PB_Guns_ThisSucks
	{
		author = "F66th Pebbles";
			units[] = 
		{ 
		};
			requiredAddons[] =
				{
					"OPTRE_Core",
					"OPTRE_Vehicles",
					"DMNS_Core",
					"OPTRE_Core",
					"A3_Air_F",
					"A3_Air_F_Beta",
					"A3_Weapons_F",
					"A3_Soft_F_Exp",
					"A3_Armor_F_Beta",
					"A3_Soft_F",
					"CBRN_Weapons",
					"Misriah_Armory_Weapons"
				};
		weapons[] = 
		{
			"PB_90mm_Smoothbore",
			"PB_M57_Pilum",
			"PB_GRL_45",
			"PB_RGL_45"

		};
	};
};

class Rifle;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class bipod_01_F_blk;
class single_medium_optics1;
class WeaponSlotsInfo;
class OPTRE_CowsSlot_Rail;

class CfgAmmo
{
	class M_Titan_AP;
	class M_Titan_AT;
	class PB_M57_Pilum_Cluster_HE : M_Titan_AP
	{
		CraterEffects = "ATMissileCrater";
		effectsmissile = "EmptyEffect";
		explosionEffects = "GrenadeExplosion";
		explosionSoundEffect = "EmptyEffect";
		timeToLive = 45;
		ace_frag_enabled = 0;
		ace_frag_classes[] = {};
		ace_frag_metal = 0;
		class EventHandlers
		{
			ammoHit = "[['MEU_M57_Pilum_Cluster_HE_Trigger',[0,0,0],0,0],_this] remoteExec ['aux_1stMEU_fnc_submunition_trigger_here',2];";
		};
		flightProfiles[] = { "Direct","TopDown" };
		class Direct {};
		class TopDown
		{
			ascendHeight = 150.0;
			descendDistance = 180.0;
			minDistance = 180.0;
			ascendAngle = 30.0;
		};
	};

	class PB_M57_Pilum_HEAT : M_Titan_AT
	{
		submunitionAmmo = "MEU_ammo_Penetrator_HEAT_M47_Pilum";
		lockSeekRadius = 100;
		whistleDist = 8;
		airLock = 1;
		lockType = 0;
		missileLockCone = 6.5;
		missileKeepLockedCone = 160;
		missileLockMaxDistance = 23500;
		missileLockMinDistance = 50;
		missileLockMaxSpeed = 50;
		manualControl = 1;
		missileManualControlCone = 45;
		maxControlRange = 2500;
		weaponLockSystem = "2 + 16";
		cmImmunity = 0.4;

		caliber = 10;
		hit = 950;
		indirectHit = 50;
		indirectHitRange = 1;
		timeToLive = 30;
		allowAgainstInfantry = 0;

		flightProfiles[] = { "Direct","TopDown" };
		class Direct {};
		class TopDown
		{
			ascendHeight = 175.0;
			descendDistance = 180.0;
			minDistance = 180.0;
			ascendAngle = 60.0;
		};
	};


	class SmokeShell;
	class PB_CW_base : SmokeShell
	{
		model = "PHAN_CW\CBRN_Weapons\models\Blue_PHEN_ChemGrenade.p3d";
		dangerRadiusHit = -1;
		suppressionRadiusHit = 20;
		typicalSpeed = 22;
		cost = 40;
		explosive = 1e-77;
		ACE_damageType = "punch";
		deflecting = 15;
		explosionTime = -1;
		timeToLive = 45;
		grenadeBurningSound[] = {};
		aiAmmoUsageFlags = "64";
		smokeColor[] = { 0,0,0,0 };
		effectsSmoke = "";
		whistleDist = 0;
		grenadeFireSound[] = {};
		PHEN_ChemNade = 1;
	};
	class PB_CS_gas_40mm : PB_CW_base
	{
		simulation = "shotSmoke";
		model = "\A3\weapons_f\ammo\UGL_slug";
		warheadName = "CS";
		CBRN_isProjectile = 1;
		CBRN_chemicalType = 0;
		airFriction = -0.001;
		fuseDistance = 3;
		access = 3;
		explosive = 0;
		deflecting = 3;
		deflectionSlowDown = 1;
		explosionTime = -1;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0.2;
		dangerRadiusHit = -1;
		suppressionRadiusHit = -1;
		typicalspeed = 28;

	};
	class PB_Asx_gas_40mm : PB_CW_base
	{
		simulation = "shotSmoke";
		model = "\A3\weapons_f\ammo\UGL_slug";
		warheadName = "Asphx";
		CBRN_isProjectile = 1;
		CBRN_chemicalType = 1;
		airFriction = -0.001;
		fuseDistance = 3.5;
		access = 3;
		explosive = 0;
		deflecting = 3;
		deflectionSlowDown = 1;
		explosionTime = 7;
		hit = 0;
		indirectHit = 0;
		indirectHitRange = 0.2;
		dangerRadiusHit = -1;
		suppressionRadiusHit = -1;
		typicalspeed = 24;
	};

	class BulletBase;
	class PB_Cassul : BulletBase
	{
		hit = 65;
		indirectHit = 5;
		indirectHitRange = 0.3;
		visibleFire = 32;
		audibleFire = 32;
		visibleFireTime = 2;
		explosive = 0.5;
		cartridge = "";
		explosionSoundEffect = "DefaultExplosion";
		CraterEffects = "";
		explosionEffects = "";
		typicalSpeed = 950;
		caliber = 5;
		tracerScale = 0.6;
		tracerStartTime = 0.0075;
		tracerEndTime = 5;
	};
	class PB_Cassul_HE
	{
		hit = 45;
		explosive = 15;
	};
};
class cfgWeapons
{
	class DMNS_90mm_M512;
	class PB_90mm_Smoothbore : DMNS_90mm_M512
	{
		displayName = "90mm Smoothbore Cannon";
		descriptionShort = "Nailed the Neighbors Dog";
		magazines[] = { "DMNS_64Rnd_90mm_APBC","DMNS_32Rnd_90mm_SAPHE", "DMNS_32Rnd_90mm_HEAT", "OPTRE_10Rnd_90mm_S1" };
		cursor = "EmptyCursor";
		cursorAim = "OPTRE_M512";
		magazinereloadTime = 5.2;
		reloadTime = 5.2;
		class gunParticles
		{
			class FirstEffect
			{
				effectName = "CannonFired";
				positionName = "Usti hlavne";
				directionName = "Konec hlavne";
			};
			class ejectshellcase
			{
				directionName = "nabojniceend";
				effectName = "OPTRE_90mmShellcase";
				positionName = "nabojnicestart";
			};
		};
		class player : Mode_SemiAuto
		{
			sounds[] =
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[] =
				{
					"A3\Sounds_F\arsenal\weapons_vehicles\cannon_120mm\slammer_120mm_distant",
					3.1622777,
					1,
					1500
				};
				soundBegin[] =
				{
					"begin1",
					1
				};
			};
			soundContinuous = 0;
			reloadTime = 5.2;
			magazineReloadTime = 5.2;
			autoReload = 1;
			autoFire = 0;
			dispersion = 0.00056999997;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.0099999998;
			midRange = 1;
			midRangeProbab = 0.0099999998;
			maxRange = 2;
			maxRangeProbab = 0.0099999998;
		};
		class TopDown : player
		{
			textureType = "topDown";
			displayName = "$STR_A3_FireMode_TopDown0";
			minRange = 150;
			minRangeProbab = 0.40000001;
			midRange = 400;
			midRangeProbab = 0.94999999;
			maxRange = 8000;
			maxRangeProbab = 0.94999999;
		};
		class close : player
		{
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 6;
			aiRateOfFireDispersion = 0.5;
			aiRateOfFireDistance = 500;
			minRange = 5;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.80000001;
			maxRange = 1000;
			maxRangeProbab = 0.85000002;
		};
		class short : close
		{
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 6;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.30000001;
			midRange = 1000;
			midRangeProbab = 0.85000002;
			maxRange = 1500;
			maxRangeProbab = 0.85000002;
		};
		class medium : close
		{
			dispersion = 0.00071250001;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 8;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 1250;
			minRange = 1000;
			minRangeProbab = 0.60000002;
			midRange = 1500;
			midRangeProbab = 0.85000002;
			maxRange = 2000;
			maxRangeProbab = 0.80000001;
		};
		class far : close
		{
			dispersion = 0.00071250001;
			showToPlayer = 0;
			burst = 1;
			burstRangeMax = 1;
			aiRateOfFire = 10;
			aiRateOfFireDispersion = 8;
			aiRateOfFireDistance = 1500;
			minRange = 1500;
			minRangeProbab = 0.75;
			midRange = 2000;
			midRangeProbab = 0.80000001;
			maxRange = 3500;
			maxRangeProbab = 0.050000001;
		};
	};


	class Launcher;
	class Launcher_Base_F : Launcher
	{
		class WeaponSlotsInfo;
	};
	class launch_Titan_base : Launcher_Base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot;
			class PointerSlot;
		};
	};
	class MEU_M57_Pilum;
	class PB_M57_Pilum : launch_Titan_base
	{
		author = "1stmeu";
		model = "\PR_UNSC\pilum\m57_pilum.p3d";
		baseWeapon = "";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		lockAcquire = 0;
		handAnim[] = { "OFP2_ManSkeleton","\PR_UNSC\pilum\data\anim\handanim.rtm","Spartan_ManSkeleton","\PR_UNSC\pilum\data\anim\handanim_spartan.rtm" };
		hiddenSelections[] = { "camoBody","camoMag" };
		hiddenSelectionsTextures[] = { "PR_UNSC\pilum\data\Pilum_co.paa","PR_UNSC\pilum\data\PilumMag_co.paa" };
		magazines[] = { "PB_M57_Pilum_Cluster_HE_Mag" };
		magazineWell[] = { "PB_M57_Pilum_Magwell" };
		displayName = "[66th] M57 Pilum Assault Weapon";
		reloadAction = "MEU_Reload_M57_Pilum";
		magazineReloadTime = 3;
		maxZeroing = 2000;
		class GunParticles
		{
			class effect1
			{
				positionName = "konec hlavne";
				directionName = "usti hlavne";
				effectName = "RocketBackEffectsRPGNT";
			};
		};
		modes[] = { "Direct", "TopDown" };
		class Direct : Mode_SemiAuto
		{
			textureType = "direct";
			displayName = "Direct"
				sounds[] = { "StandardSound" };
			class BaseSoundModeType {};
			class StandardSound : BaseSoundModeType
			{
				begin1[] = { "A3\Sounds_F\arsenal\weapons\Launchers\RPG32\rpg32",1.99526,1,1500 };
				soundBegin[] = { "begin1",1 };
				soundSetShot[] = { "Launcher_RPG7_Shot_SoundSet","Launcher_RPG7_Tail_SoundSet" };
			};
			recoil = "recoil_single_law";
			aiRateOfFire = 7;
			aiRateOfFireDistance = 600;
			minRange = 10;
			minRangeProbab = 0.7;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 1000;
			maxRangeProbab = 0.1;
			reloadTime = 0.75;
		};
		class TopDown : Direct {
			textureType = "topdown";
			displayName = "Top-Down";
		};

		muzzles[] = { "this", };
		picture = "\PR_UNSC\pilum\data\icon\Pilum_Arsenal_Image_Standard.paa";

		weaponLockSystem = 2;


	};

	class Rifle_Base_F : Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class MA_GRL_45;


	class PB_RGL_45 : Rifle_Base_F
	{
		optics = 0;
		scope = 2;
		scopeArsenal = 2;
		ace_overheating_mrbs = 3000000000;
		ACE_Overheating_SlowdownFactor = 0;
		ACE_Overheating_JamChance = 0;
		ACE_Overheating_Dispersion = 0;
		ACE_overheating_allowSwapBarrel = 0;
		author = "Misriah Armory Dev Team & MSGDI";
		model = "\MA_Weapons\data\GRL_45.p3d";
		displayName = "[F66th] GRL-45 Rotary Grenade Launcher";
		descriptionShort = "Rotary Grenade Launcher";
		cursor = "GL_Crosshair";
		picture = "\MA_Weapons\data\GRL45\UI\GRL45_icon_ca.paa";
		handAnim[] = { "OFP2_ManSkeleton","MA_Weapons\data\anim\GRL45.rtm" };
		hiddenSelections[] = { "camo1","camo2","camo3" };
		hiddenSelectionsTextures[] = { "\MA_Weapons\data\GRL45\GL_Black_co.paa","\MA_Weapons\data\GRL45\GL_Black2_co.paa","\MA_Weapons\data\GRL45\GL_Sight_ca.paa" };
		ace_clearJamAction = "GestureReloadGRL45";
		reloadAction = "GestureReloadGRL45";
		changeFiremodeSound[] = { "A3\Sounds_F\arsenal\weapons\UGL\Firemode_ugl",0.31622776,1,5 };
		reloadMagazineSound[] = { "A3\Sounds_F\arsenal\weapons\UGL\Reload_UGL",0.56234133,1,10 };
		magazines[] = {};
		magazineWell[] = { "PB_40mm_M203_6rnds" };
		modes[] = { "Single" };
		class Single : Mode_SemiAuto
		{
			sounds[] = { "StandardSound" };
			class BaseSoundModeType
			{
				closure1[] = { "A3\Sounds_F\arsenal\weapons\UGL\Closure_UGL",1,1,10 };
				soundClosure[] = { "closure1",1 };
			};
			class StandardSound : BaseSoundModeType
			{
				begin1[] = { "MA_Weapons\data\GRL45\GRL45_Fire.ogg",1.5,1,1800 };
				begin2[] = { "MA_Weapons\data\GRL45\GRL45_Fire.ogg",1.5,1.015,1800 };
				begin3[] = { "MA_Weapons\data\GRL45\GRL45_Fire.ogg",1.5,0.985,1800 };
				begin4[] = { "MA_Weapons\data\GRL45\GRL45_Fire.ogg",1.5,1.01,1800 };
				begin5[] = { "MA_Weapons\data\GRL45\GRL45_Fire.ogg",1.5,0.995,1800 };
				soundBegin[] = { "begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2 };
			};
			reloadTime = 0.075;
			dispersion = 0.0002909;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		ffMagnitude = 0.1;
		ffFrequency = 1;
		ffCount = 1;
		dispersion = 0.007;
		cartridgePos = "";
		cartridgeVel = "";
		drySound[] = { "A3\sounds_f\weapons\Other\dry_1",0.01,1 };
		class OpticsModes
		{
			class Iron
			{
				opticsID = 1;
				opticsDisplayName = "";
				useModelOptics = 0;
				opticsPPEffects[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				discretefov[] = {};
				discreteDistance[] = { 50 };
				discreteDistanceInitIndex = 0;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				discreteInitIndex = 0;
				cameraDir = "";
			};
			class Indirect
			{
				opticsID = 2;
				opticsDisplayName = "";
				useModelOptics = 0;
				opticsPPEffects[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				visionMode[] = {};
				discretefov[] = {};
				cameraDir = "opticview";
				memoryPointCamera = "GRL_eye100m";
				discreteDistance[] = { 100,150,200,250,300,350,400 };
				discreteDistanceCameraPoint[] = { "GRL_100m","GRL_150m","GRL_200m","GRL_250m","GRL_300m","GRL_350m","GRL_400m" };
				discreteDistanceInitIndex = 0;
				distanceZoomMin = 100;
				distanceZoomMax = 400;
				discreteInitIndex = 0;
			};
		};
		aimTransitionSpeed = 0.7;
		magazineReloadSwitchPhase = 0.5;
		maxRecoilSway = 0.0125;
		swayDecaySpeed = 1.25;
		useModelOptics = 0;
		useExternalOptic = 0;
		muzzlePos = "usti_granatometu";
		muzzleEnd = "konec_granatometu";
		class CowsSlot {};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 120;
			class CowsSlot : CowsSlot
			{
				compatibleItems[] = {};
			};
			class PointerSlot : PointerSlot
			{
				compatibleItems[] = {};
			};
			class UnderBarrelSlot : UnderBarrelSlot
			{
				compatibleItems[] = {};
			};
		};
		class GunParticles : GunParticles
		{
			class effect1
			{
				effectName = "GrenadeLauncherCloud";
				positionName = "usti_granatometu";
				directionName = "konec_granatometu";
			};
		};
	};


	class EQPLUS_20XRevolver;
	class PB_20XRevolver : EQPLUS_20XRevolver
	{
		displayName = "[F66th] 20X Heavy Revolver";
		scope = 2;
		picture = "\EquipmentPlus\20XRevolver\textures\revolver_icon_CA.paa";
		model = "\EquipmentPlus\20XRevolver\20XRevolver.p3d";
		magazines[] = { "EQPLUS_20X_EMPDartMag" };
		maxZeroing = 2000;
		magazineWell[] = { "EQPLUS_20X_Revolver_MagWell", "PB_20x_Speedloader"};
		hiddenSelectionsTextures[] = { "\EquipmentPlus\20XRevolver\textures\20XRevolver\revolver_CO.paa" };
		hiddenSelectionsMaterials[] = { "\EquipmentPlus\20XRevolver\textures\20XRevolver\revolver.rvmat" };
	};

};

class CfgMagazines
{
	class MRAWS_HEAT_F;
	class PB_M57_Pilum_HEAT_Mag : MRAWS_HEAT_F
	{
		allowedSlots[] = { 901,701 };
		ammo = "PB_M57_Pilum_HEAT";
		descriptionShort = "Type: HEAT Rocket<br />Rounds: 2<br />Used in: M57 Pilum";
		displayName = "HEAT Round";
		mass = 30;
		count = 2;
		picture = "\PR_UNSC\pilum\data\icon\HEAT.paa";
		modelSpecial = "\PR_UNSC\pilum\m57_pilum_mag.p3d";
		model = "\PR_UNSC\pilum\m57_pilum_mag_floor.p3d";
		modelSpecialIsProxy = 1;
		hiddenSelections[] = { "camoMag" };
		hiddenSelectionsTextures[] = { "\PR_UNSC\pilum\data\PilumMag_co.paa" };
		hiddenSelectionsMaterials[] = { "\PR_UNSC\pilum\data\PilumMag.rvmat" };
	};
	class PB_M57_Pilum_HE_Mag : PB_M57_Pilum_HEAT_Mag
	{
		descriptionShort = "Type: HE Rocket<br />Rounds: 2<br />Used in:  M57 Pilum";
		displayName = "HE Round";
		displaynameshort = "HE";
		ammo = "MEU_M57_Pilum_HE";
		mass = 20;
		picture = "\PR_UNSC\pilum\data\icon\HE_Round.paa";
	};
	class PB_M57_Pilum_Cluster_HE_Mag : PB_M57_Pilum_HEAT_Mag
	{
		descriptionShort = "Type: Cluster HE Rocket<br />Rounds: 2<br />Used in:  M57 Pilum";
		displayName = "Cluster HE Round";
		displaynameshort = "Cluster HE";
		ammo = "PB_M57_Pilum_Cluster_HE";
		mass = 40;
		picture = "\PR_UNSC\pilum\data\icon\Cluster_HE_Round.paa";
	};
	class PB_M57_Pilum_AP_Mag : PB_M57_Pilum_HEAT_Mag
	{
		descriptionShort = "Type: AP Rocket<br />Rounds: 2<br />Used in:  M57 Pilum";
		displayName = "AP Round";
		displaynameshort = "AP";
		ammo = "MEU_M57_Pilum_AP";
		mass = 40;
		picture = "\PR_UNSC\pilum\data\icon\AP.paa";
	};

	class 5Rnd_127x108_APDS_Mag;
	class PB_Cassul_Speedloader : 5Rnd_127x108_APDS_Mag
	{
		count = 6;
		tracersEvery = 1;
		displayNameShort = ".454";
		displayName = ".454 Cassul";
		picture = "\EquipmentPLUS\Data\TS_Icon_CA.paa";
		ammo = "PB_Cassul";
	};
	class PB_Cassule_HE_Speedloader : 5Rnd_127x108_APDS_Mag
	{
		count = 6;
		tracersEvery = 1;
		displayNameShort = ".454 HE";
		displayName = ".454 Cassul";
		ammo = "PB_Cassul_HE";
	};
		class PB_20mm_Speedloader : 5Rnd_127x108_APDS_Mag
	{
		count = 6;
		tracersEvery = 1;
		displayNameShort = "20mm";
		displayName = "20mm APFSDS";
		ammo = "OPTRE_B_20mm_APFSDS";
	};

	class 1Rnd_HE_Grenade_shell;

	// riot/base
	class PB_40mm_riot_6rnd : 1Rnd_HE_Grenade_shell
	{
		scope = 2;
		scopeArsenal = 2;
		author = "F66th Pebbles";
		ammo = "PB_CS_gas_40mm";
		displayName = "[F66th] 6 Round Riot gas canisters(40mm)";
		displayNameShort = "Riot";
		descriptionShort = "6rnd irritant";
		count = 6;
		mass = 24;
	};
	class PB_40mm_riot_12rnd : 1Rnd_HE_Grenade_shell
	{
		scope = 2;
		scopeArsenal = 2;
		author = "F66th Pebbles";
		ammo = "PB_CS_gas_40mm";
		displayName = "[F66th] 12 Round Riot gas canisters(40mm)";
		displayNameShort = "Riot";
		descriptionShort = "12rnd irritant";
		count = 12;
		mass = 48;
	};
	//Asphyxiant
	class PB_40mm_asphyx_6rnd : PB_40mm_riot_6rnd
	{
		scope = 2;
		scopeArsenal = 2;
		ammo = "PB_ASX_gas_40mm";
		displayName = "[F66th] 6 Round Asphyxiant gas canisters(40mm)";
		displayNameShort = "Asphyxiant";
		descriptionShort = "6rnd chokeout";
	};
	class PB_40mm_asphyx_12rnd : PB_40mm_riot_12rnd
	{
		scope = 2;
		scopeArsenal = 2;
		ammo = "PB_ASX_gas_40mm";
		displayName = "[F66th] 12 Round Asphyxiant gas canisters(40mm)";
		displayNameShort = "Asphyxiant";
		descriptionShort = "12rnd chokeout";
	};
};

class CfgMagazineWells
{
	class PB_40mm_M203_6rnds
	{
		MA_GL_Magazines[] = 
		{ 
			"GRL45_6rnd_HE",
			"GRL45_6rnd_HEDP",
			"GRL45_6rnd_Whistle",
			"GRL45_6rnd_Smoke_White",
			"GRL45_6rnd_Smoke_Red",
			"GRL45_6rnd_Smoke_Green",
			"GRL45_6rnd_Flare_White",
			"GRL45_6rnd_Flare_Green",
			"GRL45_6rnd_Flare_Red",
			"GRL45_6rnd_Flare_Yellow",
			"GRL45_6rnd_Flare_CIR",
			"PB_40mm_asphyx_12rnd",
			"PB_40mm_asphyx_6rnd",
			"PB_40mm_riot_12rnd",
			"PB_40mm_riot_6rnd"
		};
	};
	class PB_M57_Pilum_Magwell
	{
		offensive[] = { "Pb_M57_Pilum_HEAT_Mag","PB_M57_Pilum_HE_Mag","PB_M57_Pilum_Cluster_HE_Mag","PB_M57_Pilum_AP_Mag" };
	};
	class PB_20x_Speedloader
	{
		BI_Magazines[] = { "PB_Cassul_Speedloader","PB_20mm_Speedloader","PB_Cassule_HE_Speedloader", };
	};
};