#include <iostream>
#include <string>
using namespace std;

int power(int number, int numberRaiseToPower){
    
    int resultNumber = 1;

    for (int i = 1; i <= numberRaiseToPower; i++)
    {
        resultNumber *= number;
    }

    return resultNumber;

}

string getString(char x)
{

    string s(1, x);
 
    return s;   
}

bool armstrongChecker(int userNumber){

    int result = 0;
    string userNumberIntoString = to_string(userNumber);
    int userNumberLength = userNumberIntoString.length();

    for (int i = 0; i < userNumberLength; i++)
    {
        char tempchar = userNumberIntoString.at(i);
        string tempString = getString(tempchar);
        int tempNumber = stoi(tempString);

        result += power(tempNumber,userNumberLength);
    }

    if(userNumber == result){
        return 0;
    }
    else{
        return 1;
    }

}


int main(){

    int inputNumber;
    cout << "Enter a number :";
    cin >> inputNumber;

    if(armstrongChecker(inputNumber) == 0){
        cout << inputNumber << " is a Armstrong Number.";
    }
    else{
        cout << inputNumber << " is not a Armstrong Number.";
    }

    return 0;
}