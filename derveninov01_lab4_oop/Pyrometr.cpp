#include "Pyrometr.h"

Pyrometr::Pyrometr(double latitude, double longitude, int criticalTemperature)
{
	SetCoordinates(latitude, longitude);
	this->CriticalTemperature = criticalTemperature;
	CollectReadings();
}

void Pyrometr::CollectReadings()
{
	Temperature = rand() % 201 - 100;
}

void Pyrometr::SetCriticalTemperature(int criticalTemperature)
{
	this->CriticalTemperature = criticalTemperature;
}

int Pyrometr::GetCriticalTemperature()
{
	return CriticalTemperature;
}

int Pyrometr::GetTemperature()
{
	return Temperature;
}
