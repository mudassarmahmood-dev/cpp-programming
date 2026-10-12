#include <iostream>
using namespace std;
int main()
{
   int a[] = {1,2,3,2,1};
   int n= sizeof(a)/sizeof(a[0]);
   for (int i=0; i<n; i++){
    cout<< a[i]<<" ";
   }
   int i=0;
   int j=n-1;
   while(i<j){
    if (a[i] != a[j]) {
            break;
    }
    i++;
    j--;
   }
   cout<<endl;
   if (i >= j) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
