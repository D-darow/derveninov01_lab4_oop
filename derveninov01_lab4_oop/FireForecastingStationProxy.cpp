#include "FireForecastingStationProxy.h"

FireForecastingStationProxy::FireForecastingStationProxy(FireModel* pFM)
{
	pFireForecastingStation = new FireForecastingStation(pFM);
}

std::string FireForecastingStationProxy::GenerateEmergencyResponseTips()
{
	// здесь можно добавить логику для контроля доступа
	return pFireForecastingStation->GenerateEmergencyResponseTips();
}

std::string FireForecastingStationProxy::GeneratePossibleEmergencyConsequences()
{
	// здесь можно добавить логику для контроля доступа
	return pFireForecastingStation->GeneratePossibleEmergencyConsequences();
}

void FireForecastingStationProxy::StartModeling()
{
	// здесь можно добавить логику для контроля доступа
	pFireForecastingStation->StartModeling();
}
