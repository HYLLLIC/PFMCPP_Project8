#pragma once

#include <iostream>

struct Vehicle
{
    Vehicle(const std::string& n);
    virtual ~Vehicle();

    //Special member Functions.  See instruction 9) and note in main()
    Vehicle(const Vehicle&) = default;
    Vehicle& operator=(const Vehicle&) = default;
    
    virtual void setSpeed(int s);
    virtual void tryToEvade();
    
protected:
    int speed = 0;
    std::string name;

private:
    friend struct HighwayPatrol;
};
