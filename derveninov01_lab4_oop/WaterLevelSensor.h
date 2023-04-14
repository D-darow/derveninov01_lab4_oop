#pragma once
#include "Sensor.h"
class WaterLevelSensor : public Sensor
{
private:
	int WaterLevel; // ������� ����
	int CriticalWaterLevel; // ����������� ������� ����
public:
	WaterLevelSensor(double latitude, double longitude, int criticalWaterLevel);
	void CollectReadings();
	void SetCriticalWaterLevel(int criticalWaterLevel);
	int GetCriticalWaterLevel();
	int GetWaterLevel();
	~WaterLevelSensor() {};
};