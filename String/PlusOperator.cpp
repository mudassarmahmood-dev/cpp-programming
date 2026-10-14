#include <iostream>
using namespace std;
int main()
{
  string s= "Mudassar";
  cout<<s << " " << s.length() <<endl;
//   s = s + " Mahmood";
  s = "Mahmood " + s;
  cout<<s << " " << s.length() <<endl;

}
