#include <iostream>
using namespace std;

int main(void) {
    unsigned int a, b, c = 0, carries;
    for (cin >> a >> b; a && b; cin >> a >> b) {
        carries = 0;
        while (a || b) { // > 0
            c = ((a % 10 + b % 10 + c) >= 10) ? 1 : 0;
            if (c > 0) carries++;
            a /= 10; b /= 10;
        }
        if (carries) cout << carries;
        else         cout << "No";
        cout << " carry operation" << (carries > 0 ? "s." : ".") << endl;
    }
    return 0;
}
