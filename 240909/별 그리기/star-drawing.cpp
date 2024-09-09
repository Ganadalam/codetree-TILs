#include <iostream>
using namespace std;

int main() {
    int n;

    // 사용자로부터 입력받기
    cin >> n;

    // 상단 삼각형 (증가하는 부분)
    for (int i = 1; i <= n; ++i) {
        // 공백 출력
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }

        // 별 출력
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << "*";
        }

        cout << endl;  // 줄바꿈
    }

    // 하단 삼각형 (감소하는 부분)
    for (int i = n - 1; i >= 1; --i) {
        // 공백 출력
        for (int j = 1; j <= n - i; ++j) {
            cout << " ";
        }

        // 별 출력
        for (int j = 1; j <= 2 * i - 1; ++j) {
            cout << "*";
        }

        cout << endl;  // 줄바꿈
    }

    return 0;
}