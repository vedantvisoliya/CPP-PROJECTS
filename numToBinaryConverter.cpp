#include <iostream>
#include <string>
using namespace std;

void binary(int num){
    string binary;
    while (num > 0){
        // int bin_cache = num/2;
        int bin_cache = num%2;
        string bin_cache_output;
        bin_cache_output = to_string(bin_cache);
        binary = binary + bin_cache_output;
        num /= 2;
    }
    int bin_size = binary.length();
    for (int i = bin_size-1; i>=0; i--)
    {
       cout <<  binary.at(i);
    }    
}

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    binary(number);

    return 0;
}