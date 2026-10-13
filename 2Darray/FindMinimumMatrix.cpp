#include <iostream>
using namespace std;
int main()
{
    int arr [4][2]={{21,33},{77,89},{33,44},{55,66}};
    int mn= INT_MAX;
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            mn= min(mn,arr[i][j]);
            
        }
        cout<<endl;
    }
    cout<<"The min number in the 2D array is: "<<mn<<endl;
}
