#include <iostream>
#include "FireModel.h"

long int FireModel::GetFireDuration()
{
	return FireDuration;
}

FireModel::FireModel(SensorCO* sensorCO, Pyrometr* pyrometr)
	: pSensorCO(sensorCO), pPyrometr(pyrometr)
{
	this->SetEmergencyProbability(0);
	this->SetEmergencyScale("");
	this->SetPossibleVictims(0);
	FireDuration = 0;
}

void FireModel::StartModeling()
{
	pSensorCO->CollectReadings();
	pPyrometr->CollectReadings();
	double readingsCO = pSensorCO->GetReadings();
	int temperature = pPyrometr->GetTemperature();
	if (temperature > 100 || readingsCO > 400)
	{
		this->SetEmergencyProbability(rand() % 51 + 50.0);
		this->SetEmergencyScale("Значительный");
		this->SetPossibleVictims(rand() % 50000 + 10000);
		this->FireDuration = rand() % 100 + 50;
	}
	else
	{
		this->SetEmergencyProbability(rand() % 10 + 0.0);
		this->SetEmergencyScale("Незначительный");
		this->SetPossibleVictims(rand() % 100);
		this->FireDuration = rand() % 10 + 1;
	}
	std::cout << "Модель завершила работу." << std::endl;
}

FireModel::~FireModel() {}
