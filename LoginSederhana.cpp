#include <iostream>

using namespace std;

int main(){

    string username, password;

    cout << "Please enter your username: ";
    cin >> username;

    cout << "Please enter your password: ";
    cin >> password;

    if(username != "Admin" && password != "4dm1nXXX"){
        cout << "Username and password is wrong!! This unauthorized use of login credential will be reported to law enforcement agency!!\n\n";
    }
    else{
        if(username == "Admin" && password == "4dm1nXXX"){
            cout << "Username and password is authenticated! Welcome and enjoy your stay!\n\n";
        }
        else if(username == "Admin"){
            cout << "Username is correct but the password is wrong!! are you forgetting something??\n\n";
        }
        else if(password == "4dm1nXXX"){
            cout << "Password is correct but the username is wrong!! are you forgetting something??\n\n";
        }
    }

    return 0;
}






/*
    if(username == "Admin" && password == "4dm1nXXX"){
        cout << "Username and password is authenticated! Welcome and enjoy your stay!\n\n";
        
        if(username == "Admin" && password != "4dm1nXXX"){
            cout << "Username is authenticated but the password is not authenticated! are you get it wrong?\n\n";
        }
    }
*/

/*
    if(username != "Admin" && password != "4dm1nXXX"){
        cout << "Username and password is wrong!! This unauthorized use of login credential will be reported to law enforcement agency!!\n\n";
    }
    else{
        if()
    }
*/