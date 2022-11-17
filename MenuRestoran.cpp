#include <iostream>

using namespace std;

int main(){
    
    int choice;

    cout << "       Menu Restaurant McYahudi            " << endl;
    cout << "===========================================" << endl;
    cout << "1. Nazi Goreng Informatika     Rp. 5.000" << endl;
    cout << "2. Nazi Soto Ayam Internet     Rp. 7.000" << endl;
    cout << "3. Goda-Goda Diskret           Rp. 4.500" << endl;
    cout << "4. Bubur Ayam LAN              Rp. 4.000" << endl;
    cout << "===========================================" << endl << endl;

    cout << "\n\nWhat menu do you want to choose?\n";
    cout << "Menu: ";
    cin >> choice;
    

    switch(choice)
    {
        case 1:
            cout << "You have choosen the 1. Nazi Goreng Informatika Rp. 5.000\n\n";
        break;
        case 2:
            cout << "You have choosen the 2. Nazi Soto Ayam Internet Rp. 7.000\n\n";
        break;
        case 3:
            cout << "You have choosen the 3. Goda-Goda Diskret Rp. 4.500\n\n";
        break;
        case 4:
            cout << "You have choosen the 4. Bubur Ayam LAN Rp. 4.000\n\n";
        break;

        default:
            cout << "Menu is not available";
    }
    
    return 0;

    

}