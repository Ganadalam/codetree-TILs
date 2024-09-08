#include <iostream>
using namespace std;

int main() {
    int n;
    int m;

    // 사용자로부터 입력받기
    cin >> n >> m;

    // for문을 이용해 가로 세로 n x m 별 출력
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cout << "* ";
        }
        cout << endl;  // 줄바꿈
    }

    return 0;
}