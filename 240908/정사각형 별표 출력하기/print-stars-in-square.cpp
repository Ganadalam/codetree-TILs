#include <iostream>
using namespace std;

int main() {
    int n;

    // 사용자로부터 입력받기
    cin >> n;

    // for문을 이용해 가로 세로 n x n 별 출력
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << "*";
        }
        cout << endl;  // 줄바꿈
    }

    return 0;
}