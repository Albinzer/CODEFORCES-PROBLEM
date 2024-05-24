#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> weight;

    // Check if weight is even and greater than or equal to 4
    if (weight % 2 == 0 && weight >= 4) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
