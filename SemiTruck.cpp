#include <string>

#include "SemiTruck.h"

SemiTruck::SemiTruck(const std::string& n) : Vehicle(n) {}
SemiTruck::~SemiTruck() = default;

void SemiTruck::pullOver()
{
    std::cout << name << ": darn, just my luck. Pulling over now..." << std::endl;
}

void SemiTruck::makeRoadTea()
{
    std::cout << name << ": boy, gotta get rid of this bottle at the next Buc-ee's..." << std::endl;
}
