#include <iostream>

using namespace std;

int main(){
    
    int code, amount, price;
    char size;
    float total;
    string brand;

    cout << "==  Kode Susu  ==  Nama Produk  ==     Ukuran    ==     Harga     ==" << endl;
    cout << "|| 1           || Dancow        ||  (B) Besar    || Rp. 10.000    ||" << endl;
    cout << "||             ||               ||  (S) Sedang   || Rp. 4.500     ||" << endl;
    cout << "||             ||               ||  (K) Kecil    || Rp. 2.100     ||" << endl;
    cout << endl;
    cout << "|| 2           || Indomilik     ||  (B) Besar    || Rp. 8.500     ||" << endl;
    cout << "||             ||               ||  (S) Sedang   || Rp. 4.000     ||" << endl;
    cout << "||             ||               ||  (K) Kecil    || Rp. 2.025     ||" << endl;
    cout << endl;
    cout << "|| 3           || Sustacal      ||  (B) Besar    || Rp. 17.000    ||" << endl;
    cout << "||             ||               ||  (S) Sedang   || Rp. 14.500    ||" << endl;
    cout << "||             ||               ||  (K) Kecil    || Rp. 8.300     ||" << endl << endl;

    cout << "Please enter your desired choice: ";
    cin >> code;
    cout << "Please enter your desired size: ";
    cin >> size;
    cout << "Please enter your desired amount: ";
    cin >> amount;


    switch(code)
    {
        case 1:
            brand = "Dancow";
            cout << "\nYou have selected \"Dancow\" milk \n\n";
            if(size == 'B' || size == 'b'){
                price = 10000;
            }
            else if(size == 'S' || size == 's'){
                price =  4500;
            }
            else if(size == 'K' || size == 'k'){
                price = 2100;
            }
            else{
                cout << "You have entered a wrong number!";
            }
        break;

        case 2:
            brand = "Indomilk";
            cout << "\nYou have selected \"Indomilk\" milk \n\n";
            if(size == 'B' || size == 'b'){
                price = 8500;
            }
            else if(size == 'S' || size == 's'){
                price = 4000;
            }
            else if(size == 'K' || size == 'k'){
                price = 2025;
            }
            else{
                cout << "You have entered a wrong number!";
            }
        break;

        case 3:
            brand = "Sustacal";
            cout << "\nYou have selected \"Sustacal\" milk \n\n";
            if(size == 'B' || size == 'b'){
                price = 17000;
            }
            else if(size == 'S' || size == 's'){
                price = 14500;
            }
            else if(size == 'K' || size == 'k'){
                price = 8300;
            }
            else{
                cout << "You have entered a wrong number!";
            }
        break;

    }

    cout << " =====================================================" << endl;
	cout << " ====================== RECEIPT ======================" << endl;
	cout << endl;
	cout << ""<< brand << endl;
	cout << " Harga Susu : Rp. " << price << ",-" << endl;
	cout << " Jumlah Pembelian : "<< amount << endl;
	cout << " Jumlah Total Pembayaran : Rp. "<< price*amount << ",-" << endl;
	cout << endl;
	cout << " =====================================================" << endl;
	cout << " =====================  THANK YOU  ===================" << endl << endl;

    return 0;
}





/*

code reference:
Receipt = https://github.com/EmilMaulana/1c-tugas4-emil-maulana/blob/main/susuABC.cpp
Menu    = https://github.com/ghaidaputriy/1c-tugas4-ghaida-putri-yunisa/blob/main/Ghaida%20Putri%20Yunisa%20_no5.cpp

Thanks for your help!

*/

