#include <iostream>
using namespace std;

int main() {
    int choice;
    char cont = 'y';
    float total = 0;

    do {
        cout << "\n===== MENU NHA HANG =====\n";
        cout << "1. Pho Bo          - 40,000 VND\n";
        cout << "2. Bun Cha         - 35,000 VND\n";
        cout << "3. Com Tam         - 30,000 VND\n";
        cout << "4. Tra Da          - 5,000 VND\n";
        cout << "5. Ca Phe Sua Da   - 20,000 VND\n";
        cout << "=========================\n";
        cout << "Chon mon (1-5): ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Ban da chon: Pho Bo\n";
                total += 40000;
                break;
            case 2:
                cout << "Ban da chon: Bun Cha\n";
                total += 35000;
                break;
            case 3:
                cout << "Ban da chon: Com Tam\n";
                total += 30000;
                break;
            case 4:
                cout << "Ban da chon: Tra Da\n";
                total += 5000;
                break;
            case 5:
                cout << "Ban da chon: Ca Phe Sua Da\n";
                total += 20000;
                break;
            default:
                cout << "Lua chon khong hop le. Vui long thu lai.\n";
        }

        cout << "Ban co muon goi them mon? (y/n): ";
        cin >> cont;

    } while (cont == 'y' || cont == 'Y');

    cout << "\nTong hoa don cua ban la: " << total << " VND\n";
    cout << "Cam on ban da ghe tham nha hang!\n";

    return 0;
}
