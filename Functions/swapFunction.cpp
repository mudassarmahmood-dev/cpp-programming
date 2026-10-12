#include <iostream>
// #include <cmath>
using namespace std;
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int x=23 , y=53;
    cout<< x <<" "<< y <<endl;
    // int temp = x;
    // x = y;
    // y = temp;

    swap(x, y);
    cout<< x <<" "<< y <<endl;
}