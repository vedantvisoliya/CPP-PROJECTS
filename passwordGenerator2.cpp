#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

const string alphaNum = "1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz!@#$%^&*_";
string password;
int strlength = alphaNum.length();

int main(){
    srand((unsigned) time(NULL));
    int i = 0;
    while (i<9){
        int randNum = rand() % strlength;
        password = password + alphaNum.at(randNum);
        i++;
    }
    cout << "Your new password is: ";
    cout << password;

    return 0;
}