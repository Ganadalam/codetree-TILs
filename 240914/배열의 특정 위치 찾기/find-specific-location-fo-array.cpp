#include <iostream>
#include <iomanip>  // std::setprecision 사용을 위해
using namespace std;

int main() {
    int numbers[10];
    
    // 10개의 정수 입력받기
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    // 짝수 번째 값의 합 계산
    int sum_even_positions = numbers[1] + numbers[3] + numbers[5] + numbers[7] + numbers[9];

    // 3의 배수 번째 값의 평균 계산
    double sum_multiples_of_3 = numbers[2] + numbers[5] + numbers[8];
    double average_multiples_of_3 = sum_multiples_of_3 / 3;

    // 결과 출력
    cout << sum_even_positions << " " << fixed << setprecision(1) << average_multiples_of_3 << endl;

    return 0;
}