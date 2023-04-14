#include "WaterLevelSensor.h"

WaterLevelSensor::WaterLevelSensor(double latitude, double longitude, int criticalWaterLevel)
{
	SetCoordinates(latitude, longitude);
	this->CriticalWaterLevel = criticalWaterLevel;
	CollectReadings();
}

void WaterLevelSensor::CollectReadings()
{
	WaterLevel = rand() % 40 - 20;
}

void WaterLevelSensor::SetCriticalWaterLevel(int criticalWaterLevel)
{
	this->CriticalWaterLevel = criticalWaterLevel;
}

int WaterLevelSensor::GetCriticalWaterLevel()
{
	return CriticalWaterLevel;
}

int WaterLevelSensor::GetWaterLevel()
{
	return WaterLevel;
}
