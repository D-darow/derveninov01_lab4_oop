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
	this->SetEmergencyHappened(false);
	FireDuration = 0;
}

bool FireModel::StartModeling()
{
	pSensorCO->CollectReadings();
	pPyrometr->CollectReadings();
	double readingsCO = pSensorCO->GetReadings();
	double criticalReadingsCO = pSensorCO->GetCriticalReadings();
	int temperature = pPyrometr->GetTemperature();
	int criticalTemperature = pPyrometr->GetCriticalTemperature();
	if (temperature > criticalTemperature && readingsCO > criticalReadingsCO)
	{
		this->SetEmergencyProbability(100);
		this->SetEmergencyScale("Значительный");
		this->SetPossibleVictims(rand() % 50000 + 10000);
		this->FireDuration = rand() % 100 + 50;
		this->SetEmergencyHappened(true);
	}
	else if (temperature > criticalTemperature / 2 || readingsCO > criticalReadingsCO / 2)
	{
		this->SetEmergencyProbability(rand() % 51 + 50.0);
		this->SetEmergencyScale("Значительный");
		this->SetPossibleVictims(rand() % 50000 + 10000);
		this->FireDuration = rand() % 100 + 50;
		this->SetEmergencyHappened(false);
	}
	else
	{
		this->SetEmergencyProbability(rand() % 10 + 0.0);
		this->SetEmergencyScale("Незначительный");
		this->SetPossibleVictims(rand() % 100);
		this->FireDuration = rand() % 10 + 1;
		this->SetEmergencyHappened(false);
	}
	std::cout << "Модель пожара завершила работу." << std::endl;
	return this->GetEmergencyHappened();
}

std::string FireModel::GenerateEmergencyResponseTips()
{
	std::string result;
	int tmp;
	if (GetEmergencyScale() == "Значительный")
	{
		result = "Т.к. масштаб пожара значительный, то для его ликвидации потребуется:\n";
		tmp = rand() % 80 + 20;
		result += std::to_string(tmp) + " пожарных машин;\n";
		tmp = rand() % 20 + 10;
		result += std::to_string(tmp) + " вертолетов.";
	}
	else
	{
		result = "Т.к. масштаб пожара незначительный, то для его ликвидации потребуется:\n";
		tmp = rand() % 10 + 1;
		result += std::to_string(tmp) + " пожарных машин;\n";
		tmp = rand() % 5;
		result += std::to_string(tmp) + " вертолетов.";
	}
	return result;
}

std::string FireModel::GeneratePossibleEmergencyConsequences()
{
	std::string result;
	if (GetEmergencyScale() == "Значительный")
	{
		result = "Удручающие";
	}
	else
	{
		result = "Незначительные";
	}
	return result;
}

FireModel::~FireModel() {}
