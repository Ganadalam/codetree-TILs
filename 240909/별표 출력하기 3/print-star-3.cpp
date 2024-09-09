#include <iostream>
using namespace std;

int main() {
    int n;

    // 사용자로부터 입력받기
    cin >> n;

    // 별 출력
    for (int i = 0; i < n; ++i) {
        // 공백 출력
        for (int j = 0; j < i; ++j) {
            cout << "  ";
        }

        // 별 출력
        for (int j = 0; j < 2 * (n - i) - 1; ++j) {
            cout << "* ";
        }

        cout << endl;  // 줄바꿈
    }

    return 0;
}