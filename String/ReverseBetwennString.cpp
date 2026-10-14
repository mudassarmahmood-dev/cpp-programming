#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
string s= "abcdefgh";
int n = s.length();
reverse(s.begin()+2, s.begin() + 5);
cout<<s <<endl;
}
