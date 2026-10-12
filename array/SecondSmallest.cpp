#include <iostream>
using namespace std;
int main()
{
   int arr[] = {2,20,4,80};
   int n= sizeof(arr)/sizeof(arr[0]);
   int mx= INT_MAX;
   for (int i=0; i<n; i++){
    mx = min(mx,arr[i]);
   }
   int smx=INT_MAX;
   for (int i=0; i<n; i++){
    if(arr[i] !=mx){
        smx = min(smx,arr[i]);
    }
   }
   cout<<"First minimum:" <<mx<<endl;
   cout<<"Second minimum:"<<smx;

}
