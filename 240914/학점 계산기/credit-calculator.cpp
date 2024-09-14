#include <iostream>
#include <iomanip>  // std::setprecision 사용을 위해
#include <vector>   // std::vector 사용을 위해
using namespace std;

int main() {
    int n;
    cin >> n;  // 과목 수 입력

    vector<double> grades(n);  // 학점 저장할 벡터
    double sum = 0.0;  // 학점 합계

    // 학점 입력받기
    for (int i = 0; i < n; i++) {
        cin >> grades[i];
        sum += grades[i];  // 합계 계산
    }

    // 평균 계산
    double average = sum / n;

    // 평균= 소수 첫째 자리까지 반올림
    cout << fixed << setprecision(1) << average << endl;

    // 등급 판별
    if (average >= 4.0) {
        cout << "Perfect" << endl;
    } else if (average >= 3.0) {
        cout << "Good" << endl;
    } else {
        cout << "Poor" << endl;
    }

    return 0;
}