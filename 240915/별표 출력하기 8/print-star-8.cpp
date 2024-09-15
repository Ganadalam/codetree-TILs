#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // 홀수번째 줄
        if (i % 2 == 1) {
            cout << "*" << endl;
        }
        // 짝수번째 줄
        else {
            for (int j = 1; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }

    return 0;
}