#include <iostream>
#include <iomanip>  // std::fixed, std::setprecision 사용을 위해
using namespace std;

int main() {
    int num_students;
    cin >> num_students;  // 학생 수 입력

    int pass_count = 0;  // 통과한 학생 수

    // 학생의 점수를 처리
    for (int i = 0; i < num_students; i++) {
        int score1, score2, score3, score4;
        cin >> score1 >> score2 >> score3 >> score4;  // 4과목 점수 입력
        
        // 평균 점수 계산
        double average = (score1 + score2 + score3 + score4) / 4.0;

        // 통과 여부 판단
        if (average >= 60) {
            cout << "pass" << endl;
            pass_count++;  // 통과한 학생 수 증가
        } else {
            cout << "fail" << endl;
        }
    }

    // 통과한 학생 수 출력
    cout << pass_count << endl;

    return 0;
}