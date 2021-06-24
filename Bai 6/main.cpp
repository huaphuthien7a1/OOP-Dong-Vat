#include<iostream>
#include"ConVat.h"
#include"Bo.h"
#include"Cuu.h"
#include"De.h"
#include<vector>
#include<random>
#include<time.h>
using namespace std;

void Input(vector<vector<ConVat*>>& List) {
    int CatchKey;
    do {
        cout << "\tNhan 1 de chon Bo.\n";
        cout << "\tNhan 2 de chon Cuu.\n";
        cout << "\tNhan 3 de chon De.\n";
        cout << "\tNhan 4 de tro lai MENU.\n";
        while (cin >> CatchKey && CatchKey != 1 && CatchKey != 2 && CatchKey != 3 && CatchKey != 4)
        {
            cout << "Vui lonng nhap dung thao tac: ";
        }
        switch (CatchKey)
        {
        case 1:
            int n;
            cout << "Nhap so luong bo: ";
            cin >> n;
            List[0].resize(0);
            for (int i = 0; i < n; i++) {
                List[0].push_back(new Cow);
            }
            break;
        case 2:
            int p;
            cout << "Nhap so luong cuu: ";
            cin >> p;
            List[1].resize(0);
            for (int i = 0; i < p; i++) {
                List[1].push_back(new Sheep);
            }
            break;
        case 3:
            int m;
            cout << "Nhap so luong de: ";
            cin >> m;
            List[2].resize(0);
            for (int i = 0; i < m; i++) {
                List[2].push_back(new Goat);
            }
            break;
        default:
            break;
        }
    } while (CatchKey != 4);
}

void Print(vector<vector<ConVat*>>& List) {
    cout << "-----Danh sach thong tinh cac con vat----\n";
    for (int i = 0; i < List.size(); i++) {
        for (int j = 0; j < List[i].size(); j++) {
            List[i][j]->Print();
            cout << endl;
        }
    }
    cout << "--------------------------\n";
}
void Say(vector<vector<ConVat*>>& List) {
    cout << "-----Tieng keu cac con vat----\n";
    for (int i = 0; i < List.size(); i++) {
        for (int j = 0; j < List[i].size(); j++) {
            List[i][j]->Say();
            cout << endl;
        }
    }
    cout << "--------------------------\n";
}
int main() {
    srand(time(NULL));
    vector<vector<ConVat*>> ListCattle;
    ListCattle.resize(3);
    int CatchKey;
    do {
        cout << "Manage Cattle: \n";
        cout << "\tNhap 1 de nhap cac loai con vat.\n";
        cout << "\tNhap 2 de xuat tat ca thong tin cua con vat.\n";
        cout << "\tNhap 3 de cac con vat keu.\n";
        cout << "\tNhap 4 de thoat.\n";
        while (cin >> CatchKey && CatchKey != 1 && CatchKey != 2 && CatchKey != 3 && CatchKey != 4)
        {
            cout << "Vui long nhap dung thao tac: ";
        }
        switch (CatchKey)
        {
        case 1:
            Input(ListCattle);
            system("cls");
            break;
        case 2:
            Print(ListCattle);
            break;
        case 3:
            Say(ListCattle);
            break;
        default:
            break;
        }
    } while (CatchKey != 4);
    for (int i = 0; i < ListCattle.size(); i++) {
        for (int j = 0; j < ListCattle[i].size(); j++) {
            delete ListCattle[i][j];
        }
    }
    cout << "Ket thuc chuong trinh!";
    return 0;
}