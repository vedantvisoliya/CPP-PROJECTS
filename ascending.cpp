#include <iostream>
using namespace std;

int main(){
    int numbers[] = {1123,1545,6,256,11,2,52,535,315,2432,532,5,42,236,5365625};
    int number_length = sizeof(numbers)/sizeof(0);
    // cout << number_length;

    for (int i = 0; i < number_length-1; i++){
        int j = i + 1;
        for (j; j < number_length; j++){
            if (numbers[i] > numbers[j]){
                int temp = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = temp;
            }
        }
    }

    for (int k = 0; k < number_length; k++){
        cout << numbers[k] << " ";
    }

    return 0;
}