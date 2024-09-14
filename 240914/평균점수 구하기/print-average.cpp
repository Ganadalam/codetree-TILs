#include <iostream>
#include <iomanip>  // std::setprecision 사용을 위해
using namespace std;

int main() {
    const int num_students = 8;  // 학생 수
    double scores[num_students];  // 점수를 저장할 배열
    double sum = 0.0;  // 점수의 합계

    // 점수 입력받기
    for (int i = 0; i < num_students; i++) {
        cin >> scores[i];
        sum += scores[i];  // 합계 계산
    }

    // 평균 계산
    double average = sum / num_students;

    // 평균을 소수 첫째 자리까지 출력
    cout << fixed << setprecision(1) << average << endl;

    return 0;
}