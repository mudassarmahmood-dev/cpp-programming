#include <iostream>
using namespace std;
int main()
{
    int arr [2][3];
    arr [0][0]= 2;
    arr [0][1]= 4;
    arr [0][2]= 6;
    arr [1][0]= 8;
    arr [1][1]= 10;
    arr [1][2]= 12;
    for(int j=0; j<3; j++){
        for(int i=0; i<2; i++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
