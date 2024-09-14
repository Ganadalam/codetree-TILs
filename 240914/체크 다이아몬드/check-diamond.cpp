#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "";
    cin >> n;

    // 위쪽 부분
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";  // 공백 출력
        }
        for (int j = 1; j <= i; j++) {
            cout << "* "; // 별 출력
        }
        cout << endl;
    }

    // 아래쪽 부분
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";  // 공백 출력
        }
        for (int j = 1; j <= i; j++) {
            cout << "* "; // 별 출력
        }
        cout << endl;
    }

    return 0;
}