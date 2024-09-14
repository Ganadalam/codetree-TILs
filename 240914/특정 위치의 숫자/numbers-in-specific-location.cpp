#include <iostream>
using namespace std;

int main() {
    int numbers[10];  // 10개의 정수를 저장할 배열

    // 10개의 정수 입력받기
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    // 세 번째, 다섯 번째, 열 번째 정수의 합 계산
    int sum = numbers[2] + numbers[4] + numbers[9];

    // 합계 출력
    cout << sum << endl;

    return 0;
}