#include <iostream>
#include <string>
using namespace std;

int main(){
    string temp;
    string userInput;
    cout << "Enter a string: ";
    cin >> userInput;

    int n = (userInput.length()-1);
    for (int i = n; i >= 0; i--)
    {
        temp = temp + userInput.at(n);
        --n;
    }
    
    if (userInput == temp)
    {
        cout << "palindrome";
    }
    else{
        cout << "not palindrome";
    }

    return 0;
}