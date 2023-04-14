#pragma once
#include "Sensor.h"
class WaterLevelSensor : public Sensor
{
private:
	int WaterLevel; // Уровень воды
	int CriticalWaterLevel; // Критический уровень воды
public:
	WaterLevelSensor(double latitude, double longitude, int criticalWaterLevel);
	void CollectReadings();
	void SetCriticalWaterLevel(int criticalWaterLevel);
	int GetCriticalWaterLevel();
	int GetWaterLevel();
	~WaterLevelSensor() {};
};