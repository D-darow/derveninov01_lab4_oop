#pragma once
#include "Sensor.h"
#include <random>

class SensorCO : public Sensor
{
private:
	double Readings; // ��������� ������� �������� ����
	double CriticalReadings; // ����������� ���������� ������������ �������� ����
public:
	SensorCO(double latitude, double longitude, double criticalReadings);
	void CollectReadings(); // �������� ��������� �� ���������
	void SetCriticalReadings(double criticalReadings);
	double GetCriticalReadings();
	double GetReadings();
	~SensorCO() {};
};

