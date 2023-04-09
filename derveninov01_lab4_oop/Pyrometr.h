#pragma once
#include "Sensor.h"
class Pyrometr : public Sensor
{
private:
	int Temperature; // ����������� ������� ������ �������
	int CriticalTemperature; // ����������� �����������
public:
	Pyrometr(double latitude, double longitude);
	void CollectReadings();
	void SetCriticalTemperature(int criticalTemperature);
	int GetCriticalTemperature();
	int GetTemperature();
};

