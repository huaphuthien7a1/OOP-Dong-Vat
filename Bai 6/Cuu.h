#pragma once
#include"ConVat.h"

class Sheep :public ConVat
{
private:
    const string say = "SheepSheepSheep";
public:
    
    Sheep();
    ~Sheep();
    void Say();
    void Print();
};