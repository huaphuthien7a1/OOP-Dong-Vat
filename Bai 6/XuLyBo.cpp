#include"Bo.h"

Cow::Cow() {
    SetSayToFeed(say);
    SetLiterMilk(rand() % 20 + 1);
    SetNumChild(rand() % 10 + 1);
}
Cow::~Cow() {
}

void Cow::Say() {
    cout << say;
}
void Cow::Print() {
    cout << "Bo ";
    ConVat::Print();
}
