#include <iostream>
using namespace std;

int main() {
    int n;

    // 사용자로부터 입력받기
    cin >> n;

    // 첫 번째 네모 출력
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    // 줄바꿈 (한 줄 띄우기)
    cout << endl;

    // 두 번째 네모 출력
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}