#pragma once
#include "FireForecastingStation.h"
#include "FireModel.h"
class FireForecastingStationProxy : public IForecastingStation
{
private:
    FireForecastingStation* pFireForecastingStation;
public:
    FireForecastingStationProxy(FireModel* pFM);
    std::string GenerateEmergencyResponseTips() override;
    std::string GeneratePossibleEmergencyConsequences() override;
    void StartModeling();
};