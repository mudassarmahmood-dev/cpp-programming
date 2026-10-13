#include <iostream>
using namespace std;
int main()
{
    string x="Mudassar";
    for(int i=0; i<x.length(); i++){
        if(x[i]=='a' || x[i]=='e' || x[i]=='i' || x[i]=='o' || x[i]=='u'){
            cout<< x[i]<<" is a vowel"<<endl;
        }
        else{
            cout<< x[i]<<" is not a vowel"<<endl;
        }
    }
}
 