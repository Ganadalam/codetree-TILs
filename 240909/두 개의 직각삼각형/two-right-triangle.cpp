#include <iostream>
using namespace std;

int main() {
    int n;

    // 사용자로부터 입력받기
    cin >> n;

    // 별과 공백을 포함한 출력
    for (int i = 0; i < n; ++i) {
        // 왼쪽 별 출력
        for (int j = 0; j < n - i; ++j) {
            cout << "*";
        }
        
        // 가운데 공백 출력
        for (int j = 0; j < 2 * i; ++j) {
            cout << " ";
        }

        // 오른쪽 별 출력
        for (int j = 0; j < n - i; ++j) {
            cout << "*";
        }

        cout << endl;  // 줄바꿈
    }

    return 0;
}