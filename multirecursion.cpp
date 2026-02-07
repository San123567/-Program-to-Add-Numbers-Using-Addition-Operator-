#include <iostream>
using namespace std;

// Recursive function
void tableRec(int num, int i) {
    
    // Base case
    if (i > 10) return; 
    cout << num << " x " << i << " = " 
                    << num * i << endl;
    
    // Recursive call
    tableRec(num, i + 1); 
}

int main() {
    int num = 3;
    tableRec(num, 1);
    return 0;
}
