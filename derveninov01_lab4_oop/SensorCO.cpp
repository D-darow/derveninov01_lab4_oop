#include "SensorCO.h"
// �����������
SensorCO::SensorCO(double latitude, double longitude)
{
	SetCoordinates(latitude, longitude);
	CollectReadings();
}
// �������� ������������ �������� ���� � �������
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
