#include <iostream>

using namespace std;

int main() {
    int A, B, C;

    cout << "masukkan bilang A: ";
    cin >> A;

    cout << "masukkan bilang B: ";
    cin >> B;

    cout << "masukkan bilang C: ";
    cin >> C;

    if (A > B)  {
        if (A > C)
            cout << "bilangan terbesar adalah: " << A << endl;
        else
            cout << "bilangan terbesar adalah: " << C << endl;
    } else {
        if (B > C) {
            cout << "bilangan terbesar adalah: " << B << endl;
        }
        else {
            cout << "bilangan terbesar adalah: " << C << endl;
    }
}
}
