#include <iostream>
using namespace std;

int main() {
    int numbers[10];  // 10개의 정수를 저장할 배열
    
    // 10개의 정수를 입력받기
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    int sum_odd_positions = 0;  // 홀수 번째 정수의 합
    int sum_even_positions = 0; // 짝수 번째 정수의 합

    // 홀수 번째와 짝수 번째 정수의 합을 계산
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            // 0, 2, 4, 6, 8 => 홀수 번째 (1-based)
            sum_odd_positions += numbers[i];
        } else {
            // 1, 3, 5, 7, 9 => 짝수 번째 (1-based)
            sum_even_positions += numbers[i];
        }
    }

    // 두 합의 차를 계산
    int difference = abs(sum_even_positions - sum_odd_positions);

    // 결과 출력
    cout << difference << endl;

    return 0;
}