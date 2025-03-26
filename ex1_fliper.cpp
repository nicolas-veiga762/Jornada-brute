#include <bits/stdc++.h>

using namespace std;

int main() {
    int p = 1;
    int r = 0;

    cin >> p >> r;

    if (p == 0) {
        cout << "C" << endl;
    } else if (p == 1 && r == 1) {
        cout << "A" << endl;
    } else if (p == 1 && r == 0) {
        cout << "B" << endl;
    }
}