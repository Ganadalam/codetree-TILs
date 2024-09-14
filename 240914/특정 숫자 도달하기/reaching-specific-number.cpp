#include <iostream>
#include <iomanip>  // std::setprecision 사용을 위해
using namespace std;

int main() {
    int nums[10];  // 입력된 10개의 숫자를 저장할 배열
    int sum = 0;  // 합계
    int count = 0;  // 숫자의 개수

    // 입력 받기
    for (int i = 0; i < 10; i++) {
        cin >> nums[i];
        if (nums[i] >= 250) {
            break;  // 250 이상의 숫자가 나타나면 루프 종료
        }
        sum += nums[i];  // 합계 계산
        count++;  // 숫자의 개수 계산
    }

    // 250 이상의 숫자가 나타나지 않았거나 남은 숫자 처리
    if (count == 0) {
        // 250 이상의 숫자가 없어서 모든 숫자의 합계와 평균 계산
        for (int i = 0; i < 10; i++) {
            sum += nums[i];
        }
        count = 10;
    } else {
        // 250 이상의 숫자 이후의 숫자들을 처리
        for (int i = count; i < 10; i++) {
            // 250 이상의 숫자는 포함하지 않으므로 sum은 변하지 않음
        }
    }

    // 평균 계산 및 출력
    double average = static_cast<double>(sum) / count;  // 평균 계산
    cout << sum << " " << fixed << setprecision(1) << average << endl;  // 결과 출력

    return 0;
}