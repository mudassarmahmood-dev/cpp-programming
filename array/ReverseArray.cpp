#include <iostream>
using namespace std;
int main()
{
   int a[] = {2,20,4,8};
   int n= sizeof(a)/sizeof(a[0]);
   for (int i=0; i<n; i++){
    cout<< a[i]<<" ";
   }
   int i=0;
   int j=n-1;
   while(i<j){
    swap(a[i],a[j]);
    i++;
    j--;
   }
   cout<<endl;
   for (int i=0; i<n; i++){
    cout<< a[i]<<" ";
   }
}
