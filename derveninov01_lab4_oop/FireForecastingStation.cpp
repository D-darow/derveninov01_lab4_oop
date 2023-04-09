#include "FireForecastingStation.h"

FireForecastingStation::FireForecastingStation(FireModel* pFM) : pFireModel(pFM)
{
}

std::string FireForecastingStation::GenerateEmergencyResponseTips()
{
	std::string result;
	int tmp;
	if (pFireModel->GetEmergencyScale() == "������������")
	{
		result = "�.�. ������� ������ ������������, �� ��� ��� ���������� �����������:\n";
		tmp = rand() % 80 + 20;
		result += std::to_string(tmp) + " �������� �����;\n";
		tmp = rand() % 20 + 10;
		result += std::to_string(tmp) + " ����������.";
	}
	else
	{
		result = "�.�. ������� ������ ��������������, �� ��� ��� ���������� �����������:\n";
		tmp = rand() % 10 + 1;
		result += std::to_string(tmp) + " �������� �����;\n";
		tmp = rand() % 5;
		result += std::to_string(tmp) + " ����������.";
	}
	return result;
}

std::string FireForecastingStation::GeneratePossibleEmergencyConsequences()
{
	std::string result;
	if (pFireModel->GetEmergencyScale() == "������������")
	{
		result = "����������";
	}
	else
	{
		result = "��������������";
	}
	return result;
}

void FireForecastingStation::StartModeling()
{
	pFireModel->StartModeling();
}
