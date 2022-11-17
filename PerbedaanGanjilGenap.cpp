#include <iostream>

using namespace std;

int main(){
    
    int number;
    
    cout << "Enter your number: ";
    cin >> number;

    if(number % 2 == 0){
        cout << "You entered an even number: " << number << endl << endl;
    }
    else{
        cout << "You entered an odd number: " << number << endl << endl;
    }

    return 0;

}