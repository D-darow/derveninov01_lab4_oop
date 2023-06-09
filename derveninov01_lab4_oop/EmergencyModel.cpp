#include "EmergencyModel.h"

void EmergencyModel::SetEmergencyProbability(double emergencyProbability)
{
	this->EmergencyProbability = emergencyProbability;
}

double EmergencyModel::GetEmergencyProbability()
{
	return EmergencyProbability;
}

void EmergencyModel::SetEmergencyScale(std::string emergencyScale)
{
	this->EmergencyScale = emergencyScale;
}

std::string EmergencyModel::GetEmergencyScale()
{
	return EmergencyScale;
}

void EmergencyModel::SetPossibleVictims(int possibleVictims)
{
	this->PossibleVictims = possibleVictims;
}

void EmergencyModel::SetEmergencyHappened(bool emergencyHappened)
{
	EmergencyHappened = emergencyHappened;
}

int EmergencyModel::GetPossibleVictims()
{
	return PossibleVictims;
}

bool EmergencyModel::GetEmergencyHappened()
{
	return EmergencyHappened;
}
