#include"De.h"
Goat::Goat() {
    SetSayToFeed(say);
    SetLiterMilk(rand() % 10 + 1);
    SetNumChild(rand() % 10 + 1);
}
Goat::~Goat() {
}

void Goat::Say() {
    cout << say;
}
void Goat::Print() {
    cout << "De ";
    ConVat::Print();
}
