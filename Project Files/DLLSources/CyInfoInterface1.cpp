#include "CvGameCoreDLL.h"
#include "CvInfos.h"
//
// Python interface for info classes (formerly structs)
// These are simple enough to be exposed directly - no wrappers
//
void CyInfoPythonInterface1()
{
	OutputDebugString("Python Extension Module - CyInfoPythonInterface1\n");
	python::class_<CvInfoBase, boost::noncopyable>("CvInfoBase")
		.def("isGraphicalOnly", &CvInfoBase::isGraphicalOnly, "bool ()")
		.def("getType", &CvInfoBase::getType, "string ()")
		.def("getButton", &CvInfoBase::getButton, "string ()")
		.def("getTextKey", &CvInfoBase::pyGetTextKey, "wstring ()")
		.def("getText", &CvInfoBase::pyGetText, "wstring ()")
		.def("getDescription", &CvInfoBase::pyGetDescription, "wstring ()")
		.def("getDescriptionForm", &CvInfoBase::pyGetDescriptionForm, "wstring ()")
		.def("getCivilopedia", &CvInfoBase::pyGetCivilopedia, "wstring ()")
		.def("getStrategy", &CvInfoBase::pyGetStrategy, "wstring ()")
		.def("getHelp", &CvInfoBase::pyGetHelp, "wstring ()")
		.def("isMatchForLink", &CvInfoBase::isMatchForLink, "bool (string)")
		;
	python::class_<CvScalableInfo, boost::noncopyable>("CvScalableInfo")
		.def("setScale", &CvScalableInfo::setScale, "void (float fScale)")
		.def("getScale", &CvScalableInfo::getScale, "float  ()")
		;
	python::class_<CvPromotionInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvPromotionInfo")
		.def("getPrereqPromotion", &CvPromotionInfo::getPrereqPromotion, "int ()")
		.def("getPrereqOrPromotion1", &CvPromotionInfo::getPrereqOrPromotion1, "int ()")
		.def("getPrereqOrPromotion2", &CvPromotionInfo::getPrereqOrPromotion2, "int ()")
		.def("getActionInfoIndex", &CvPromotionInfo::getActionInfoIndex, "int ()")
		.def("getVisibilityChange", &CvPromotionInfo::getVisibilityChange, "int ()")
		.def("getMovesChange", &CvPromotionInfo::getMovesChange, "int ()")
		.def("getMoveDiscountChange", &CvPromotionInfo::getMoveDiscountChange, "int ()")
		.def("getWithdrawalChange", &CvPromotionInfo::getWithdrawalChange, "int ()")
		.def("getCargoChange", &CvPromotionInfo::getCargoChange, "int ()")
		.def("getBombardRateChange", &CvPromotionInfo::getBombardRateChange, "int ()")
		.def("getEnemyHealChange", &CvPromotionInfo::getEnemyHealChange, "int ()")
		.def("getNeutralHealChange", &CvPromotionInfo::getNeutralHealChange, "int ()")
		.def("getFriendlyHealChange", &CvPromotionInfo::getFriendlyHealChange, "int ()")
		.def("getSameTileHealChange", &CvPromotionInfo::getSameTileHealChange, "int ()")
		.def("getAdjacentTileHealChange", &CvPromotionInfo::getAdjacentTileHealChange, "int ()")
		.def("getCombatPercent", &CvPromotionInfo::getCombatPercent, "int ()")
		.def("getCityAttackPercent", &CvPromotionInfo::getCityAttackPercent, "int ()")
		.def("getCityDefensePercent", &CvPromotionInfo::getCityDefensePercent, "int ()")
		.def("getHillsAttackPercent", &CvPromotionInfo::getHillsAttackPercent, "int ()")
		.def("getHillsDefensePercent", &CvPromotionInfo::getHillsDefensePercent, "int ()")
		.def("getDomesticBonusPercent", &CvPromotionInfo::getDomesticBonusPercent, "int ()")
		.def("getCommandType", &CvPromotionInfo::getCommandType, "int ()")
		.def("getPillageChange", &CvPromotionInfo::getPillageChange, "int ()")
		.def("getUpgradeDiscount", &CvPromotionInfo::getUpgradeDiscount, "int ()")
		.def("getExperiencePercent", &CvPromotionInfo::getExperiencePercent, "int ()")
		.def("isLeader", &CvPromotionInfo::isLeader, "bool ()")
		.def("isBlitz", &CvPromotionInfo::isBlitz, "bool ()")
		.def("isAmphib", &CvPromotionInfo::isAmphib, "bool ()")
		.def("isRiver", &CvPromotionInfo::isRiver, "bool ()")
		.def("isEnemyRoute", &CvPromotionInfo::isEnemyRoute, "bool ()")
		.def("isAlwaysHeal", &CvPromotionInfo::isAlwaysHeal, "bool ()")
		.def("isHillsDoubleMove", &CvPromotionInfo::isHillsDoubleMove, "bool ()")
		.def("getSound", &CvPromotionInfo::getSound, "string ()")
		// Arrays
		.def("getTerrainAttackPercent", &CvPromotionInfo::getTerrainAttackPercent, "int (int i)")
		.def("getTerrainDefensePercent", &CvPromotionInfo::getTerrainDefensePercent, "int (int i)")
		.def("getFeatureAttackPercent", &CvPromotionInfo::getFeatureAttackPercent, "int (int i)")
		.def("getFeatureDefensePercent", &CvPromotionInfo::getFeatureDefensePercent, "int (int i)")
		.def("getUnitClassAttackModifier", &CvPromotionInfo::getUnitClassAttackModifier, "int (int i)")
		.def("getUnitClassDefenseModifier", &CvPromotionInfo::getUnitClassDefenseModifier, "int (int i)")
		.def("getUnitCombatModifierPercent", &CvPromotionInfo::getUnitCombatModifierPercent, "int (int i)")
		.def("getDomainModifierPercent", &CvPromotionInfo::getDomainModifierPercent, "int (int i)")
		.def("getTerrainDoubleMove", &CvPromotionInfo::getTerrainDoubleMove, "bool (int i)")
		.def("getFeatureDoubleMove", &CvPromotionInfo::getFeatureDoubleMove, "bool (int i)")
		.def("getUnitCombat", &CvPromotionInfo::getUnitCombat, "bool (int i)")
		;
	python::class_<CvMissionInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvMissionInfo")
		.def("getTime", &CvMissionInfo::getTime, "int ()")
		.def("isSound", &CvMissionInfo::isSound, "bool ()")
		.def("isTarget", &CvMissionInfo::isTarget, "bool ()")
		.def("isBuild", &CvMissionInfo::isBuild, "bool ()")
		.def("getVisible", &CvMissionInfo::getVisible, "bool ()")
		.def("getWaypoint", &CvMissionInfo::getWaypoint, "string ()")
		;
	python::class_<CvActionInfo, boost::noncopyable>("CvActionInfo")
		.def("getMissionData", &CvActionInfo::getMissionData, "int ()")
		.def("getCommandData", &CvActionInfo::getCommandData, "int ()")
		.def("getAutomateType", &CvActionInfo::getAutomateType, "int ()")
		.def("getInterfaceModeType", &CvActionInfo::getInterfaceModeType, "int ()")
		.def("getMissionType", &CvActionInfo::getMissionType, "int ()")
		.def("getCommandType", &CvActionInfo::getCommandType, "int ()")
		.def("getControlType", &CvActionInfo::getControlType, "int ()")
		.def("isConfirmCommand", &CvActionInfo::isConfirmCommand, "bool ()")
		.def("isVisible", &CvActionInfo::isVisible, "bool ()")
		.def("getHotKey", &CvActionInfo::getHotKey, "string ()")
		.def("getButton", &CvActionInfo::getButton, "string ()")
		;
	python::class_<CvUnitInfo, boost::noncopyable, python::bases<CvInfoBase, CvScalableInfo> >("CvUnitInfo")
		// TAC - Python Export - Ray - START
		.def("NBMOD_GetTeachLevel", &CvUnitInfo::NBMOD_GetTeachLevel, "int ()")
		// TAC - Python Export - Ray - END
		// TAC - LbD - Ray - START
		.def("LbD_canBecomeExpert", &CvUnitInfo::LbD_canBecomeExpert, "bool ()")
		.def("LbD_canGetFree", &CvUnitInfo::LbD_canGetFree, "bool ()")
		.def("LbD_canEscape", &CvUnitInfo::LbD_canEscape, "bool ()")		
		// TAC - LbD - Ray - END
		// WTP, ray, LbD Slaves Revolt and Free - START
		.def("LbD_canRevolt", &CvUnitInfo::LbD_canRevolt, "bool ()")
		// WTP, ray, LbD Slaves Revolt and Free - END
		.def("getAIWeight", &CvUnitInfo::getAIWeight, "int ()")
		.def("getHurryCostModifier", &CvUnitInfo::getHurryCostModifier, "int ()")
		.def("getEuropeCost", &CvUnitInfo::getEuropeCost, "int ()")
		.def("getEuropeCostIncrease", &CvUnitInfo::getEuropeCostIncrease, "int ()")
		.def("getImmigrationWeight", &CvUnitInfo::getImmigrationWeight, "int ()")
		.def("getImmigrationWeightDecay", &CvUnitInfo::getImmigrationWeightDecay, "int ()")
		.def("getMinAreaSize", &CvUnitInfo::getMinAreaSize, "int ()")
		.def("getMoves", &CvUnitInfo::getMoves, "int ()")
		.def("getWorkRate", &CvUnitInfo::getWorkRate, "int ()")
		.def("getWorkRateModifier", &CvUnitInfo::getWorkRateModifier, "int ()")
		.def("getMissionaryRateModifier", &CvUnitInfo::getMissionaryRateModifier, "int ()")
		.def("getCombat", &CvUnitInfo::getCombat, "int ()")
		.def("setCombat", &CvUnitInfo::setCombat, "void (int)")
		.def("getXPValueAttack", &CvUnitInfo::getXPValueAttack, "int ()")
		.def("getXPValueDefense", &CvUnitInfo::getXPValueDefense, "int ()")
		.def("getWithdrawalProbability", &CvUnitInfo::getWithdrawalProbability, "int ()")
		.def("getCityAttackModifier", &CvUnitInfo::getCityAttackModifier, "int ()")
		.def("getCityDefenseModifier", &CvUnitInfo::getCityDefenseModifier, "int ()")
		.def("getHillsAttackModifier", &CvUnitInfo::getHillsAttackModifier, "int ()")
		.def("getHillsDefenseModifier", &CvUnitInfo::getHillsDefenseModifier, "int ()")
		.def("getDomesticBonusModifier", &CvUnitInfo::getDomesticBonusModifier, "int ()")
		.def("getBombardRate", &CvUnitInfo::getBombardRate, "int ()")
		.def("getSpecialCargo", &CvUnitInfo::getSpecialCargo, "int ()")
		.def("getDomainCargo", &CvUnitInfo::getDomainCargo, "int ()")
		.def("getCargoSpace", &CvUnitInfo::getCargoSpace, "int ()")
		.def("getRequiredTransportSize", &CvUnitInfo::getRequiredTransportSize, "int ()")
		.def("getAssetValue", &CvUnitInfo::getAssetValue, "int ()")
		.def("getPowerValue", &CvUnitInfo::getPowerValue, "int ()")
		.def("getUnitClassType", &CvUnitInfo::getUnitClassType, "int ()")
		.def("getSpecialUnitType", &CvUnitInfo::getSpecialUnitType, "int ()")
		.def("getUnitCaptureClassType", &CvUnitInfo::getUnitCaptureClassType, "int ()")
		.def("getUnitCombatType", &CvUnitInfo::getUnitCombatType, "int ()")
		.def("getDomainType", &CvUnitInfo::getDomainType, "int ()")
		.def("getDefaultProfession", &CvUnitInfo::getDefaultProfession, "int ()")
		.def("getDefaultUnitAIType", &CvUnitInfo::getDefaultUnitAIType, "int ()")
		.def("getInvisibleType", &CvUnitInfo::getInvisibleType, "int ()")
		.def("getNumSeeInvisibleTypes", &CvUnitInfo::getNumSeeInvisibleTypes, "int ()")
		.def("getSeeInvisibleType", &CvUnitInfo::getSeeInvisibleType, "int (int)")
		.def("getPrereqBuilding", &CvUnitInfo::getPrereqBuilding, "int ()")
		.def("getGroupSize", &CvUnitInfo::getGroupSize, "int ()")
		.def("getGroupDefinitions", &CvUnitInfo::getGroupDefinitions, "int ()")
		.def("getMeleeWaveSize", &CvUnitInfo::getMeleeWaveSize, "int ()")
		.def("getRangedWaveSize", &CvUnitInfo::getRangedWaveSize, "int ()")
		.def("getNumUnitNames", &CvUnitInfo::getNumUnitNames, "int ()")
		.def("getCommandType", &CvUnitInfo::getCommandType, "int ()")
		.def("getLearnTime", &CvUnitInfo::getLearnTime, "int ()")
		.def("getStudentWeight", &CvUnitInfo::getStudentWeight, "int ()")
		.def("getTeacherWeight", &CvUnitInfo::getTeacherWeight, "int ()")
		// < JAnimals Mod Start >
		.def("getAnimalPatrolWeight", &CvUnitInfo::getAnimalPatrolWeight, "int ()")
		.def("getAnimalAttackWeight", &CvUnitInfo::getAnimalAttackWeight, "int ()")
		// < JAnimals Mod End >
		.def("isNoBadGoodies", &CvUnitInfo::isNoBadGoodies, "bool ()")
		.def("isOnlyDefensive", &CvUnitInfo::isOnlyDefensive, "bool ()")
		.def("isNoCapture", &CvUnitInfo::isNoCapture, "bool ()")
		.def("isRivalTerritory", &CvUnitInfo::isRivalTerritory, "bool ()")
		.def("isMilitaryProduction", &CvUnitInfo::isMilitaryProduction, "bool ()")
		.def("isFound", &CvUnitInfo::isFound, "bool ()")
		.def("isInvisible", &CvUnitInfo::isInvisible, "bool ()")
		.def("setInvisible", &CvUnitInfo::setInvisible, "void (bool bEnable)")
		.def("isNoDefensiveBonus", &CvUnitInfo::isNoDefensiveBonus, "bool ()")
		.def("isCanMoveImpassable", &CvUnitInfo::isCanMoveImpassable, "bool ()")
		.def("isCanMoveAllTerrain", &CvUnitInfo::isCanMoveAllTerrain, "bool ()")
		.def("isFlatMovementCost", &CvUnitInfo::isFlatMovementCost, "bool ()")
		.def("isIgnoreTerrainCost", &CvUnitInfo::isIgnoreTerrainCost, "bool ()")
		.def("isMechUnit", &CvUnitInfo::isMechUnit, "bool ()")
		.def("isLineOfSight", &CvUnitInfo::isLineOfSight, "bool ()")
		.def("isHiddenNationality", &CvUnitInfo::isHiddenNationality, "bool ()")
		.def("isAlwaysHostile", &CvUnitInfo::isAlwaysHostile, "bool ()")
		.def("isTreasure", &CvUnitInfo::isTreasure, "bool ()")
		.def("isCapturesCargo", &CvUnitInfo::isCapturesCargo, "bool ()")
		.def("isLandYieldChanges", &CvUnitInfo::isLandYieldChanges, "bool ()")
		.def("isWaterYieldChanges", &CvUnitInfo::isWaterYieldChanges, "bool ()")
		// < JAnimals Mod Start >
		.def("isAnimal", &CvUnitInfo::isAnimal, "bool ()")
		// < JAnimals Mod End >
		.def("isGatherBoat", &CvUnitInfo::isGatherBoat, "bool ()")  //TAC Whaling, ray
		.def("getUnitMaxSpeed", &CvUnitInfo::getUnitMaxSpeed, "float ()")
		.def("getUnitPadTime", &CvUnitInfo::getUnitPadTime, "float ()")
		// Arrays
		.def("getProductionTraits", &CvUnitInfo::getProductionTraits, "int (int i)")
		.def("getTerrainAttackModifier", &CvUnitInfo::getTerrainAttackModifier, "int (int i)")
		.def("getTerrainDefenseModifier", &CvUnitInfo::getTerrainDefenseModifier, "int (int i)")
		.def("getFeatureAttackModifier", &CvUnitInfo::getFeatureAttackModifier, "int (int i)")
		.def("getFeatureDefenseModifier", &CvUnitInfo::getFeatureDefenseModifier, "int (int i)")
		.def("getUnitClassAttackModifier", &CvUnitInfo::getUnitClassAttackModifier, "int (int i)")
		.def("getUnitClassDefenseModifier", &CvUnitInfo::getUnitClassDefenseModifier, "int (int i)")
		.def("getUnitCombatModifier", &CvUnitInfo::getUnitCombatModifier, "int (int i)")
		.def("getDomainModifier", &CvUnitInfo::getDomainModifier, "int (int i)")
		.def("getYieldModifier", &CvUnitInfo::getYieldModifier, "int (int i)")
		.def("getBonusYieldChange", &CvUnitInfo::getBonusYieldChange, "int (int i)")
		.def("getYieldChange", &CvUnitInfo::getYieldChange, "int (int i)")
		.def("getYieldCost", &CvUnitInfo::getYieldCost, "int (int i)")
		.def("getUnitGroupRequired", &CvUnitInfo::getUnitGroupRequired, "int (int i)")
		.def("getUpgradeUnitClass", &CvUnitInfo::getUpgradeUnitClass, "bool (int i)")
		.def("getUnitAIType", &CvUnitInfo::getUnitAIType, "bool (int i)")
		.def("getNotUnitAIType", &CvUnitInfo::getNotUnitAIType, "bool (int i)")
		.def("getBuilds", &CvUnitInfo::getBuilds, "bool (int i)")
		.def("getTerrainImpassable", &CvUnitInfo::getTerrainImpassable, "bool (int i)")
		.def("getFeatureImpassable", &CvUnitInfo::getFeatureImpassable, "bool (int i)")
		// < JAnimals Mod Start >
		.def("getTerrainNative", &CvUnitInfo::getTerrainNative, "bool (int iIndex)")
		// < JAnimals Mod End >
		.def("getFreePromotions", &CvUnitInfo::getFreePromotions, "bool (int i)")
		.def("isPrereqOrBuilding", &CvUnitInfo::isPrereqOrBuilding, "bool ()")
		.def("getLeaderPromotion", &CvUnitInfo::getLeaderPromotion, "int ()")
		.def("getLeaderExperience", &CvUnitInfo::getLeaderExperience, "int ()")
		//Androrc UnitArtStyles
//		.def("getArtDefineTag", &CvUnitInfo::getArtDefineTag, "string (int i)")
		.def("getArtDefineTag", &CvUnitInfo::getArtDefineTag, "string (int i, int j)")
		//Androrc End
		.def("getUnitNames", &CvUnitInfo::getUnitNames, "string (int i)")
		.def("getArtInfo", &CvUnitInfo::getArtInfo,  python::return_value_policy<python::reference_existing_object>(), "CvArtInfoUnit* (int i)")
		//Androrc UnitArtStyles
		.def("getUnitArtStylesArtInfo", &CvUnitInfo::getUnitArtStylesArtInfo,  python::return_value_policy<python::reference_existing_object>(), "CvArtInfoUnit* (int i, int j)")
		//Androrc End
		;
	python::class_<CvSpecialUnitInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvSpecialUnitInfo")
		.def("isValid", &CvSpecialUnitInfo::isValid, "bool ()")
		.def("isCityLoad", &CvSpecialUnitInfo::isCityLoad, "bool ()")
		.def("isCarrierUnitAIType", &CvSpecialUnitInfo::isCarrierUnitAIType, "bool (int i)")
		.def("getProductionTraits", &CvSpecialUnitInfo::getProductionTraits, "int (int i)")
		;
	python::class_<CvCivicInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvCivicInfo")
		.def("getCivicOptionType", &CvCivicInfo::getCivicOptionType, "int ()")
		.def("getAIWeight", &CvCivicInfo::getAIWeight, "int ()")
		.def("getGreatGeneralRateModifier", &CvCivicInfo::getGreatGeneralRateModifier, "int ()")
		.def("getDomesticGreatGeneralRateModifier", &CvCivicInfo::getDomesticGreatGeneralRateModifier, "int ()")
		.def("getFreeExperience", &CvCivicInfo::getFreeExperience, "int ()")
		.def("getWorkerSpeedModifier", &CvCivicInfo::getWorkerSpeedModifier, "int ()")
		.def("getImprovementUpgradeRateModifier", &CvCivicInfo::getImprovementUpgradeRateModifier, "int ()")
		.def("getMilitaryProductionModifier", &CvCivicInfo::getMilitaryProductionModifier, "int ()")
		.def("getExpInBorderModifier", &CvCivicInfo::getExpInBorderModifier, "int ()")
		.def("getImmigrationConversion", &CvCivicInfo::getImmigrationConversion, "int ()")
		.def("getNativeAttitudeChange", &CvCivicInfo::getNativeAttitudeChange, "int ()")
		.def("getNativeCombatModifier", &CvCivicInfo::getNativeCombatModifier, "int ()")
		.def("getFatherPointModifier", &CvCivicInfo::getFatherPointModifier, "int ()")
		.def("isDominateNativeBorders", &CvCivicInfo::isDominateNativeBorders, "bool ()")
		.def("isRevolutionEuropeTrade", &CvCivicInfo::isRevolutionEuropeTrade, "bool ()")
		// Arrays
		.def("getYieldModifier", &CvCivicInfo::getYieldModifier, "int (int i)")
		.def("getCapitalYieldModifier", &CvCivicInfo::getCapitalYieldModifier, "int (int i)")
		.def("getProfessionCombatChange", &CvCivicInfo::getProfessionCombatChange, "int (int i)")
		.def("isHurry", &CvCivicInfo::isHurry, "bool (int i)")
		.def("isSpecialBuildingNotRequired", &CvCivicInfo::isSpecialBuildingNotRequired, "bool (int i)")
		.def("getImprovementYieldChanges", &CvCivicInfo::getImprovementYieldChanges, "int (int i, int j)")
		.def("getNumFreeUnitClasses", &CvCivicInfo::getNumFreeUnitClasses, "int ()")
		.def("getFreeUnitClass", &CvCivicInfo::getFreeUnitClass, "int (int i)")
		;
	python::class_<CvUnitClassInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvUnitClassInfo")
		.def("getDefaultUnitIndex", &CvUnitClassInfo::getDefaultUnitIndex, "int ()")
		;
	python::class_<CvBuildingInfo, boost::noncopyable, python::bases<CvInfoBase, CvScalableInfo> >("CvBuildingInfo")
		// TAC - Python Export - Ray - START
		.def("NBMOD_GetTeachLevel", &CvBuildingInfo::NBMOD_GetTeachLevel, "int ()")
		// TAC - Python Export - Ray - END
		.def("getBuildingClassType", &CvBuildingInfo::getBuildingClassType, "int ()")
		.def("getVictoryPrereq", &CvBuildingInfo::getVictoryPrereq, "int ()")
		.def("getFreeStartEra", &CvBuildingInfo::getFreeStartEra, "int ()")
		.def("getMaxStartEra", &CvBuildingInfo::getMaxStartEra, "int ()")
		.def("getFreePromotion", &CvBuildingInfo::getFreePromotion, "int ()")
		.def("getAIWeight", &CvBuildingInfo::getAIWeight, "int ()")
		.def("getHurryCostModifier", &CvBuildingInfo::getHurryCostModifier, "int ()")
		.def("getProfessionOutput", &CvBuildingInfo::getProfessionOutput, "int ()")
		.def("getMaxWorkers", &CvBuildingInfo::getMaxWorkers, "int ()")
		.def("getMinAreaSize", &CvBuildingInfo::getMinAreaSize, "int ()")
		.def("getNumCitiesPrereq", &CvBuildingInfo::getNumCitiesPrereq, "int ()")
		.def("getNumTeamsPrereq", &CvBuildingInfo::getNumTeamsPrereq, "int ()")
		.def("getUnitLevelPrereq", &CvBuildingInfo::getUnitLevelPrereq, "int ()")
		.def("getMinLatitude", &CvBuildingInfo::getMinLatitude, "int ()")
		.def("getMaxLatitude", &CvBuildingInfo::getMaxLatitude, "int ()")
		.def("getFreeExperience", &CvBuildingInfo::getFreeExperience, "int ()")
		.def("getFoodKept", &CvBuildingInfo::getFoodKept, "int ()")
		.def("getMilitaryProductionModifier", &CvBuildingInfo::getMilitaryProductionModifier, "int ()")
		.def("getAssetValue", &CvBuildingInfo::getAssetValue, "int ()")
		.def("getPowerValue", &CvBuildingInfo::getPowerValue, "int ()")
		.def("getYieldStorage", &CvBuildingInfo::getYieldStorage, "int ()")
		.def("getSpecialBuildingType", &CvBuildingInfo::getSpecialBuildingType, "int ()")
		.def("getConquestProbability", &CvBuildingInfo::getConquestProbability, "int ()")
		.def("getHealRateChange", &CvBuildingInfo::getHealRateChange, "int ()")
		.def("getDefenseModifier", &CvBuildingInfo::getDefenseModifier, "int ()")
		.def("getBombardDefenseModifier", &CvBuildingInfo::getBombardDefenseModifier, "int ()")
		.def("getMissionType", &CvBuildingInfo::getMissionType, "int ()")
		.def("getOverflowSellPercent", &CvBuildingInfo::getStorageLossSellPercentage, "int ()")
		.def("getSpecialBuildingPriority", &CvBuildingInfo::getSpecialBuildingPriority, "int ()")
		.def("isWorksWater", &CvBuildingInfo::isWorksWater, "bool ()")
		.def("isWater", &CvBuildingInfo::isWater, "bool ()")
		.def("isRiver", &CvBuildingInfo::isRiver, "bool ()")
		.def("isCapital", &CvBuildingInfo::isCapital, "bool ()")
		.def("isNeverCapture", &CvBuildingInfo::isNeverCapture, "bool ()")
		.def("isCenterInCity", &CvBuildingInfo::isCenterInCity, "bool ()")
		.def("getConstructSound", &CvBuildingInfo::getConstructSound, "string ()")
		.def("getHotKey", &CvBuildingInfo::getHotKey, "string ()")
		.def("getHotKeyDescription", &CvBuildingInfo::getHotKeyDescription, "string ()")
		.def("getArtDefineTag", &CvBuildingInfo::getArtDefineTag, "string ()")
		.def("getMovie", &CvBuildingInfo::getMovie, "string ()")
		.def("getMovieDefineTag", &CvBuildingInfo::getMovieDefineTag, "string ()")

		// Arrays
		.def("getYieldChange", &CvBuildingInfo::getYieldChange, "int (int i)")
		.def("getYieldModifier", &CvBuildingInfo::getYieldModifier, "int (int i)")
		.def("getLandPlotYieldChange", &CvBuildingInfo::getLandPlotYieldChange, "int (int i)") // R&R, ray, Landplot Yields
		.def("getSeaPlotYieldChange", &CvBuildingInfo::getSeaPlotYieldChange, "int (int i)")
		.def("getRiverPlotYieldChange", &CvBuildingInfo::getRiverPlotYieldChange, "int (int i)")
		.def("getUnitCombatFreeExperience", &CvBuildingInfo::getUnitCombatFreeExperience, "int (int i)")
		.def("getDomainFreeExperience", &CvBuildingInfo::getDomainFreeExperience, "int (int i)")
		.def("getDomainProductionModifier", &CvBuildingInfo::getDomainProductionModifier, "int (int i)")
		.def("getProductionTraits", &CvBuildingInfo::getProductionTraits, "int (int i)")
		.def("getPrereqNumOfBuildingClass", &CvBuildingInfo::getPrereqNumOfBuildingClass, "int (int i)")
		.def("getYieldCost", &CvBuildingInfo::getYieldCost, "int (int i)")
		.def("isBuildingClassNeededInCity", &CvBuildingInfo::isBuildingClassNeededInCity, "bool (int i)")
		.def("getArtInfo", &CvBuildingInfo::getArtInfo,  python::return_value_policy<python::reference_existing_object>())
		;
	python::class_<CvSpecialBuildingInfo, boost::noncopyable, python::bases<CvInfoBase> >("CvSpecialBuildingInfo")
		.def("isValid", &CvSpecialBuildingInfo::isValid, "bool ()")
		.def("getChar", &CvSpecialBuildingInfo::getChar, "int ()")
		// Arrays
		.def("getProductionTraits", &CvSpecialBuildingInfo::getProductionTraits, "int (int i)")
		.def("getNatureObject", &CvSpecialBuildingInfo::getNatureObject, "string ()")	// TAC - Nature Objects - koma13
		;
}
