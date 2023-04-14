#include <iostream>
#include "FireModelProxy.h"

FireModelProxy::FireModelProxy(SensorCO* sensorCO, Pyrometr* pyrometr)
{
	this->pFireModel = new FireModel(sensorCO, pyrometr);
}

long int FireModelProxy::GetFireDuration()
{
	// ����� ����� ���� ����������� ������ �������� ������� � ������� FireModel
	return pFireModel->GetFireDuration();
}

bool FireModelProxy::StartModeling()
{
	// ����� ����� ���� ����������� ������ �������� ������� � ������� FireModel
	return pFireModel->StartModeling();
}

std::string FireModelProxy::GenerateEmergencyResponseTips()
{
	// ����� ����� ���� ����������� ������ �������� ������� � ������� FireModel
	return pFireModel->GenerateEmergencyResponseTips();
}

std::string FireModelProxy::GeneratePossibleEmergencyConsequences()
{
	// ����� ����� ���� ����������� ������ �������� ������� � ������� FireModel
	return pFireModel->GeneratePossibleEmergencyConsequences();
}

void FireModelProxy::SetEmergencyProbability(double emergencyProbability)
{
	// ����� ����� ���� ����������� ������ �������� ������� � ������� FireModel
	pFireModel->SetEmergencyProbability(emergencyProbability);
}

void FireModelProxy::SetEmergencyScale(std::string emergencyScale)
{
	// ����� ����� ���� ����������� ������ �������� ������� � ������� FireModel
	pFireModel->SetEmergencyScale(emergencyScale);
}

void FireModelProxy::SetPossibleVictims(int possibleVictims)
{
	// ������ �������� �������
	if (possibleVictims < 0)
	{
		std::cout << "������!" << std::endl;
	}
	pFireModel->SetPossibleVictims(possibleVictims);
}

void FireModelProxy::SetEmergencyHappened(bool emergencyHappened)
{
	// ����� ����� ���� ����������� ������ �������� ������� � ������� FireModel
	pFireModel->SetEmergencyHappened(emergencyHappened);
}

double FireModelProxy::GetEmergencyProbability()
{
	// ����� ����� ���� ����������� ������ �������� ������� � ������� FireModel
	return pFireModel->GetEmergencyProbability();
}

std::string FireModelProxy::GetEmergencyScale()
{
	// ����� ����� ���� ����������� ������ �������� ������� � ������� FireModel
	return pFireModel->GetEmergencyScale();
}

int FireModelProxy::GetPossibleVictims()
{
	// ����� ����� ���� ����������� ������ �������� ������� � ������� FireModel
	return pFireModel->GetPossibleVictims();
}

bool FireModelProxy::GetEmergencyHappened()
{
	// ����� ����� ���� ����������� ������ �������� ������� � ������� FireModel
	return pFireModel->GetEmergencyHappened();
}

FireModelProxy::~FireModelProxy()
{
	delete pFireModel;
}
