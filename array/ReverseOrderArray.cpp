#include <iostream>
using namespace std;
int main()
{
   int a[] = {2,20,4,8};
   int n= sizeof(a)/sizeof(a[0]);
   int b[n];
   for(int i=0; i<n; i++){
    int j=n-1-i;
    b[i] = a[j];
    cout<< b[i]<< " ";
   }

}
