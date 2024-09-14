#include <iostream>
using namespace std;

int main() {
    int arr[10]; // 배열 선언
    // 배열 원소 입력.
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // 3의 배수를 찾기 위한 루프
    for (int i = 1; i < 10; i++) { // 인덱스 1 ~ 시작. 0번째는 건너뛰기.
        if (arr[i] % 3 == 0) { // 3의 배수 확인
            cout << arr[i - 1] << endl; // 첫 번째 3의 배수 바로 앞의 원소 출력
            break; // 첫 번째 3의 배수를 찾았으므로 루프 종료
        }
    }

    return 0;
}