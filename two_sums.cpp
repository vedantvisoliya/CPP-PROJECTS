#include <iostream>
using namespace std;

int main(){
    int nums[] = {1,4,2,3,5};
    int nums_length = sizeof(nums) / sizeof(nums[0]);
    // cout << nums_length;
    int sum = 9;

    for (int i = 0; i < (nums_length-1); i++){
        int j = i + 1;
        for (j; j < nums_length; j++){
            if ((nums[i]+nums[j]) == sum){
                cout << "[" << i << "," << j <<"]";
                break;
            }
        }
    }
    return 0;
}