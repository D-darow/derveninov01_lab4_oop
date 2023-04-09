#pragma once
#include <string>
class IForecastingStation
{
public:
	virtual std::string GenerateEmergencyResponseTips() = 0;
	virtual std::string GeneratePossibleEmergencyConsequences() = 0;
	virtual ~IForecastingStation() {};
};