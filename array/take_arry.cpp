#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    // 1. Array banayein jiski size 'n' ho
    int arr[n];

    // 2. Loop chalayein squares store karne ke liye
    // Natural numbers 1 se start hote hain (1, 2, 3...)
    for (int i = 0; i < n; i++) {
        int number = i + 1; // Taaki pehla number 1 ho, doosra 2, etc.
        arr[i] = number * number; // Square store karein
    }

    // 3. Array ke elements ko screen par print karein
    cout << "Squares array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] <<endl;
    }
    cout << endl;

    return 0;
}
