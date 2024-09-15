#include <iostream>
#include <iomanip> // 소수점 조절을 위한 헤더
using namespace std;

int main() {
    // 2행 4열 배열 선언
    int arr[2][4];
    
    // 배열 입력 받기
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    // 가로 평균 구하기
    for (int i = 0; i < 2; i++) {
        double rowSum = 0;
        for (int j = 0; j < 4; j++) {
            rowSum += arr[i][j];
        }
        cout << fixed << setprecision(1) << rowSum / 4 << " "; // 가로 평균 출력
    }
    cout << endl;

    // 세로 평균 구하기
    for (int j = 0; j < 4; j++) {
        double colSum = 0;
        for (int i = 0; i < 2; i++) {
            colSum += arr[i][j];
        }
        cout << fixed << setprecision(1) << colSum / 2 << " "; // 세로 평균 출력
    }
    cout << endl;

    // 전체 평균 구하기
    double totalSum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            totalSum += arr[i][j];
        }
    }
    cout << fixed << setprecision(1) << totalSum / 8 << endl; // 전체 평균 출력

    return 0;
}