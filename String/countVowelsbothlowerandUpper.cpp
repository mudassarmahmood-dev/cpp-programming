#include <iostream>
using namespace std;
int main()
{
    string x="Hey My name is Mudassar";
    int count=0;
    for(int i=0; i<x.length(); i++){
        if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u' || x[i]=='A' || x[i]=='E' || x[i]=='I' || x[i]=='O' || x[i]=='U'){
            count++;
        }
    }
    cout << "Number of vowels: " << count << endl;
}
 