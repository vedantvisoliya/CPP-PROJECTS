#include <iostream>
using namespace std;

//uisng recursion.
int fibonacci(int n){
    if(n<2){
        return 1;
    }
    return fibonacci(n-2) + fibonacci(n-1);
}
// 1 1 2 3 5 8 13 21 34 55

// using iteration
int fibonacci1(int n){

    int fibonacciSeries[n];
    int i = 0;
    while (i <= n)
    {
        if (i<=1){
            fibonacciSeries[i] = 1;
        }
        else if (i>=2){
            fibonacciSeries[i] = fibonacciSeries[i-1] + fibonacciSeries[i-2];
        }
        i++;
    }

    return fibonacciSeries[n];
}



int main(){
    // cout << "(RECURSION) the fibonacci value at position " << 5 << " is " << fibonacci(5);
    //run in 1.244 seconds

    // cout << "(ITERATION) the fibonacci value at position " << 5 << " is " << fibonacci1(5);
    //run in 1.499 seconds
}