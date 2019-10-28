#pragma once
#include <map>
#include <vector>

enum EffectType : int;

struct EffectInfo
{
public:
	EffectInfo(const char* name, int id, bool isTimed = false, std::vector<EffectType> incompatibleList = {}, bool shortDur = false)
		: Name(name), Id(id), IsTimed(isTimed), IsShortDuration(shortDur), IncompatibleWith(incompatibleList)
	{}
	EffectInfo() : Name("???"), Id(-1), IsTimed(false), IsShortDuration(false), IncompatibleWith({}) {}

public:
	const char* Name;
	const int Id;
	const bool IsTimed;
	const bool IsShortDuration;
	const std::vector<EffectType> IncompatibleWith;
};

enum EffectType : int
{
	EFFECT_KILL,
	EFFECT_PLUS_2_STARS,
	EFFECT_5_STARS,
	EFFECT_CLEAR_STARS,
	EFFECT_NEVER_WANTED,
	EFFECT_STRIP_WEAPONS,
	EFFECT_GIVE_RPG,
	EFFECT_GIVE_MINIGUN,
	EFFECT_GIVE_PARACHUTE,
	EFFECT_GIVE_PISTOL,
	EFFECT_GIVE_TAZER,
	EFFECT_GIVE_RAILGUN,
	EFFECT_HEAL,
	EFFECT_ARMOR,
	EFFECT_IGNITE,
	EFFECT_ANGRY_JESUS,
	EFFECT_IGNITE_PEDS,
	EFFECT_EXPLODE_VEHS,
	EFFECT_PLAYER_LAUNCH,
	EFFECT_PLAYER_VEH_LAUNCH,
	EFFECT_VEHS_LAUNCH,
	EFFECT_PLAYER_VEH_LOCK,
	EFFECT_NOTHING,
	EFFECT_KILL_ENGINE,
	EFFECT_TIME_MORNING,
	EFFECT_TIME_DAY,
	EFFECT_TIME_EVENING,
	EFFECT_TIME_NIGHT,
	EFFECT_WEATHER_SUNNY,
	EFFECT_WEATHER_EXTRASUNNY,
	EFFECT_WEATHER_RAINY,
	EFFECT_WEATHER_THUNDER,
	EFFECT_WEATHER_FOGGY,
	EFFECT_WEATHER_NEUTRAL,
	EFFECT_WEATHER_XMAS,
	EFFECT_TP_LSAIRPORT,
	EFFECT_TP_MAZETOWER,
	EFFECT_TP_FORTZANCUDO,
	EFFECT_TP_MOUNTCHILLIAD,
	EFFECT_NO_PHONE,
	EFFECT_SET_INTO_CLOSEST_VEH,
	EFFECT_EXIT_CURRENT_VEH,
	EFFECT_GAMESPEED_X05,
	EFFECT_GAMESPEED_X02,
	EFFECT_GAMESPEED_LAG,
	EFFECT_PEDS_RIOT,
	EFFECT_RED_VEHS,
	EFFECT_BLUE_VEHS,
	EFFECT_GREEN_VEHS,
	EFFECT_RAINBOW_VEHS,
	EFFECT_FORCED_FP,
	EFFECT_SLIPPERY_VEHS,
	EFFECT_NO_GRAV_VEHS,
	EFFECT_PLAYER_INVINCIBLE,
	EFFECT_2XENGINE_VEHS,
	EFFECT_10XENGINE_VEHS,
	EFFECT_05XENGINE_VEHS,
	EFFECT_SPAWN_TANK,
	EFFECT_SPAWN_ADDER,
	EFFECT_SPAWN_DUMP,
	EFFECT_SPAWN_MONSTER,
	EFFECT_SPAWN_BMX,
	EFFECT_SPAWN_TUG,
	EFFECT_SPAWN_CARGO,
	EFFECT_SPAWN_BUS,
	EFFECT_SPAWN_BLIMP,
	EFFECT_SPAWN_BUZZARD,
	EFFECT_NO_VEHS,
	EFFECT_NO_PEDS,
	EFFECT_EXPLODE_CUR_VEH,
	EFFECT_PEDS_INVISIBLE,
	EFFECT_VEHS_INVISIBLE,
	EFFECT_NO_RADAR,
	EFFECT_NO_HUD,
	EFFECT_SUPER_RUN,
	EFFECT_SUPER_JUMP,
	EFFECT_PLAYER_RAGDOLL,
	EFFECT_PEDS_RAGDOLL_ON_TOUCH,
	EFFECT_PLUS_100K,
	EFFECT_MINUS_100K,
	EFFECT_PEDS_FOLLOW_PLAYER,
	EFFECT_PLAYER_DRUNK,
	EFFECT_PEDS_OHKO,
	EFFECT_PEDS_NO_FEAR,
	EFFECT_SCREEN_BLOOM,
	EFFECT_SCREEN_LSD,
	EFFECT_PEDS_IGNORE_PLAYER,
	EFFECT_HONK_BOOSTING,
	EFFECT_MIN_DAMAGE,
	EFFECT_NO_HEADSHOTS,
	EFFECT_PEDS_FROZEN,
	EFFECT_LOW_GRAV,
	EFFECT_VERY_LOW_GRAV,
	EFFECT_INSANE_GRAV,
	EFFECT_VEH_REPAIR,
	EFFECT_VEH_POP_TIRES,
	EFFECT_ALL_VEH_POP_TIRES,
	EFFECT_NO_SPECIAL_ABILITY,
	EFFECT_IN_THE_HOOD,
	EFFECT_FORCED_CINEMATIC,
	EFFECT_PEDS_FLEE,
	EFFECT_BREAK_VEH_DOORS,
	EFFECT_ZOMBIES,
	EFFECT_METEOR_RAIN,
	EFFECT_BLIND,
	EFFECT_BLACKOUT,
	EFFECT_QUICK_TIME,
	EFFECT_PAUSE_TIME,
	EFFECT_MOV_NO_UD,
	EFFECT_MOV_NO_LR,
	EFFECT_BREAK,
	EFFECT_EVERYONE_RPG,
	EFFECT_EVERYONE_TAZER,
	EFFECT_EVERYONE_MINIGUN,
	EFFECT_PEDS_FAST_FIRING,
	EFFECT_NO_SPRINT,
	EFFECT_NO_JUMP,
	EFFECT_EVERYONE_INVINCIBLE,
	EFFECT_VEHS_INVINCIBLE,
	_EFFECT_ENUM_MAX
};

const std::map<EffectType, EffectInfo> EffectsMap =
{
	{EFFECT_KILL, {"Player Suicide", 0}},
	{EFFECT_PLUS_2_STARS, {"+2 Wanted Stars", 1}},
	{EFFECT_5_STARS, {"5 Wanted Stars", 2}},
	{EFFECT_CLEAR_STARS, {"Clear Wanted Level", 3}},
	{EFFECT_NEVER_WANTED, {"Never Wanted", 62, true}},
	{EFFECT_STRIP_WEAPONS, {"Remove Weapons From Everyone", 4}},
	{EFFECT_GIVE_RPG, {"Give RPG", 5}},
	{EFFECT_GIVE_MINIGUN, {"Give Minigun", 6}},
	{EFFECT_GIVE_PARACHUTE, {"Give Parachute", 7}},
	{EFFECT_GIVE_PISTOL, {"Give Pistol", 8}},
	{EFFECT_GIVE_TAZER, {"Give Stungun", 9}},
	{EFFECT_GIVE_RAILGUN, {"Give Railgun", 10}},
	{EFFECT_HEAL, {"Player Heal", 11}},
	{EFFECT_ARMOR, {"Player Armor", 12}},
	{EFFECT_IGNITE, {"Ignite Player", 13}},
	{EFFECT_ANGRY_JESUS, {"Spawn Griefer Jesus", 14}},
	{EFFECT_IGNITE_PEDS, {"Ignite All Peds", 15}},
	{EFFECT_EXPLODE_VEHS, {"Explode All Nearby Vehicles", 16}},
	{EFFECT_PLAYER_LAUNCH, {"Launch Player Up", 17}},
	{EFFECT_PLAYER_VEH_LAUNCH, {"Launch Current Vehicle Up", 18}},
	{EFFECT_VEHS_LAUNCH, {"Launch All Vehicles Up", 100}},
	{EFFECT_PLAYER_VEH_LOCK, {"Lock Vehicle Player Is In", 19}},
	{EFFECT_NOTHING, {"Nothing", 20}},
	{EFFECT_KILL_ENGINE, {"Kill Engine Of Current Vehicle", 21}},
	{EFFECT_TIME_MORNING, {"Set Time To Morning", 22}},
	{EFFECT_TIME_DAY, {"Set Time To Daytime", 23}},
	{EFFECT_TIME_EVENING, {"Set Time To Evening", 24}},
	{EFFECT_TIME_NIGHT, {"Set Time To Night", 25}},
	{EFFECT_WEATHER_SUNNY, {"Sunny Weather", 26}},
	{EFFECT_WEATHER_EXTRASUNNY, {"Extra Sunny Weather", 27}},
	{EFFECT_WEATHER_RAINY, {"Rainy Weather", 28}},
	{EFFECT_WEATHER_THUNDER, {"Stormy Weather", 29}},
	{EFFECT_WEATHER_FOGGY, {"Foggy Weather", 30}},
	{EFFECT_WEATHER_NEUTRAL, {"Neutral Weather", 97}},
	{EFFECT_WEATHER_XMAS, {"Snowy Weather", 31}},
	{EFFECT_TP_LSAIRPORT, {"Teleport To LS Airport", 32}},
	{EFFECT_TP_MAZETOWER, {"Teleport To Maze Bank Tower", 33}},
	{EFFECT_TP_FORTZANCUDO, {"Teleport To Fort Zancudo", 34}},
	{EFFECT_TP_MOUNTCHILLIAD, {"Teleport To Mount Chilliad", 35}},
	{EFFECT_NO_PHONE, {"No Phone", 36, true}},
	{EFFECT_SET_INTO_CLOSEST_VEH, {"Set Player Into Closest Vehicle", 37}},
	{EFFECT_EXIT_CURRENT_VEH, {"Exit Current Vehicle", 38}},
	{EFFECT_GAMESPEED_X02, {"x0.2 Gamespeed", 39, true, { EFFECT_GAMESPEED_X05, EFFECT_GAMESPEED_LAG }}},
	{EFFECT_GAMESPEED_X05, {"x0.5 Gamespeed", 40, true, { EFFECT_GAMESPEED_X02, EFFECT_GAMESPEED_LAG }}},
	{EFFECT_GAMESPEED_LAG, {"Lag", 102, true, { EFFECT_GAMESPEED_X02, EFFECT_GAMESPEED_X05 }}},
	{EFFECT_PEDS_RIOT, {"Peds Riot", 41, true}},
	{EFFECT_RED_VEHS, {"Red Traffic", 42, true, { EFFECT_BLUE_VEHS, EFFECT_GREEN_VEHS, EFFECT_RAINBOW_VEHS, EFFECT_VEHS_INVISIBLE }}},
	{EFFECT_BLUE_VEHS, {"Blue Traffic", 43, true, { EFFECT_RED_VEHS, EFFECT_GREEN_VEHS, EFFECT_RAINBOW_VEHS, EFFECT_VEHS_INVISIBLE }}},
	{EFFECT_GREEN_VEHS, {"Green Traffic", 44, true, { EFFECT_RED_VEHS, EFFECT_BLUE_VEHS, EFFECT_RAINBOW_VEHS, EFFECT_VEHS_INVISIBLE }}},
	{EFFECT_RAINBOW_VEHS, {"Rainbow Traffic", 45, true, { EFFECT_RED_VEHS, EFFECT_BLUE_VEHS, EFFECT_GREEN_VEHS, EFFECT_VEHS_INVISIBLE }}},
	{EFFECT_FORCED_FP, {"First Person", 46, true, { EFFECT_FORCED_CINEMATIC }}},
	{EFFECT_SLIPPERY_VEHS, {"Slippery Vehicles", 47, true}},
	{EFFECT_NO_GRAV_VEHS, {"Vehicles Have No Gravity", 48, true, {}, true}},
	{EFFECT_PLAYER_INVINCIBLE, {"Invincibility", 49, true}},
	{EFFECT_2XENGINE_VEHS, {"2x Vehicle Engine Speed", 50, true, { EFFECT_10XENGINE_VEHS, EFFECT_05XENGINE_VEHS }}},
	{EFFECT_10XENGINE_VEHS, {"10x Vehicle Engine Speed", 51, true, { EFFECT_2XENGINE_VEHS, EFFECT_05XENGINE_VEHS }}},
	{EFFECT_05XENGINE_VEHS, {"0.5x Vehicle Engine Speed", 52, true, { EFFECT_2XENGINE_VEHS, EFFECT_10XENGINE_VEHS }}},
	{EFFECT_SPAWN_TANK, {"Spawn Rhino", 53}},
	{EFFECT_SPAWN_ADDER, {"Spawn Adder", 54}},
	{EFFECT_SPAWN_DUMP, {"Spawn Dump", 55}},
	{EFFECT_SPAWN_MONSTER, {"Spawn Monster", 56}},
	{EFFECT_SPAWN_BMX, {"Spawn BMX", 57}},
	{EFFECT_SPAWN_TUG, {"Spawn Tug", 58}},
	{EFFECT_SPAWN_CARGO, {"Spawn Cargo Plane", 59}},
	{EFFECT_SPAWN_BUS, {"Spawn Bus", 60}},
	{EFFECT_SPAWN_BLIMP, {"Spawn Blimp", 61}},
	{EFFECT_SPAWN_BUZZARD, {"Spawn Buzzard", 105}},
	{EFFECT_NO_VEHS, {"No Traffic", 63, true}},
	{EFFECT_NO_PEDS, {"No Pedestrians", 64, true}},
	{EFFECT_EXPLODE_CUR_VEH, {"Explode Current Vehicle", 65}},
	{EFFECT_PEDS_INVISIBLE, {"Everyone Is A Ghost", 66, true}},
	{EFFECT_VEHS_INVISIBLE, {"Invisible Vehicles", 67, true, { EFFECT_BLUE_VEHS, EFFECT_GREEN_VEHS, EFFECT_RAINBOW_VEHS, EFFECT_RAINBOW_VEHS }}},
	{EFFECT_NO_RADAR, {"No Radar", 68, true, { EFFECT_NO_HUD }}},
	{EFFECT_NO_HUD, {"No HUD", 69, true, { EFFECT_NO_RADAR } }},
	{EFFECT_SUPER_RUN, {"Super Run", 70, true }},
	{EFFECT_SUPER_JUMP, {"Super Jump", 71, true }},
	{EFFECT_PLAYER_RAGDOLL, {"Ragdoll", 72}},
	{EFFECT_PEDS_RAGDOLL_ON_TOUCH, {"Sensitive Touch", 73, true}},
	{EFFECT_PLUS_100K, {"+$100.000", 74}},
	{EFFECT_MINUS_100K, {"-$100.000", 75}},
	{EFFECT_PEDS_FOLLOW_PLAYER, {"You Are Famous", 76}},
	{EFFECT_PLAYER_DRUNK, {"Drunk", 77, true}},
	{EFFECT_PEDS_OHKO, {"One Hit KO", 78, true}},
	{EFFECT_PEDS_NO_FEAR, {"Peds Never Flee", 79, true}},
	{EFFECT_SCREEN_BLOOM, {"Bloom", 80, true, { EFFECT_SCREEN_LSD }}},
	{EFFECT_SCREEN_LSD, {"LSD", 81, true, { EFFECT_SCREEN_BLOOM }}},
	{EFFECT_PEDS_IGNORE_PLAYER, {"Peds Ignore Player", 82, true}},
	{EFFECT_HONK_BOOSTING, {"Honk Boosting", 83, true}},
	{EFFECT_MIN_DAMAGE, {"Minimal Damage", 84, true, { EFFECT_NO_HEADSHOTS }}},
	{EFFECT_NO_HEADSHOTS, {"No Headshots", 85, true, { EFFECT_MIN_DAMAGE }}},
	{EFFECT_PEDS_FROZEN, {"Peds Are Brainless", 86, true}},
	{EFFECT_LOW_GRAV, {"Low Gravity", 87, true, { EFFECT_VERY_LOW_GRAV }}},
	{EFFECT_VERY_LOW_GRAV, {"Very Low Gravity", 88, true, { EFFECT_LOW_GRAV }}},
	{EFFECT_INSANE_GRAV, {"Insane Gravity", 101, true, {}, true}},
	{EFFECT_VEH_REPAIR, {"Repair Current Vehicle", 89}},
	{EFFECT_VEH_POP_TIRES, {"Pop Tires Of Current Vehicle", 90}},
	{EFFECT_ALL_VEH_POP_TIRES, {"Now This Is Some Tire Poppin'", 91, true}},
	{EFFECT_NO_SPECIAL_ABILITY, {"No Special Ability", 92, true}},
	{EFFECT_IN_THE_HOOD, {"In The Hood", 93, true}},
	{EFFECT_FORCED_CINEMATIC, {"Cinematic Vehicle Cam", 94, true, { EFFECT_FORCED_FP }}},
	{EFFECT_PEDS_FLEE, {"All Peds Are Fleeing", 95}},
	{EFFECT_BREAK_VEH_DOORS, {"Break All Doors Of Current Vehicle", 96}},
	{EFFECT_ZOMBIES, {"Zombies", 98, true}},
	{EFFECT_METEOR_RAIN, {"Meteor Shower", 99, true}},
	{EFFECT_BLIND, {"Blind", 103, true, {}, true}},
	{EFFECT_BLACKOUT, {"Blackout", 104, true}},
	{EFFECT_QUICK_TIME, {"Speedy Time", 106, true, { EFFECT_PAUSE_TIME }}},
	{EFFECT_PAUSE_TIME, {"Pause Time", 107, true, { EFFECT_QUICK_TIME }}},
	{EFFECT_MOV_NO_UD, {"Disable Forwards / Backwards Movement", 108, true}},
	{EFFECT_MOV_NO_LR, {"Disable Left / Right Movement", 109, true}},
	{EFFECT_BREAK, {"It's Time For A Break", 110, true, {}, true}},
	{EFFECT_EVERYONE_RPG, {"Give Everyone An RPG", 111}},
	{EFFECT_EVERYONE_TAZER, {"Give Everyone A Stungun", 112}},
	{EFFECT_EVERYONE_MINIGUN, {"Give Everyone A Minigun", 113}},
	{EFFECT_PEDS_FAST_FIRING, {"Peds Shoot Fast", 114, true}},
	{EFFECT_NO_SPRINT, {"No Sprint", 115, true}},
	{EFFECT_NO_JUMP, {"No Jump", 116, true}},
	{EFFECT_EVERYONE_INVINCIBLE, {"Everyone Is Invincible", 117, true} },
	{EFFECT_VEHS_INVINCIBLE, {"All Vehicles Are Invulnerable", 118, true}},
};

class Effects
{
public:
	Effects() {}

public:
	void StartEffect(EffectType effectType);
	void StopEffect(EffectType effectType);
	void UpdateEffects();

private:
	bool m_effectActive[_EFFECT_ENUM_MAX] = { false };
};