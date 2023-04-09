#pragma once
#include "IForecastingStation.h"
#include "FireModel.h"

class FireForecastingStation : public IForecastingStation
{
private:
	FireModel* pFireModel;
public:
	FireForecastingStation(FireModel* pFM);
	std::string GenerateEmergencyResponseTips();
	std::string GeneratePossibleEmergencyConsequences();
	void StartModeling();
	~FireForecastingStation() {};
};

