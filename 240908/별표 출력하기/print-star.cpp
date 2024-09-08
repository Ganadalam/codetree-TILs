#include <iostream>
using namespace std;

int main() {
    int n;

    // 사용자로부터 입력받기
    cin >> n;

    // 상단 삼각형
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    // 하단 삼각형
    for (int i = n - 1; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}