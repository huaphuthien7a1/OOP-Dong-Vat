#include"Cuu.h"
Sheep::Sheep() {
    SetSayToFeed(say);
    SetLiterMilk(rand() % 5 + 1);
    SetNumChild(rand() % 10 + 1);
}
Sheep::~Sheep() {
}
void Sheep::Say() {
    cout << say;
}
void Sheep::Print() {
    cout << "Cuu ";
    ConVat::Print();
}