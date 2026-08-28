class CfgPatches
{
	class PB_Vehicles_M511
	{
		author = "F66th Pebbles";
			units[] = 
		{ 
			"PB_M511_Springbok_APC",
			"PB_M511_Springbok_MGS",
			"PB_M511_Springbok_AA",
			"PB_M511_Springbok_IFV",
			"PB_Falcon"
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
		weapons[] = {};
	};
};

class CfgVehicles
{
	class textureSources;

	class LandVehicle;
	class Car : LandVehicle
	{
		class Hitpoints;
		class NewTurret;
	};
	class Car_F : Car
	{
		class AnimationSources
		{
			class HitLFWheel;
			class HitRFWheel;
			class HitBody;
			class HitEngine;
			class HitLF2Wheel;
			class HitRF2Wheel;
			class Gatling;
			class HitGlass1;
			class Gatling_flash;
		};
		class HitPoints /// we want to use hitpoints predefined for all cars
		{
			class HitEngine;
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitFuel;
			class HitGlass1;
		};
		class EventHandlers;
		class Turrets
		{
			class MainTurret :NewTurret
			{
				class ViewOptics;
				class ViewGunner;
			};
		};
	};




	//Springbok

	class DMNS_M511_Springbok_APC;
	class PB_M511_Springbok_APC : DMNS_M511_Springbok_APC
	{
		author = "F66th Pebbles";
		displayName = "M511 APC";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_APCs";
		hiddenSelections[] = {
			"Camo1",		//Body
			"Camo2",		//Interior
			"Camo3",		//Details
			"otochlaven_2",		//MG
			"otochlaven"	//Main Gun
		};
		hiddenSelectionsTextures[] = {
					"F66th_Vehicles\data\m511\M511_Body_co.paa",
					"F66th_Vehicles\data\m511\M511_Interior_co.paa",
					"F66th_Vehicles\data\m511\M511_Details_co.paa",
					"F66th_Vehicles\data\m511\M511_M247H_co.paa",
					"F66th_Vehicles\data\m511\M511_APC_co.paa"
		};
		class textureSources
		{
			class F66th
			{
				displayName = "F66th";
				author = "F66th Pebbles";
				textures[] = {
					"F66th_Vehicles\data\m511\M511_Body_co.paa",
					"F66th_Vehicles\data\m511\M511_Interior_co.paa",
					"F66th_Vehicles\data\m511\M511_Details_co.paa",
					"F66th_Vehicles\data\m511\M511_M247H_co.paa",
					"F66th_Vehicles\data\m511\M511_IFV_co.paa",
					"F66th_Vehicles\data\m511\M511_AA_co.paa",
					"F66th_Vehicles\data\m511\M511_MGS_co.paa",
					"F66th_Vehicles\data\m511\M511_APC_co.paa"
				};
				factions[] = { "F66th_Hellwalkers" };
			};
		};
		armor = 750;
	};

	class DMNS_M511_Springbok_MGS;
	class PB_M511_Springbok_MGS : DMNS_M511_Springbok_MGS
	{
		author = "F66th Pebbles";
		displayName = "M511 MGS";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_APCs";
		hiddenSelections[] = {
			"Camo1",		//Body
			"Camo2",		//Interior
			"details",		//Details
			"otochlaven_2",		//MG
			"otochlaven"	//Main Gun
		};
		hiddenSelectionsTextures[] = {
					"F66th_Vehicles\data\m511\M511_Body_co.paa",
					"F66th_Vehicles\data\m511\M511_Interior_co.paa",
					"F66th_Vehicles\data\m511\M511_Details_co.paa",
					"F66th_Vehicles\data\m511\M511_M247H_co.paa",
					"F66th_Vehicles\data\m511\M511_MGS_co.paa"
		};
		class textureSources
		{
			class F66th
			{
				displayName = "F66th";
				author = "F66th Pebbles";
				textures[] = {
					"F66th_Vehicles\data\m511\M511_Body_co.paa",
					"F66th_Vehicles\data\m511\M511_Interior_co.paa",
					"F66th_Vehicles\data\m511\M511_Details_co.paa",
					"F66th_Vehicles\data\m511\M511_M247H_co.paa",
					"F66th_Vehicles\data\m511\M511_IFV_co.paa",
					"F66th_Vehicles\data\m511\M511_AA_co.paa",
					"F66th_Vehicles\data\m511\M511_MGS_co.paa",
					"F66th_Vehicles\data\m511\M511_APC_co.paa"
				};
				factions[] = { "F66th_Hellwalkers" };
			};
		};
		armor = 750;
	};
	class PB_M511_Springbok_Funny : DMNS_M511_Springbok_MGS
	{
		author = "F66th Pebbles";
		displayName = "Yeet Cannon";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_APCs";
		hiddenSelections[] = {
			"Camo1",		//Body
			"Camo2",		//Interior
			"details",		//Details
			"otochlaven_2",		//MG
			"otochlaven"	//Main Gun
		};
		hiddenSelectionsTextures[] = {
					"F66th_Vehicles\data\m511\M511_Body_co.paa",
					"F66th_Vehicles\data\m511\M511_Interior_co.paa",
					"F66th_Vehicles\data\m511\M511_Details_co.paa",
					"F66th_Vehicles\data\m511\M511_M247H_co.paa",
					"F66th_Vehicles\data\m511\M511_MGS_co.paa"
		};
		class textureSources
		{
			class F66th
			{
				displayName = "F66th";
				author = "F66th Pebbles";
				textures[] = {
					"F66th_Vehicles\data\m511\M511_Body_co.paa",
					"F66th_Vehicles\data\m511\M511_Interior_co.paa",
					"F66th_Vehicles\data\m511\M511_Details_co.paa",
					"F66th_Vehicles\data\m511\M511_M247H_co.paa",
					"F66th_Vehicles\data\m511\M511_IFV_co.paa",
					"F66th_Vehicles\data\m511\M511_AA_co.paa",
					"F66th_Vehicles\data\m511\M511_MGS_co.paa",
					"F66th_Vehicles\data\m511\M511_APC_co.paa"
				};
				factions[] = { "F66th_Hellwalkers" };
			};
		};
		armor = 750;

		class Turrets
		{
			class MainTurret
			{
				isCopilot = 1;
				CanEject = 0;
				body = "mainturret";
				gun = "maingun";
				animationsourcebody = "mainturret";
				animationSourceGun = "maingun";
				gunAxis = "Osa Hlavne";
				gunBeg = "Usti hlavne";
				gunEnd = "konec hlavne";
				ejectDeadGunner = 0;
				minElev = -12;
				maxElev = 20;
				initElev = 6;
				initTurn = 0;
				turretAxis = "OsaVeze";
				maxHorizontalRotSpeed = 1.75;
				maxVerticalRotSpeed = 1.5;
				gunnerAction = "Gunner_APC_Wheeled_01_in";
				gunnerInAction = "Gunner_APC_Wheeled_01_in";
				gunnerGetInAction = "GetInMRAP_01";
				gunnerGetOutAction = "GetOutMRAP_01";
				precisegetinout = 1;
				gunnerName = "Primary Gunner";
				proxyindex = 1;
				gunnerCompartments = "Compartment2";
				hideWeaponsGunner = 1;
				soundServo[] = { "A3\sounds_f\dummysound",9.999998e-07,1 };
				stabilizedInAxes = 3;
				commanding = 1;
				primaryGunner = 1;
				turretInfoType = "RscOptics_crows";
				discreteDistance[] = { 100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2500 };
				discreteDistanceInitIndex = 5;
				showAllTargets = 4;
				playerPosition = 3;
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				memoryPointGun = "machinegun";
				weapons[] = { "PB_YeetCannon","Laserdesignator_mounted" };
				magazines[] = { "DMNS_24ARnd_105mm_SAPHE","DMNS_24Rnd_105mm_HEAT","DMNS_24Rnd_105mm_APBC","Laserbatteries" };
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics = "gunnerview";
				castGunnerShadow = 1;
				startEngine = 0;
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_02_F.p3d";
				gunnerForceOptics = 0;
				hasGunner = 1;
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						opticsDisplayName = "WFOV";
						visionMode[] = { "Normal","NVG","Ti" };
						thermalMode[] = { 0,1 };
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium : Wide
					{
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						opticsDisplayName = "MFOV";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow : Wide
					{
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
						opticsDisplayName = "NFOV";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initFov = 0.9;
						minFov = 0.25;
						maxFov = 1.25;
						initAngleX = 0;
						initAngleY = 0;
						minAngleX = -65;
						maxAngleX = 85;
						minAngleY = -150;
						maxAngleY = 150;
						minMoveX = -0.2;
						maxMoveX = 0.2;
						minMoveY = -0.1;
						maxMoveY = 0.1;
						minMoveZ = -0.1;
						maxMoveZ = 0.2;
						visionMode[] = { "Normal","NVG" };
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
			};
		};
	};

	class DMNS_M511_Springbok_IFV;
	class PB_M511_Springbok_IFV : DMNS_M511_Springbok_IFV
	{
		author = "F66th Pebbles";
		displayName = "M511 IFV";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_APCs";
		hiddenSelections[] = {
			"Camo1",		//Body
			"Camo2",		//Interior
			"details",		//Details
			"otochlaven_2",		//MG
			"otochlaven"	//Main Gun
		};
		hiddenSelectionsTextures[] = {
					"F66th_Vehicles\data\m511\M511_Body_co.paa",
					"F66th_Vehicles\data\m511\M511_Interior_co.paa",
					"F66th_Vehicles\data\m511\M511_Details_co.paa",
					"F66th_Vehicles\data\m511\M511_M247H_co.paa",
					"F66th_Vehicles\data\m511\M511_IFV_co.paa"
		};
		class textureSources
		{
			class F66th
			{
				displayName = "F66th";
				author = "F66th Pebbles";
				textures[] = {
					"F66th_Vehicles\data\m511\M511_Body_co.paa",
					"F66th_Vehicles\data\m511\M511_Interior_co.paa",
					"F66th_Vehicles\data\m511\M511_Details_co.paa",
					"F66th_Vehicles\data\m511\M511_M247H_co.paa",
					"F66th_Vehicles\data\m511\M511_IFV_co.paa",
					"F66th_Vehicles\data\m511\M511_AA_co.paa",
					"F66th_Vehicles\data\m511\M511_MGS_co.paa",
					"F66th_Vehicles\data\m511\M511_APC_co.paa"
				};
				factions[] = { "F66th_Hellwalkers" };
			};
		};
		armor = 750;
		hasDriver = -1;
	};

	class DMNS_M511_Springbok_AA;
	class PB_M511_Springbok_AA : DMNS_M511_Springbok_AA
	{
		author = "F66th Pebbles";
		displayName = "M511 AA";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_APCs";
		hiddenSelections[] = {
			"Camo1",		//Body
			"Camo2",		//Interior
			"details",		//Details
			"otochlaven_2",		//MG
			"otochlaven"	//Main Gun
		};
		hiddenSelectionsTextures[] = {
					"F66th_Vehicles\data\m511\M511_Body_co.paa",
					"F66th_Vehicles\data\m511\M511_Interior_co.paa",
					"F66th_Vehicles\data\m511\M511_Details_co.paa",
					"F66th_Vehicles\data\m511\M511_M247H_co.paa",
					"F66th_Vehicles\data\m511\M511_AA_co.paa"
		};
		class textureSources
		{
			class F66th
			{
				displayName = "F66th";
				author = "F66th Pebbles";
				textures[] = {
					"F66th_Vehicles\data\m511\M511_Body_co.paa",
					"F66th_Vehicles\data\m511\M511_Interior_co.paa",
					"F66th_Vehicles\data\m511\M511_Details_co.paa",
					"F66th_Vehicles\data\m511\M511_M247H_co.paa",
					"F66th_Vehicles\data\m511\M511_IFV_co.paa",
					"F66th_Vehicles\data\m511\M511_AA_co.paa",
					"F66th_Vehicles\data\m511\M511_MGS_co.paa",
					"F66th_Vehicles\data\m511\M511_APC_co.paa"
				};
				factions[] = { "F66th_Hellwalkers" };
			};
		};
		armor = 750;
		hasDriver = -1;
	};

	//Silverback a115 base 250 updated

	class DMNS_Silverback_Armoured_LRV;
	class PB_Silverback_Armored_MG : DMNS_Silverback_Armoured_LRV {
		author = "F66th Pebbles";
		displayName = "Silverback Armored (MG)";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Cars";

		armor = 275;
	};

	class DMNS_Silverback_Armoured_TOW;
	class PB_Silverback_Armored_TOW : DMNS_Silverback_Armoured_TOW {
		author = "F66th Pebbles";
		displayName = "Silverback Armored (TOW)";
			scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Cars";

		armor = 250;
	};

	// Bulldog a115 base 175 updated

	class DMNS_Bulldog_LRV_AGL;
	class PB_Bulldog_AGL : DMNS_Bulldog_LRV_AGL {
		author = "F66th Pebbles";
		displayName = "Bulldog (AGL)";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Cars";

		armor = 200;
	};

	class DMNS_Bulldog_LRV_MG;
	class PB_Bulldog_MG : DMNS_Bulldog_LRV_MG {
		author = "F66th Pebbles";
		displayName = "Bulldog (MG)";
			scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Cars";

		armor = 175;
	};

	//Falcon

	class OPTRE_UNSC_UH_144S_Falcon_DAP;
	class PB_Falcon_Support_DAP : OPTRE_UNSC_UH_144S_Falcon_DAP {
		author = "F66th Pebbles";
		displayName = "Falcon Support, DAP";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Helicopters";

		hiddenSelectionsTextures[] = 
		{ 
			"F66th_Vehicles\data\Falcon\Falcon_main.paa",
			"F66th_Vehicles\data\Falcon\Falcon_attachments.paa",
			"\optre_vehicles_air\falcon\data\falcon_interior_co.paa",
			"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
			"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
			"\optre_vehicles_air\falcon\data\decal\unsc_var2\falcon_decal_ca.paa"
		};


		class UserActions
		{
			class polarize
			{
				userActionID = 50;
				displayName = "<img image='\OPTRE_FunctionsLibrary\vehicle_glass_polarize\icons\polarize.paa' size='2' /> Polarize";
				displayNameDefault = "<img image='\OPTRE_FunctionsLibrary\vehicle_glass_polarize\icons\polarize.paa' size='2.5' />";
				position = "";
				priority = 1.5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 0;
				showWindow = 1;
				condition = "((this getVariable['OPTRE_Glass_Polarized',0]) == 0) && ((missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) isEqualTo (driver this))";
				statement = "[this,'camoGlass','\OPTRE_Vehicles_Air\Falcon\data\Polarized\Falcon_Glass_ca.paa','\OPTRE_Vehicles_Air\Falcon\data\Falcon_Glass_ca.paa','\OPTRE_Vehicles_Air\Falcon\data\Polarized\Falcon_Glass_Polarized.rvmat','\OPTRE_Vehicles_Air\Falcon\data\Falcon_Glass.rvmat',0] call OPTRE_fnc_vehicle_glass_toggle_polarize;";
			};
			class depolo : polarize
			{
				userActionID = 51;
				displayName = "<img image='\OPTRE_FunctionsLibrary\vehicle_glass_polarize\icons\depolarize.paa' size='2' /> Depolarize";
				displayNameDefault = "<img image='\OPTRE_FunctionsLibrary\vehicle_glass_polarize\icons\depolarize.paa' size='2.5' />";
				condition = "((this getVariable['OPTRE_Glass_Polarized',0]) == 1) && ((missionNamespace getVariable ['bis_fnc_moduleRemoteControl_unit', player]) isEqualTo (driver this))";
				statement = "[this,'camoGlass','\OPTRE_Vehicles_Air\Falcon\data\Polarized\Falcon_Glass_ca.paa','\OPTRE_Vehicles_Air\Falcon\data\Falcon_Glass_ca.paa','\OPTRE_Vehicles_Air\Falcon\data\Polarized\Falcon_Glass_Polarized.rvmat','\OPTRE_Vehicles_Air\Falcon\data\Falcon_Glass.rvmat',0] call OPTRE_fnc_vehicle_glass_toggle_polarize;";
			};
			class CabinOpen
			{
				userActionID = 52;
				displayName = "Open Cabin";
				displayNameDefault = "Open Cabin";
				textToolTip = "Open Cabin";
				position = "cargo_door_handle";
				showWindow = 0;
				radius = 150;
				priority = 4;
				onlyForPlayer = 0;
				condition = "((this animationPhase ""cockpit_door"" < 0.5) AND (this animationPhase ""cockpit_slide"" < 0.5) AND (alive this) AND (player in [driver this]))";
				statement = "this animate [""cockpit_door"",1]; this animate [""cockpit_slide"",1];";
				animPeriod = 5;
			};
			class CabinClose : CabinOpen
			{
				userActionID = 53;
				displayName = "Close Cabin";
				displayNameDefault = "Close Cabin";
				textToolTip = "Close Cabin";
				condition = "((this animationPhase ""cockpit_door"" > 0.5) AND (this animationPhase ""cockpit_slide"" > 0.5) AND (alive this) AND (player in [driver this]))";
				statement = "this animate [""cockpit_door"",0]; this animate [""cockpit_slide"",0];";
			};
			class cyclePIP
			{
				userActionID = 54;
				displayName = "<img image='\OPTRE_FunctionsLibrary\Falcon_PIP\icons\cycle.paa' size='2'/> <t color='#61a2c9' >Cycle Camera</t>";
				displayNameDefault = "<img image='\OPTRE_FunctionsLibrary\Falcon_PIP\icons\cycle.paa' size='2.5' />";
				position = "";
				priority = 1.5;
				radius = 1.8;
				animPeriod = 2;
				onlyForplayer = 0;
				showWindow = 1;
				condition = "((alive this) AND (player in [driver this]))";
				statement = "[this] call OPTRE_fnc_falcon_pip_change_next;";
			};
			class togglePip : cyclePIP
			{
				userActionID = 55;
				displayName = "<img image='\OPTRE_FunctionsLibrary\Falcon_PIP\icons\toggle.paa' size='2'/> <t color='#ddd400' >Toggle  Camera</t>";
				displayNameDefault = "<img image='\OPTRE_FunctionsLibrary\Falcon_PIP\icons\toggle.paa' size='2.5' />";
				statement = "[this] call OPTRE_fnc_falcon_pip_toggle;";
			};
			class AirbrakeEngage
			{
				userActionID = 56;
				priority = 10;
				position = "";
				showWindow = 0;
				radius = 100000;
				onlyforPlayer = 0;
				animPeriod = 5;
				displayName = "ENGAGE AIRBRAKES";
				displayNameDefault = "ENGAGE AIRBRAKES";
				textToolTip = "ENGAGE AIRBRAKES";
				condition = "(!(this getvariable [""OPTRE_Thruster_EngagedStatus"",false])) AND (player == driver this) AND (alive this) AND ((speed this) > 100)";
				statement = "0 = this spawn OPTRE_fnc_AirbrakeEngage";
			};
		};
		armor = 90;
	};
	class PB_Falcon_Abbadon_DAP : PB_Falcon_Support_DAP {
		author = "F66th Pebbles";
		displayName = "Falcon Abbadon, DAP";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Helicopters";

		hiddenSelectionsTextures[] =
		{
			"F66th_Vehicles\data\Falcon\Falcon_main_Abbadon.paa",
			"\OPTRE_Vehicles_Air\falcon\data\falcon_attachments_co.paa",
			"\optre_vehicles_air\falcon\data\falcon_interior_co.paa",
			"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
			"\optre_vehicles_air\falcon\data\falcon_glass_ca.paa",
			"\optre_vehicles_air\falcon\data\decal\unsc_var2\falcon_decal_ca.paa"
		};

		armor = 89;
	};

	//Split's Pelican (Foundries)

	class Splits_UNSC_D77_TC_Pelican;
	class PB_Pelican_D77TC : Splits_UNSC_D77_TC_Pelican {
		author = "F66th Pebbles";
		displayName = "D77 TC Pelican";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Helicopters";

		armor = 1000;
	};

	//Nightingale a140 (add ace repair perms)

	class DMNS_UNSC_Nightingale;
	class PB_Nightingale_Resupply : DMNS_UNSC_Nightingale {
		author = "F66th Pebbles";
		displayName = "Supplyingale";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Helicopters";
		ace_repair_canRepair = 1;
		engineer = 1;
		transportRepair = 2e+08;
		supplyRadius = 25;
		transportAmmo = 1e+12;
		secondaryExplosion = 10000;
		transportFuel = 1e+12;
		fuelExplosionPower = 1;

		armor = 210;
	};

	//Scorpian MBT a850

	class Tank : LandVehicle
	{
		class NewTurret;
		class HitPoints;
	};
	class Tank_F : Tank
	{
		class Turrets
		{
			class MainTurret : NewTurret
			{
				class ViewOptics;
				class ViewGunner;
				class CommanderOptics;

			};
		};
		class HitPoints;
		class CargoTurret;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
	};
	class MBT_01_base_F : Tank_F
	{
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets {};
			};
		};
	};
	class B_MBT_01_base_F : MBT_01_base_F {};
	class B_MBT_01_cannon_F : B_MBT_01_base_F
	{
		class AnimationSources;
		class HitPoints : HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
	};

	class DMNS_M808B : B_MBT_01_cannon_F
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets;
				class CommandersTurret;
			};
		};
	};
	class PB_MBT : DMNS_M808B
	{
		class SimpleObject
		{
			eden = 1;
			animate[] = { {"damagehide",0},{"wheel_koll1",0},{"wheel_kolol1",0},{"wheel_podkolol1",0},{"wheel_kolp1",0},{"wheel_kolop1",0},{"wheel_podkolop1",0},{"wheel_koll2",0},{"wheel_kolp2",0},{"wheel_kolol2",0},{"wheel_kolol3",0},{"wheel_kolol4",0},{"wheel_kolol5",0},{"wheel_kolol6",0},{"wheel_kolop2",0},{"wheel_kolop3",0},{"wheel_kolop4",0},{"wheel_kolop5",0},{"wheel_kolop6",0},{"wheel_podkolol2",0},{"wheel_podkolol3",0},{"wheel_podkolol4",0},{"wheel_podkolol5",0},{"wheel_podkolol6",0},{"wheel_podkolop2",0},{"wheel_podkolop3",0},{"wheel_podkolop4",0},{"wheel_podkolop5",0},{"wheel_podkolop6",0},{"podkolol1_hide_damage",0},{"podkolol2_hide_damage",0},{"podkolol3_hide_damage",0},{"podkolol4_hide_damage",0},{"podkolol5_hide_damage",0},{"podkolol6_hide_damage",0},{"podkolol7_hide_damage",0},{"podkolol8_hide_damage",0},{"podkolop1_hide_damage",0},{"podkolop2_hide_damage",0},{"podkolop3_hide_damage",0},{"podkolop4_hide_damage",0},{"podkolop5_hide_damage",0},{"podkolop6_hide_damage",0},{"podkolop7_hide_damage",0},{"podkolop8_hide_damage",0},{"damagevez",0},{"mainturret",0},{"maingun",0.17},{"hatchcommander",0},{"recoil",0},{"obsturret",0},{"obsgun",0},{"maingunoptics",0.17},{"maingunint",0.17},{"damagevezvelitele",0},{"poklop_commander_damage",0},{"poklop_driver_damage",0},{"hatchdriver",0},{"plates_1_y",0},{"plates_2_y",0},{"plates_1_x",0},{"plates_2_x",0},{"plates_1_bank",0},{"plates_2_bank",0},{"drivingwheel",0},{"indicatorspeed_mfd_driver",0},{"indicatorrpm",0.1},{"indicatorrpm_mfd_driver",0.1},{"lights_driver",0.1},{"lights_driver_off",0.1},{"lights_turret",0.1},{"dmg_com_halo_unhide",0.1},{"cannon_ready_light",0},{"engine_damage_indicator",0},{"main_gun_damage_indicator",0},{"track_damage_indicator",0},{"pedal_thrust",0},{"pedal_brake",0},{"indicatortempwater_mfd_driver",0},{"indicatorfuel_mfd_driver",1},{"indicator_hull_direction_mfd_driver",0},{"indicator_main_turret_mfd_driver",0},{"indicator_com_turret_mfd_driver",0},{"indicator_com_turret_counter_mfd_driver",0},{"indicator_hull_direction_mfd_com",0},{"indicator_main_turret_mfd_com",0},{"indicator_main_turret_onscreen_com",0},{"indicator_com_turret_mfd_com",0},{"indicator_com_turret_onscreen_com",0},{"indicator_com_turret_counter_mfd_com",0},{"indicator_hull_direction_mfd_gunner",0},{"indicator_main_turret_mfd_gunner",0},{"indicator_com_turret_mfd_gunner",0},{"indicator_com_turret_counter_mfd_gunner",0},{"indicator_com_smoke_1",1},{"indicator_com_smoke_2",1},{"indicator_damage_engine",0},{"indicator_damage_fuel",0},{"indicator_damage_tracks",0},{"indicator_turret_damage_hull",0},{"lights_turret2",0},{"indicator_turret_damage_engine",0},{"indicator_turret_damage_fuel",0},{"indicator_turret_damage_main_gun",0},{"indicator_turret_damage_track",0},{"indicator_turret_damage_turret",0},{"indicator_turret_damage_comturret",0},{"hide_mfd_and_pip_screen_driver",1},{"hide_mfd_and_pip_screen_gunner",1},{"hide_mfd_elements",1},{"turret_control_x",0},{"turret_control_y",0},{"com_turret_control_x",0},{"com_turret_control_y",0},{"zaslehrot",0},{"cannon_muzzle_flash",0},{"zaslehrot_cannon",781},{"commander_muzzleflash_rot",380},{"commander_gun_recoil",0},{"commander_gun_belt_1",0},{"commander_gun_belt_2",0},{"commander_gun_belt_3",0},{"damage_era_front_hide",0},{"damage_camonet_front_hide",0},{"damage_era_left_1a_hide",0},{"damage_era_left_1b_hide",0},{"damage_camonet_left_1a_hide",0},{"damage_camonet_left_1b_hide",0},{"damage_era_left_2a_hide",0},{"damage_era_left_2b_hide",0},{"damage_camonet_left_2a_hide",0},{"damage_camonet_left_2b_hide",0},{"damage_era_left_3a_hide",0},{"damage_era_left_3b_hide",0},{"damage_camonet_left_3a_hide",0},{"damage_camonet_left_3b_hide",0},{"damage_era_left_4_hide",0},{"damage_camonet_left_4_hide",0},{"damage_era_right_1_hide",0},{"damage_camonet_right_1_hide",0},{"damage_era_right_2a_hide",0},{"damage_era_right_2b_hide",0},{"damage_camonet_right_2a_hide",0},{"damage_camonet_right_2b_hide",0},{"damage_era_right_3a_hide",0},{"damage_era_right_3b_hide",0},{"damage_camonet_right_3a_hide",0},{"damage_camonet_right_3b_hide",0},{"damage_era_right_4_hide",0},{"damage_camonet_right_4_hide",0},{"damage_era_top_front_hide",0},{"damage_camonet_top_front_hide",0},{"damage_era_top_left_hide",0},{"damage_camonet_top_left_hide",0},{"damage_era_top_right_hide",0},{"damage_camonet_top_right_hide",0} };
			hide[] = { "clan","zasleh","commander_muzzleflash","light_l","light_r","zadni svetlo","brzdove svetlo","podsvit pristroju","poskozeni" };
			verticalOffset = 2.511;
			verticalOffsetWorld = -0.215;
			init = "[this, '', []] call bis_fnc_initVehicle";
		};
		author = "F66th Pebbles";
		displayName = "M808B MBT";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Tanks";

		hasDriver = -1;

		maxSpeed = 45;

		forceInGarage = 1;
		weapons[] = { "CMFlareLauncher","SmokeLauncher","Laserdesignator_pilotCamera" };
		magazines[] = { "168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","Laserbatteries","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag" };
		tf_hasLRradio = 1;
		tf_isolatedAmount = 0.65;
		tf_range = 120000;
		ejectDamageLimit = 0.99;
		smokeLauncherAngle = 360;
		smokeLauncherGrenadeCount = 16;
		smokeLauncherOnTurret = 1;
		smokeLauncherVelocity = 14;
		irScanGround = 0;
		irScanRangeMax = 10000;
		irScanRangeMin = 2000;
		irScanToEyeFactor = 2;
		radarType = 2;
		reportRemoteTargets = 1;
		receiveRemoteTargets = 1;
		incomingMissileDetectionSystem = 16;
		LockDetectionSystem = 16;

		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				class Turrets : Turrets {};
				isCopilot = 1;
				CanEject = 0;
				body = "mainturret";
				gun = "maingun";
				animationsourcebody = "mainturret";
				animationSourceGun = "maingun";
				gunAxis = "OsaHlavnen";
				gunBeg = "Usti hlavne";
				gunEnd = "konec hlavne";
				ejectDeadGunner = 0;
				minElev = -12;
				maxElev = 38;
				initElev = 0;
				initTurn = 0;
				turretAxis = "OsaVeze";
				maxVerticalRotSpeed = "90/45";
				maxHorizontalRotSpeed = "90/45";
				gunnerAction = "DMNS_M808B_Gunner";
				gunnerInAction = "DMNS_M808B_Gunner";
				gunnerGetInAction = "GetInMRAP_01";
				gunnerGetOutAction = "GetOutMRAP_01";
				precisegetinout = 1;
				gunnerName = "Primary Gunner";
				proxyindex = 1;
				gunnerCompartments = "Compartment1";
				hideWeaponsGunner = 1;
				soundServo[] = { "A3\sounds_f\dummysound",9.999998e-07,1 };
				stabilizedInAxes = 3;
				commanding = 1;
				primaryGunner = 1;
				primaryObserver = 1;
				turretInfoType = "RscOptics_crows";
				discreteDistance[] = { 100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100,2500 };
				discreteDistanceInitIndex = 5;
				showAllTargets = 4;
				playerPosition = 3;
				memoryPointsGetInGunner = "Pos Gunner";
				memoryPointsGetInGunnerDir = "Pos Gunner dir";
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "turret_control";
				memoryPointGun = "usti hlavne2";
				selectionFireAnim = "zasleh2";
				weapons[] = { "PB_90mm_Smoothbore","DMNS_M247T_Coax","SmokeLauncher" };
				magazines[] = { "DMNS_64Rnd_90mm_APBC","DMNS_32Rnd_90mm_SAPHE","DMNS_32Rnd_90mm_HEAT","OPTRE_10Rnd_90mm_S1","DMNS_500Rnd_127x99_Mag_Tracer","DMNS_500Rnd_127x99_Mag_Tracer","DMNS_500Rnd_127x99_HE_Mag_Tracer","DMNS_500Rnd_127x99_HE_Mag_Tracer","SmokeLauncherMag" };
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics = "gunnerview";
				castGunnerShadow = 1;
				startEngine = 1;
				gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_02_F.p3d";
				gunnerForceOptics = 0;
				hasGunner = 1;
				LODTurnedIn = 1100;
				lodturnedout = 1100;
				class HitPoints
				{
					class HitTurret
					{
						armor = 4.5;
						material = -1;
						name = "otocVez";
						visual = "vez";
						passThrough = 0;
						minimalHit = 0.02;
						explosionShielding = 0.6;
						radius = 0.25;
					};
					class HitGun
					{
						armor = 4.5;
						material = -1;
						name = "otocHlaven";
						visual = "Hlaven";
						passThrough = 0;
						minimalHit = 0;
						explosionShielding = 0.6;
						radius = 0.25;
					};
				};
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						opticsDisplayName = "WFOV";
						visionMode[] = { "Normal","NVG","Ti" };
						thermalMode[] = { 0,1 };
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium : Wide
					{
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						opticsDisplayName = "MFOV";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow : Wide
					{
						initFov = 0.029;
						minFov = 0.029;
						maxFov = 0.029;
						opticsDisplayName = "NFOV";
						gunnerOpticsModel = "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initFov = 0.9;
						minFov = 0.25;
						maxFov = 1.25;
						initAngleX = 0;
						initAngleY = 0;
						minAngleX = -65;
						maxAngleX = 85;
						minAngleY = -150;
						maxAngleY = 150;
						minMoveX = -0.2;
						maxMoveX = 0.2;
						minMoveY = -0.1;
						maxMoveY = 0.1;
						minMoveZ = -0.1;
						maxMoveZ = 0.2;
						visionMode[] = { "Normal","NVG" };
						gunnerOpticsModel = "";
						gunnerOpticsEffect[] = {};
					};
				};
			};
			class CommandersTurret : MainTurret
			{
				disableSoundAttenuation = 1;
				isCopilot = 0;
				showAsCargo = 1;
				CanEject = 1;
				startEngine = 0;
				proxyType = "CPCargo";
				proxyIndex = 9;
				maxTurn = 90;
				minTurn = -180;
				cargoCompartments[] = { "Compartment9" };
				gunnerCompartments = "";
				gunnerName = "Front Gunner";
				gunnerLeftHandAnimName = "commander_gun";
				gunnerRightHandAnimName = "commander_gun";
				body = "commandersturret";
				gun = "commandersgun";
				turretAxis = "commander_turret_axis";
				gunAxis = "commander_gun_axis";
				animationSourceBody = "commandersturret";
				animationSourceGun = "commandersgun";
				selectionFireAnim = "zasleh3";
				weapons[] = { "DMNS_M247H2_Coax" };
				magazines[] = { "DMNS_200Rnd_762x51_Mag_Tracer","DMNS_200Rnd_762x51_Mag_Tracer","DMNS_200Rnd_762x51_Mag_Tracer","DMNS_200Rnd_762x51_Mag_Tracer","DMNS_200Rnd_762x51_Mag_Tracer","DMNS_200Rnd_762x51_Mag_Tracer","DMNS_200Rnd_762x51_Mag_Tracer","DMNS_200Rnd_762x51_Mag_Tracer","DMNS_200Rnd_762x51_Mag_Tracer","DMNS_200Rnd_762x51_Mag_Tracer" };
				soundServo[] = { "A3\sounds_f\dummysound",9.999998e-07,1 };
				gunnerAction = "DMNS_M808B_Commander";
				gunnerInAction = "DMNS_M808B_Commander";
				LODTurnedIn = 1000;
				lodturnedout = 1000;
				LODOpticsIn = 0;
				gunBeg = "usti hlavne3";
				gunEnd = "konec hlavne3";
				memoryPointGunnerOptics = "gunnerview_2";
				memoryPointsGetInGunner = "pos commander";
				memoryPointsGetInGunnerDir = "pos commander dir";
				commanding = -2;
				primaryGunner = 0;
				primaryObserver = 0;
				optics = 1;
				stabilizedInAxes = 3;
				discreteDistance[] = { 100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000 };
				discreteDistanceInitIndex = 2;
				memoryPointGun = "usti hlavne3";
				turretInfoType = "RscWeaponZeroing";
				gunnerOpticsModel = "a3\weapons_f\Reticle\optics_empty";
				gunnerOutOpticsModel = "a3\weapons_f\Reticle\optics_empty";
				class HitPoints
				{
					class HitComTurret
					{
						armor = 4.5;
						material = -1;
						name = "Commander_Turret";
						visual = "Commander_Turret";
						passThrough = 0;
						minimalHit = 0.02;
						explosionShielding = 0.6;
						radius = 0.25;
					};
					class HitComGun
					{
						armor = 4.5;
						material = -1;
						name = "Commander_Gun";
						visual = "Commander_Gun";
						passThrough = 0;
						minimalHit = 0;
						explosionShielding = 0.6;
						radius = 0.25;
					};
				};
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.466;
						minFov = 0.466;
						maxFov = 0.466;
						opticsDisplayName = "WFOV";
						visionMode[] = { "Normal","NVG","Ti" };
						thermalMode[] = { 0,1 };
						gunnerOpticsModel = "a3\weapons_f\Reticle\optics_empty";
					};
					class Medium : Wide
					{
						initFov = 0.093;
						minFov = 0.093;
						maxFov = 0.093;
						opticsDisplayName = "MFOV";
						gunnerOpticsModel = "a3\weapons_f\Reticle\optics_empty";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initFov = 0.9;
						minFov = 0.25;
						maxFov = 1.25;
						initAngleX = 0;
						initAngleY = 0;
						minAngleX = -65;
						maxAngleX = 85;
						minAngleY = -150;
						maxAngleY = 150;
						minMoveX = -0.2;
						maxMoveX = 0.2;
						minMoveY = -0.1;
						maxMoveY = 0.1;
						minMoveZ = -0.1;
						maxMoveZ = 0.2;
						visionMode[] = { "Normal","NVG" };
						gunnerOpticsModel = "a3\weapons_f\Reticle\optics_empty";
						gunnerOpticsEffect[] = {};
					};
				};
				class ViewOptics : ViewOptics
				{
					visionMode[] = { "Normal","NVG","TI" };
				};
				class ViewGunner : ViewGunner {};
			};
		};

	};

	//Basilisk
	class B_MBT_01_arty_F;
	class PB_Basilisk_155mm : B_MBT_01_arty_F
	{
		author = "[F66th] Pebbles";
		scope = 2;
		scopeCurator = 2;
		displayName = "[F66th] Basilisk";
		faction = "PB_Bluefor_Faction";
		crew = "OPTRE_UNSC_Marine_Soldier_Crewman";
		side = 1;
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Artillery";
		vehicleClass = "Armored";
		ace_hunterkiller[] = { {{0},3},{{0,0},3} };
		

		hasDriver = -1;

		forceInGarage = 1;

		class TransportWeapons
		{
			delete _xx_arifle_MX_khk_F;
		};
		class TransportMagazines
		{
			delete _xx_30Rnd_65x39_caseless_mag;
			class _xx_OPTRE_60Rnd_762x51_Mag_AP
			{
				magazine = "OPTRE_60Rnd_762x51_Mag_AP";
				count = 5;
			};
		};
		class TransportItems
		{
			delete _xx_FirstAidKit;
			class _xx_Toolkit
			{
				name = "Toolkit";
				count = 1;
			};
			class _xx_MEU_Biofoam_Light
			{
				name = "MEU_Biofoam_Light";
				count = 5;
			};
		};
		class textureSources : textureSources
		{
			class color66th
			{
				displayName = "Basilisk";
				author = "[F66th] Pebbles";
				textures[] = {
					"\F66th_Vehicles\data\Basilisk\Basilisk_Body.paa",
					"\F66th_Vehicles\data\Basilisk\Basilisk_155mm.paa",
					"\F66th_Vehicles\data\Basilisk\Basilisk_AGL",
					"\F66th_Vehicles\data\Basilisk\camonet_greenbeige_co.paa"
				};
			};
		};
		hiddenSelectionsTextures[] = {
			"\F66th_Vehicles\data\Basilisk\Basilisk_Body.paa",
			"\F66th_Vehicles\data\Basilisk\Basilisk_155mm.paa",
			"\F66th_Vehicles\data\Basilisk\Basilisk_AGL",
			"\F66th_Vehicles\data\Basilisk\camonet_greenbeige_co.paa"
		};
		textureList[] = {"color66th",1};
	};

	//m12b warthog

	class FNDRY_M12B_LRV;
	class PB_M12_LRV : FNDRY_M12B_LRV {
		author = "F66th Pebbles";
		displayName = "[F66th] Warthog";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Cars";

		hiddenSelectionsTextures[] = {
			"F66th_Vehicles\data\m12\M12B_Body.paa",
			"foundries\fndry_light_vehicles\M12B\textures\M12B_bottom_co.paa",
			"foundries\fndry_light_vehicles\M12B\textures\M12B_interior_co.paa",
			"foundries\fndry_light_vehicles\M12B\textures\M12B_details_co.paa"
		};	 /// we could use any texture to cover the car
	};

	class FNDRY_M12B_LAAG;
	class PB_M12_LAAG : FNDRY_M12B_LAAG {
		author = "F66th Pebbles";
		displayName = "[F66th] Warthog (Laag)";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Cars";

		hiddenSelectionsTextures[] = {
			"F66th_Vehicles\data\m12\M12B_Body.paa",
			"foundries\fndry_light_vehicles\M12B\textures\M12B_bottom_co.paa",
			"foundries\fndry_light_vehicles\M12B\textures\M12B_interior_co.paa",
			"foundries\fndry_light_vehicles\M12B\textures\M12B_details_co.paa",
			"foundries\fndry_light_vehicles\M12B\textures\Turrets\M46_LAAG\M46_LAAG_co.paa"
		};
	};

	class FNDRY_M12B_Gauss;
	class PB_M12_Gauss : FNDRY_M12B_Gauss {
		author = "F66th Pebbles";
		displayName = "[F66th] Warthog (Gauss)";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Cars";

		hiddenSelectionsTextures[] = {
		"F66th_Vehicles\data\m12\M12B_Body.paa",
		"foundries\fndry_light_vehicles\M12B\textures\M12B_bottom_co.paa",
		"foundries\fndry_light_vehicles\M12B\textures\M12B_interior_co.paa",
		"foundries\fndry_light_vehicles\M12B\textures\M12B_details_co.paa",
		"foundries\fndry_light_vehicles\M12B\textures\Turrets\M68_Gauss\M68_Gauss_co.paa"
		};
	};

	class FNDRY_M12B_AA;
	class PB_M12_AA : FNDRY_M12B_AA {
		author = "F66th Pebbles";
		displayName = "[F66th] Warthog (AA)";
		scope = 2;
		scopeCurator = 2;
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Cars";

		hiddenSelectionsTextures[] = {
		"F66th_Vehicles\data\m12\M12B_Body.paa",
		"foundries\fndry_light_vehicles\M12B\textures\M12B_bottom_co.paa",
		"foundries\fndry_light_vehicles\M12B\textures\M12B_interior_co.paa",
		"foundries\fndry_light_vehicles\M12B\textures\M12B_details_co.paa",
		"foundries\fndry_light_vehicles\M12B\textures\Turrets\M79_MLRS\M79_MLRS_co.paa"
		};
	};

	//Wyvern
	class TIOW_CadianChimAuto_836 : Tank_F
	{
		class Turrets : Turrets
		{
			class MainTurret : NewTurret {};
		};
	};

	class TIOW_CadianWyvern_836 : TIOW_CadianChimAuto_836
	{
		class Turrets : Turrets
		{
			class MainTurret : MainTurret {};
		};
	};
	class PB_Orochi_WMS : TIOW_CadianWyvern_836
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "Orochi";
		model = "APCs\ImpGuard\Hydra\TIOW_Wyvern.p3d";
		side = 1;
		faction = "PB_Bluefor_Faction";
		editorCategory = "PB_Bluefor_F";
		editorSubcategory = "EdSubcat_Artillery";
		artilleryScanner = 1;
		transportSoldier = 0;
		class Turrets : Turrets
		{
			class MainTurret : MainTurret
			{
				gunnerName = "Turret Gunner";
				weapons[] = { "TIOW_StormShard_Mortar" };
				magazines[] = { "TIOW_StormShard_Mag" };
				body = "turret";
				gun = "mainGun";
				artilleryScanner = 1;
				outGunnerMayFire = 0;
				isPersonTurret = 0;
				minElev = -6;
				maxElev = 90;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				elevationMode = 3;
				initCamElev = 0;
				minCamElev = -65;
				maxCamElev = 65;
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				gunnerForceOptics = 1;
				primaryGunner = 1;
				gunnerOpticsModel = "APCs\AutocannonOptic.p3d";
				gunnerOutOpticsModel = "";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGun[] = { "BottomLeft_muzzle","BottomRight_muzzle","TopLeft_muzzle","TopRight_muzzle" };
				gunBeg = "MainChamber";
				gunEnd = "MainMuzzle";
				animationSourceBody = "MainTurret";
				animationSourceGun = "mainGun";
				viewGunnerInExternal = 1;
				forceHideGunner = 1;
				forceHideCommander = 1;
				proxyType = "CPGunner";
				proxyIndex = 8;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				class HitPoints
				{
					class HitTurret
					{
						armor = 1.25;
						material = -1;
						name = "vez";
						visual = "commander_turret_hit";
						passThrough = 0.0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.33;
					};
					class HitGun
					{
						armor = 0.25;
						material = -1;
						name = "otochlaven";
						visual = "commander_gun_hit";
						passThrough = 0.0;
						minimalHit = 0.175;
						explosionShielding = 0.1;
						radius = 0.23;
					};
				};
			};
		};
		hiddenSelections[] = { "HULL_TEX","markings","Hydra_camo" };
		hiddenSelectionsTextures[] = { "APCs\Data\Textures\Chimera836th_co.paa","APCs\Data\Textures\ChimeraInsigniaCadian836_ca.paa","apcs\data\textures\TIOW_Hydra836_co.paa" };
	};


	//Vehicles of terror



		class PB_M12_Stormshard : FNDRY_M12B_LAAG 
		{
			author = "F66th Pebbles";
			displayName = "I'm not sorry";
			scope = 2;
			scopeCurator = 2;
			side = 1;
			faction = "PB_Bluefor_Faction";
			editorCategory = "PB_Bluefor_F";
			editorSubcategory = "EdSubcat_Cars";
			class Turrets
				{
				class CargoGunner_1;
				class MainTurret
					{
					LODTurnedOut = 1100;
					LODTurnedIn = 1100;
					LODOpticsIn = 1100;
					LODOpticsOut = 1100;
					ejectDeadGunner = 1;
					minElev = -12;
					maxElev = 30; //45
					minTurn = -360;
					maxTurn = 360;
					initTurn = 0;
					proxyIndex = 6;
					body = "mainturret";
					gun = "maingun";
					turretAxis = "OsaVeze";
					maxHorizontalRotSpeed = 1.75;
					maxVerticalRotSpeed = 1.5;
					gunAxis = "Osa Hlavne";
					gunBeg = "Usti hlavne";
					gunEnd = "konec hlavne";
					gunnerAction = "FNDRY_LAAG_gunner";
					gunnerInAction = "FNDRY_LAAG_gunner";
					gunnerGetInAction = "GetInMRAP_01";
					gunnerGetOutAction = "GetOutMRAP_01";
					gunnerName = "Gunner";
					soundServo[] = { "A3\Sounds_F\vehicles\armor\noises\servo_best", db 1, 1.0,50 };
					stabilizedInAxes = 3;
					outGunnerMayFire = 1;
					inGunnerMayFire = 1;
					commanding = 1;
					primaryGunner = 1;
					hideWeaponsGunner = 1;
					memoryPointsGetInGunner = "Gunner_dir";
					memoryPointsGetInGunnerDir = "gunner";
					gunnerLeftHandAnimName = "OtocHlaven";
					gunnerRightHandAnimName = "OtocHlaven";
					memoryPointGun = "usti hlavne";
					weapons[] = { "TIOW_StormShard_Mortar" };
					magazines[] = { "TIOW_StormShard_Mag" };
					memoryPointGunnerOptics = "gunnerview";
					memoryPointGunnerOutOptics = "gunnerview";
					gunnerOpticsShowCursor = 1;
					castGunnerShadow = 1;
					startEngine = 1;
					enableManualFire = 0;
					turretInfoType = "RscWeaponZeroing";
					gunnerOpticsModel = "a3\weapons_f\Reticle\optics_empty";
					gunnerOutOpticsModel = "a3\weapons_f\Reticle\optics_empty"; // for turned out position
					gunnerForceOptics = 0;
					hasGunner = 1;
					gunnerCompartments = "Compartment1";
					};
				};
			};
		class PB_M12_TIOW : FNDRY_M12B_LAAG {
			author = "F66th Pebbles";
			displayName = "40k warthog";
			scope = 2;
			scopeCurator = 2;
			side = 1;
			faction = "PB_Bluefor_Faction";
			editorCategory = "PB_Bluefor_F";
			editorSubcategory = "EdSubcat_Cars";
		};
		class TIOW_Centaur_01_base;
		class PB_CadianCentaur_Trim : TIOW_Centaur_01_base {
			author = "F66th Pebbles";
			displayName = "Trim's Command Vehicle";
			scope = 2;
			scopeCurator = 2;
			side = 1;
			faction = "PB_Bluefor_Faction";
			editorCategory = "PB_Bluefor_F";
			editorSubcategory = "EdSubcat_APCs";


			enginePower = 100;
			peakTorque = 14496;
			armor = 9999;

		};

		class PB_CadianCentaur_TestTrim : PB_CadianCentaur_Trim
		{
			displayName = "Test Command Vehicle";
			class Turrets
			{
				class MainTurret
				{
					gunnerName = "Turret Gunner";
					weapons[] = { "TIOW_StormShard_Mortar" };
					magazines[] = { "TIOW_StormShard_Mag" };
					body = "turret";
					gun = "mainGun";
					artilleryScanner = 1;
					outGunnerMayFire = 0;
					isPersonTurret = 0;
					minElev = -6;
					maxElev = 90;
					initElev = 0;
					minTurn = -360;
					maxTurn = 360;
					initTurn = 0;
					elevationMode = 3;
					initCamElev = 0;
					minCamElev = -65;
					maxCamElev = 65;
					gunnerOutOpticsEffect[] = {};
					gunnerOpticsEffect[] = {};
					gunnerForceOptics = 1;
					primaryGunner = 1;
					gunnerOpticsModel = "APCs\AutocannonOptic.p3d";
					gunnerOutOpticsModel = "";
					memoryPointGunnerOptics = "gunnerview";
					memoryPointGun[] = { "BottomLeft_muzzle","BottomRight_muzzle","TopLeft_muzzle","TopRight_muzzle" };
					gunBeg = "MainChamber";
					gunEnd = "MainMuzzle";
					animationSourceBody = "MainTurret";
					animationSourceGun = "mainGun";
					viewGunnerInExternal = 1;
					forceHideGunner = 1;
					forceHideCommander = 1;
					proxyType = "CPGunner";
					proxyIndex = 8;
					gunnerLeftHandAnimName = "";
					gunnerRightHandAnimName = "";
					class HitPoints
					{
						class HitTurret
						{
							armor = 1.25;
							material = -1;
							name = "vez";
							visual = "commander_turret_hit";
							passThrough = 0.0;
							minimalHit = 0.175;
							explosionShielding = 0.1;
							radius = 0.33;
						};
						class HitGun
						{
							armor = 0.25;
							material = -1;
							name = "otochlaven";
							visual = "commander_gun_hit";
							passThrough = 0.0;
							minimalHit = 0.175;
							explosionShielding = 0.1;
							radius = 0.23;
						};
					};
				};
			};
		};
};
