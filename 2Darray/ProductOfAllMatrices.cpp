#include <iostream>
using namespace std;
int main()
{
    int arr [4][2]={{1,2},{3,4},{5,6},{7,8}};
    int product=1;
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            product*= arr[i][j];
            }
        cout<<endl;
    }
    cout<<"The product of all numbers in the 2D array is: "<<product<<endl;
}
