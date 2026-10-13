#include <iostream>
using namespace std;
int main()
{
    int arr [4][2]={{21,33},{45,55},{67,77},{89,99}};
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
