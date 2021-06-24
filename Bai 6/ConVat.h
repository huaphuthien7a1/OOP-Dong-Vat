#pragma once
#include<string>
#include<iostream>

using namespace std;
class ConVat
{
private:
    int NumChild;
    int LiterMilk;
    string SayToFeed;
public:
    ConVat(int numchild=0, int milk=0, const string say ="");
    ~ConVat();
    
    int GetNumChild() { return NumChild; }
    int GetLiterMilk() { return LiterMilk; }
    string GetSayToFeed() { return SayToFeed; }
   
    void SetNumChild(int num);
    void SetLiterMilk(int milk);
    void SetSayToFeed(string say);
   
    virtual void  Say() = 0;
    virtual void Print();
};
