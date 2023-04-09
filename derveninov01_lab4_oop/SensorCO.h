#pragma once
#include "Sensor.h"
#include <random>

class SensorCO : public Sensor
{
private:
	double Readings; // Показания датчика угарного газа
	double CriticalReadings; // Критические показатели концентрации угарного газа
public:
	SensorCO(double latitude, double longitude);
	void CollectReadings(); // Получить показания из атмосферы
	void SetCriticalReadings(double criticalReadings);
	double GetCriticalReadings();
	double GetReadings();
	~SensorCO() {};
};

