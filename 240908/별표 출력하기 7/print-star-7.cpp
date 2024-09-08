#include <iostream>
using namespace std;

int main() {
    int n;

    // 사용자로부터 입력받기
    cin >> n;

    // 탑 형태로 별 출력
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}