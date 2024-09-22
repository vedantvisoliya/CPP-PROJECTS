#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
    string binaryCode;
    int tempNum = 0;
    int decimalNum = 0;
    cout << "Enter the binary code: ";
    cin >> binaryCode;
    int binaryLength = binaryCode.length();

    int i = binaryLength-1;
    while (i>=0){

        char tempChar = (binaryCode.at(i));
        int tempInt = tempChar - '0';
        decimalNum += (pow(2.0, tempNum) * tempInt);
        // cout << tempChar << endl;
        i--;
        tempNum++;
    }
    
    cout << decimalNum;
    return 0;
}