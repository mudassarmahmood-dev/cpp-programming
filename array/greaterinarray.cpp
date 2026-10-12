#include <iostream>
using namespace std;
int main()
{
   int arr[] = {2,20,4,8};
   int n= sizeof(arr)/4;
   int mx= INT_MIN;
   for (int i=1; i<n; i++){
    // if(arr[i]>mx) mx=arr[i];
    mx = max(mx,arr[i]);
   }
   cout<<mx;
}
