#include <iostream>
using namespace std;
int main()
{
   int arr[] = {1,2,3,4,5,6,7,8,9,10};
   int n= sizeof(arr)/sizeof(arr[0]);
   int x=4;
   int count =0;
   for(int i=0; i<n; i++){
     if(arr[i]>x){
       count++;
     }
   }
   cout<<"Number of elements greater than "<<x<<": "<<count<<endl;
   return 0;
 }

