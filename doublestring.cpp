#include <iostream>
#include <string>
using namespace std;

int main() {
    double num = 123.456;
    
    // Convert double to string using to_string()
    string str = to_string(num);
    
    // Print results
    cout << "Original Double: " << num << endl;
    cout << "Converted String: " << str << endl;
    
    return 0;
}
