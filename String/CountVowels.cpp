#include <iostream>
using namespace std;
int main()
{
    string x="mudassar";
    int count=0;
    for(int i=0; i<x.length(); i++){
        if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u'){
            count++;
        }
    }
    cout << "Number of vowels: " << count << endl;
}
 