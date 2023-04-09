#include "FireForecastingStationProxy.h"

FireForecastingStationProxy::FireForecastingStationProxy(FireModel* pFM)
{
	pFireForecastingStation = new FireForecastingStation(pFM);
}

std::string FireForecastingStationProxy::GenerateEmergencyResponseTips()
{
	// ����� ����� �������� ������ ��� �������� �������
	return pFireForecastingStation->GenerateEmergencyResponseTips();
}

std::string FireForecastingStationProxy::GeneratePossibleEmergencyConsequences()
{
	// ����� ����� �������� ������ ��� �������� �������
	return pFireForecastingStation->GeneratePossibleEmergencyConsequences();
}

void FireForecastingStationProxy::StartModeling()
{
	// ����� ����� �������� ������ ��� �������� �������
	pFireForecastingStation->StartModeling();
}
