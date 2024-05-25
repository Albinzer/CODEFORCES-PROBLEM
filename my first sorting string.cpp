#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    
    while (t--) {
        int x, y;
        cin >> x >> y; // Input x and y
        
        // Output the minimum and maximum of x and y
        cout << min(x, y) << " " << max(x, y) << endl;
    }
    
    return 0;
}

