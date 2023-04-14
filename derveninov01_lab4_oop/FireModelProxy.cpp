#include <iostream>
#include "FireModelProxy.h"

FireModelProxy::FireModelProxy(SensorCO* sensorCO, Pyrometr* pyrometr)
{
	this->pFireModel = new FireModel(sensorCO, pyrometr);
}

long int FireModelProxy::GetFireDuration()
{
	// Здесь может быть реализована логика контроля доступа к объекту FireModel
	return pFireModel->GetFireDuration();
}

bool FireModelProxy::StartModeling()
{
	// Здесь может быть реализована логика контроля доступа к объекту FireModel
	return pFireModel->StartModeling();
}

std::string FireModelProxy::GenerateEmergencyResponseTips()
{
	// Здесь может быть реализована логика контроля доступа к объекту FireModel
	return pFireModel->GenerateEmergencyResponseTips();
}

std::string FireModelProxy::GeneratePossibleEmergencyConsequences()
{
	// Здесь может быть реализована логика контроля доступа к объекту FireModel
	return pFireModel->GeneratePossibleEmergencyConsequences();
}

void FireModelProxy::SetEmergencyProbability(double emergencyProbability)
{
	// Здесь может быть реализована логика контроля доступа к объекту FireModel
	pFireModel->SetEmergencyProbability(emergencyProbability);
}

void FireModelProxy::SetEmergencyScale(std::string emergencyScale)
{
	// Здесь может быть реализована логика контроля доступа к объекту FireModel
	pFireModel->SetEmergencyScale(emergencyScale);
}

void FireModelProxy::SetPossibleVictims(int possibleVictims)
{
	// Пример контроля доступа
	if (possibleVictims < 0)
	{
		std::cout << "Ошибка!" << std::endl;
	}
	pFireModel->SetPossibleVictims(possibleVictims);
}

void FireModelProxy::SetEmergencyHappened(bool emergencyHappened)
{
	// Здесь может быть реализована логика контроля доступа к объекту FireModel
	pFireModel->SetEmergencyHappened(emergencyHappened);
}

double FireModelProxy::GetEmergencyProbability()
{
	// Здесь может быть реализована логика контроля доступа к объекту FireModel
	return pFireModel->GetEmergencyProbability();
}

std::string FireModelProxy::GetEmergencyScale()
{
	// Здесь может быть реализована логика контроля доступа к объекту FireModel
	return pFireModel->GetEmergencyScale();
}

int FireModelProxy::GetPossibleVictims()
{
	// Здесь может быть реализована логика контроля доступа к объекту FireModel
	return pFireModel->GetPossibleVictims();
}

bool FireModelProxy::GetEmergencyHappened()
{
	// Здесь может быть реализована логика контроля доступа к объекту FireModel
	return pFireModel->GetEmergencyHappened();
}

FireModelProxy::~FireModelProxy()
{
	delete pFireModel;
}
