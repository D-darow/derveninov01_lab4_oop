#pragma once
#include "EmergencyModel.h"
#include "WaterLevelSensor.h"
class FloodModel : public EmergencyModel
{
private:
	WaterLevelSensor* pWaterLevelSensor;
public:
	FloodModel(WaterLevelSensor* waterLevelSensor);
	bool StartModeling();
	// Метод генерации советов по ликвидации
	std::string GenerateEmergencyResponseTips();
	// Метод генерации возможных последствий
	std::string GeneratePossibleEmergencyConsequences();
	~FloodModel() {};
};
