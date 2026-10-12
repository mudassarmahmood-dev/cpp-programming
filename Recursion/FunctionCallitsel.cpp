#include <iostream>
using namespace std;
void greet()
{
    cout << "Hello" << endl;
    greet();
}
int main()
{
    greet();
}
