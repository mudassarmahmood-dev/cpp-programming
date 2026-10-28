#include <iostream>
#include <conio.h>
using namespace std;
void min(int *b){
    cout<< "Address of b: " << --b << endl;
}
int main()
{
   int a = 10;
   min(&a);
}
