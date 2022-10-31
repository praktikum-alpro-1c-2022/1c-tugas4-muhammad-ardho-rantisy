#include <iostream>

using namespace std;

int main(){
    
    int year;

    cout << "Enter year: ";
    cin >> year;

    if(year % 400 == 0){
        cout << "it's a Leap Year!" << endl << endl; 
    }
    else if(year % 100 == 0){
        cout << "it's not a Leap Year!" << endl << endl; 
    }
    else if(year % 4 == 0){
        cout << "it's a Leap Year!" << endl << endl; 
    }
    else{
        cout << "it's not a Leap Year!" << endl << endl; 
    }
    
    

    return 0;
}



// Leap year
/*
if year is divisible by 400 then is_leap_year
else if year is divisible by 100 then not_leap_year
else if year is divisible by 4 then is_leap_year
else not_leap_year
*/