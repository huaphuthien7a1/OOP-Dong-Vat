#pragma once
#include"ConVat.h"

class Goat :public ConVat
{
private:
    const string say = "GoatGoatGoat";
public:
    Goat();
    ~Goat();
    void Say();
    void Print();
};



