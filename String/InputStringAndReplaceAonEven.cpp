#include <iostream>
using namespace std;
int main()
{
    string x="Hey My name is Mudassar";
    for(int i=0; i<x.length(); i++){
        // if(i%2==0 && x[i]=='a'){
        if(i%2==0 ){

            x[i]='A';
        }
    }
    cout << x << endl;
}
 