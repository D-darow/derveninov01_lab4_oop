#include "SensorCO.h"
// Конструктор
SensorCO::SensorCO(double latitude, double longitude, double criticalReadings)
{
	SetCoordinates(latitude, longitude);
	this->CriticalReadings = criticalReadings;
	CollectReadings();
}
// Получить концентрацию угарного газа в воздухе
void SensorCO::CollectReadings()
{
	Readings = rand() % 1000;
}

void SensorCO::SetCriticalReadings(double criticalReadings)
{
	this->CriticalReadings = criticalReadings;
}

double SensorCO::GetCriticalReadings()
{
	return CriticalReadings;
}

double SensorCO::GetReadings()
{
	return Readings;
}
