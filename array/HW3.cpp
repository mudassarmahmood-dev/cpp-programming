#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,1,2,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sumeven = 0;
    int sumodd = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sumeven += arr[i];   // Even index elements (1 + 5 + 4 = 10)
        } else {
            sumodd += arr[i];    // Odd index elements (3 + 2 = 5)
        }
    }

    cout << sumeven << endl;           // Output: 10
    cout << sumodd << endl;            // Output: 5
    cout << sumeven-sumodd << endl;  // Output: -5

    return 0;
}