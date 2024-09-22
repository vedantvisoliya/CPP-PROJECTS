#include <iostream>
using namespace std;

int main(){
    int num; // it is the table number.

    cout << "Enter the MULTIPLICATION TABLE number: ";
    cin >> num; // taking input from the user to display their required table.
    cout << "--------MULTIPLICATION TABLE OF " << num << " ----------" << endl;

    int i = 1; // variable created for the loop

    // DO-WHILE LOOP STATEMENT.
    cout << "DO-WHILE LOOP STATEMENT" << endl;
    do{
        cout << num << " X " << i << " = " << (num*i) << endl;
        i++;
    } while (i<=10);
    
    // FOR LOOP STATEMENT.
    cout << "FOR LOOP STATEMENT" << endl;
    for(int x = 1; x<=10; x++){
        cout << num << " X " << x << " = " << (num*x) << endl;
    }

    // WHILE LOOP STATEMENT.
    cout << "WHILE LOOP STATEMENT" << endl;
    int j = 1;
    while(j<=10){
        cout << num << " X " << j << " = " << (num*j) << endl;
        j++;
    }
    cout << "----------------  END  ---------------------" << endl;
}