#include "FireModelProxy.h"

FireModelProxy::FireModelProxy(SensorCO* sensorCO, Pyrometr* pyrometr)
{
	this->pFireModel = new FireModel(sensorCO, pyrometr);
}

long int FireModelProxy::GetFireDuration()
{
	return pFireModel->GetFireDuration();
}

bool FireModelProxy::StartModeling()
{
	return pFireModel->StartModeling();
}

std::string FireModelProxy::GenerateEmergencyResponseTips()
{
	return pFireModel->GenerateEmergencyResponseTips();
}

std::string FireModelProxy::GeneratePossibleEmergencyConsequences()
{
	return pFireModel->GeneratePossibleEmergencyConsequences();
}

void FireModelProxy::SetEmergencyProbability(double emergencyProbability)
{
	pFireModel->SetEmergencyProbability(emergencyProbability);
}

void FireModelProxy::SetEmergencyScale(std::string emergencyScale)
{
	pFireModel->SetEmergencyScale(emergencyScale);
}

void FireModelProxy::SetPossibleVictims(int possibleVictims)
{
	pFireModel->SetPossibleVictims(possibleVictims);
}

void FireModelProxy::SetEmergencyHappened(bool emergencyHappened)
{
	pFireModel->SetEmergencyHappened(emergencyHappened);
}

double FireModelProxy::GetEmergencyProbability()
{
	return pFireModel->GetEmergencyProbability();
}

std::string FireModelProxy::GetEmergencyScale()
{
	return pFireModel->GetEmergencyScale();
}

int FireModelProxy::GetPossibleVictims()
{
	return pFireModel->GetPossibleVictims();
}

bool FireModelProxy::GetEmergencyHappened()
{
	return pFireModel->GetEmergencyHappened();
}

FireModelProxy::~FireModelProxy()
{
	delete pFireModel;
}
