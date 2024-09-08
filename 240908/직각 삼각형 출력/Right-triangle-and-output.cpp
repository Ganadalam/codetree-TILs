#include <iostream>
using namespace std;

int main() {
    int n;

    // 사용자로부터 입력받기
    cin >> n;

    // 왼쪽에 붙은 홀수 별 찍기 탑 형태로 출력
    for (int i = 1; i <= n; ++i) {
        int stars = 2 * i - 1;  // 홀수 개의 별 계산

        // 별 출력
        for (int j = 1; j <= stars; ++j) {
            cout << "*";
        }

        // 줄바꿈
        cout << endl;
    }

    return 0;
}