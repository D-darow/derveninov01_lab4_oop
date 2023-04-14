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

FireModelProxy::~FireModelProxy()
{
	delete pFireModel;
}
