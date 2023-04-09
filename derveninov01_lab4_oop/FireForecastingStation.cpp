#include "FireForecastingStation.h"

FireForecastingStation::FireForecastingStation(FireModel* pFM) : pFireModel(pFM)
{
}

std::string FireForecastingStation::GenerateEmergencyResponseTips()
{
	std::string result;
	int tmp;
	if (pFireModel->GetEmergencyScale() == "Значительный")
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

std::string FireForecastingStation::GeneratePossibleEmergencyConsequences()
{
	std::string result;
	if (pFireModel->GetEmergencyScale() == "Значительный")
	{
		result = "Удручающие";
	}
	else
	{
		result = "Незначительные";
	}
	return result;
}

void FireForecastingStation::StartModeling()
{
	pFireModel->StartModeling();
}
