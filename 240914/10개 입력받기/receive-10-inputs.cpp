#include <iostream>
#include <iomanip>  // std::setprecision 사용을 위해
using namespace std;

int main() {
    const int max_numbers = 10;  // 최대 입력 수
    int numbers[max_numbers];  // 정수를 저장할 배열
    int count = 0;  // 입력된 정수의 개수
    int sum = 0;  // 정수 합계

    // 정수를 입력받기
    for (int i = 0; i < max_numbers; i++) {
        int input;
        cin >> input;
        
        if (input == 0) {
            break;  // 0이 입력되면 루프 종료
        }

        numbers[count] = input;  // 배열에 입력값 저장
        sum += input;  // 합계 계산
        count++;  // 입력된 숫자의 개수 증가
    }

    // 평균 계산
    double average = static_cast<double>(sum) / count;

    // 합계와 평균 출력
    cout << sum << " " << fixed << setprecision(1) << average << endl;

    return 0;
}