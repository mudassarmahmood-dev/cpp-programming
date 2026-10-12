#include <iostream>
// #include <cmath>
using namespace std;
int main()
{
    int x=23 , y=53;
    cout<< x <<" "<< y <<endl;
    // int temp = x;
    // x = y;
    // y = temp;

    x = x+y;
    y = x-y;
    x = x-y;
    cout<< x <<" "<< y <<endl;
}