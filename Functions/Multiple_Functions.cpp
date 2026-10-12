#include <iostream>
using namespace std;
void pak()
{
    cout << "I am Pakistani \n";
}
void usa()
{
    cout << "I am American \n";
    pak();
}

int main()
{
    cout << "You are in main \n";
    usa();
}