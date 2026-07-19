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
					"A3_Soft_F"
				};
		weapons[] = 
		{
			"PB_90mm_Smoothbore",
		};
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class OPTRE_CowsSlot_Rail;

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
	class launch_RPG7_F : Launcher_Base_F
	{
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			class CowsSlot;
			class PointerSlot;
		};
	};

	class Launcher;
	class launch_O_Titan_F;
	class PB_M57_Pilum : launch_O_Titan_F
	{
		author = "1stmeu";
		model = "\PR_UNSC\pilum\m57_pilum.p3d";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		handAnim[] = { "OFP2_ManSkeleton","\PR_UNSC\pilum\data\anim\handanim.rtm","Spartan_ManSkeleton","\PR_UNSC\pilum\data\anim\handanim_spartan.rtm" };
		hiddenSelections[] = { "camoBody","camoMag" };
		hiddenSelectionsTextures[] = { "PR_UNSC\pilum\data\Pilum_co.paa","PR_UNSC\pilum\data\PilumMag_co.paa" };
		magazines[] = { "PB_M57_Pilum_Cluster_HE_Mag" };
		magazineWell[] = { "PB_M57_Pilum_Magwell" };
		displayName = "[66th] M57 Pilum Assault Weapon";
		reloadAction = "MEU_Reload_M57_Pilum";
		magazineReloadTime = 2;
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
		modes[] = { "Single","TopDown" };

		muzzles[] = { "this", };
		picture = "\PR_UNSC\pilum\data\icon\Pilum_Arsenal_Image_Standard.paa";

	};




};

class CfgMagazineWells
{
	class PB_M57_Pilum_Magwell
	{
		offensive[] = { "Pb_M57_Pilum_HEAT_Mag","PB_M57_Pilum_HE_Mag","PB_M57_Pilum_Cluster_HE_Mag","PB_M57_Pilum_AP_Mag" };
	};
};

class CfgMagazines
{
	class MRAWS_HEAT_F;
	class PB_M57_Pilum_HEAT_Mag : MRAWS_HEAT_F
	{
		allowedSlots[] = { 901,701 };
		ammo = "MEU_M57_Pilum_HEAT";
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

};


class CfgAmmo
{
	class ACE_Javelin_FGM148;

	class PB_M57_Pilum_Cluster_HE : ACE_Javelin_FGM148
	{
		airlock = 0;
		irLock = 1;
		missileKeepLockedCone = 160;
		missileLockCone = 4.5;
		missileLockMaxDistance = 2000;
		missileLockMaxSpeed = 35;
		missileLockMinDistance = 50;
		missileManualControlCone = 45;
		nvLock = 0;
		weaponLockSystem = "2 + 16";
		whistleDist = 4;
		whistleonfire = 1;


		CraterEffects = "ATMissileCrater";
		effectsmissile = "EmptyEffect";
		explosionEffects = "GrenadeExplosion";
		explosionSoundEffect = "EmptyEffect";
		ace_frag_enabled = 0;
		ace_frag_classes[] = {};
		ace_frag_metal = 0;
		class EventHandlers
		{
			ammoHit = "[['MEU_M57_Pilum_Cluster_HE_Trigger',[0,0,0],0,0],_this] remoteExec ['aux_1stMEU_fnc_submunition_trigger_here',2];";
		};
	};

};