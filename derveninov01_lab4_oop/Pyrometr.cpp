#include "Pyrometr.h"

Pyrometr::Pyrometr(double latitude, double longitude)
{
	SetCoordinates(latitude, longitude);
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
