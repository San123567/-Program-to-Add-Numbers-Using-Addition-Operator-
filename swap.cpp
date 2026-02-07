#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    int temp = a; // Store value of 'a' in temp
    a = b;        // Assign 'b' to 'a'
    b = temp;     // Assign temp (old 'a') to 'b'

    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}
