#include <iostream>
#include <conio.h>
using namespace std;
template <class T>
class stack{
    private:
    T a,b;
    public:
        void intputA(T x)
        {
            a=x;
        }
        void intputB(T y)
        {
            b=y;
        }
        void display()
        {
            cout<<a<<" "<<b;
        }
};
int main()
{
    stack <string> obj;
    obj.intputA("Mudassar");
    obj.intputB("20");
    obj.display();
}
