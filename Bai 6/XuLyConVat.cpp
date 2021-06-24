#include<iostream>
#include"ConVat.h"
#include<random>
#include<time.h>
using namespace std;

ConVat::ConVat(int numchild, int milk, const string say) {
    SetLiterMilk(milk);
    SetNumChild(numchild);
    SetSayToFeed(say);
}
ConVat::~ConVat() {
}
void ConVat::SetNumChild(int num) {
    NumChild = num;
}
void ConVat::SetLiterMilk(int milk) {
    LiterMilk = milk;
}
void ConVat::SetSayToFeed(string say) {
    SayToFeed = say;
}
void ConVat::Print() {
    cout << "co " << GetNumChild() << " con va cung cap " << GetLiterMilk() << " lit sua, keu " << GetSayToFeed() << " khi doi.";
}

