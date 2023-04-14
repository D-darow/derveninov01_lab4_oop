#include <iostream>
#include "FireModel.h"

long int FireModel::GetFireDuration()
{
	return FireDuration;
}

FireModel::FireModel(SensorCO* sensorCO, Pyrometr* pyrometr)
	: pSensorCO(sensorCO), pPyrometr(pyrometr)
{
	this->SetEmergencyProbability(0);
	this->SetEmergencyScale("");
	this->SetPossibleVictims(0);
	this->SetEmergencyHappened(false);
	FireDuration = 0;
}

bool FireModel::StartModeling()
{
	pSensorCO->CollectReadings();
	pPyrometr->CollectReadings();
	double readingsCO = pSensorCO->GetReadings();
	double criticalReadingsCO = pSensorCO->GetCriticalReadings();
	int temperature = pPyrometr->GetTemperature();
	int criticalTemperature = pPyrometr->GetCriticalTemperature();
	if (temperature > criticalTemperature && readingsCO > criticalReadingsCO)
	{
		this->SetEmergencyProbability(100);
		this->SetEmergencyScale("������������");
		this->SetPossibleVictims(rand() % 50000 + 10000);
		this->FireDuration = rand() % 100 + 50;
		this->SetEmergencyHappened(true);
	}
	else if (temperature > criticalTemperature / 2 || readingsCO > criticalReadingsCO / 2)
	{
		this->SetEmergencyProbability(rand() % 51 + 50.0);
		this->SetEmergencyScale("������������");
		this->SetPossibleVictims(rand() % 50000 + 10000);
		this->FireDuration = rand() % 100 + 50;
		this->SetEmergencyHappened(false);
	}
	else
	{
		this->SetEmergencyProbability(rand() % 10 + 0.0);
		this->SetEmergencyScale("��������������");
		this->SetPossibleVictims(rand() % 100);
		this->FireDuration = rand() % 10 + 1;
		this->SetEmergencyHappened(false);
	}
	std::cout << "������ ������ ��������� ������." << std::endl;
	return this->GetEmergencyHappened();
}

std::string FireModel::GenerateEmergencyResponseTips()
{
	std::string result;
	int tmp;
	if (GetEmergencyScale() == "������������")
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

std::string FireModel::GeneratePossibleEmergencyConsequences()
{
	std::string result;
	if (GetEmergencyScale() == "������������")
	{
		result = "����������";
	}
	else
	{
		result = "��������������";
	}
	return result;
}

FireModel::~FireModel() {}
