#include <bits/stdc++.h>

using namespace std;

int main() {
    double a, b;
    cin >> a >> b;
    double media = (a + b) / 2;
    if (media >= 7) {
        cout << "Aprovado" << endl;
    } else if (media <= 6.9) {
        cout << "Recuperacao" << endl;
    } else if (media < 4) {
        cout << "Reprovado" << endl;
    }
}

// ainda vou terminar