#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;  // Base case: return 0 if n=0, return 1 if n=1
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive call
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";  // Call recursive function
    }

    return 0;
}
