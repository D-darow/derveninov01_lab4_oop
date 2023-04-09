#include "Sensor.h"

std::array<double, 2> Sensor::GetCoordinates()
{
    return Coordinates;
}

void Sensor::SetCoordinates(double latitude, double longitude)
{
    this->Coordinates[0] = latitude; this->Coordinates[1] = longitude;
}
