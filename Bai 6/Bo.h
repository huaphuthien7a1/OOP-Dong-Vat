#pragma once
#include"ConVat.h"
class Cow :public ConVat
{
private:
    const string say = "CowCowCow";
public:
    Cow();
    ~Cow();
    void Say();
    void Print();
};