#include <iostream>
using namespace std;

int main() {
    int arr[4][4];
    int sum = 0;

    // 4x4 배열 입력 받기
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    // 첫 번째 행: 첫 번째 값과 두 번째 값
    sum += arr[0][0] + arr[0][1];

    // 두 번째 행: 첫 번째 값과 두 번째 값
    sum += arr[1][0] + arr[1][1];

    // 세 번째 행: 두 번째 값과 세 번째 값
    sum += arr[2][1] + arr[2][2];

    // 네 번째 행: 모든 값
    for (int j = 0; j < 4; j++) {
        sum += arr[3][j];
    }

    // 결과 출력
    cout << sum << endl;

    return 0;
}