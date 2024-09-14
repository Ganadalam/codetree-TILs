#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;  // 입력받을 정수

    const int MAX = 10;  // 출력할 최대 배수 개수
    int multiples[MAX];  // 배수 저장할 배열
    int count = 0;       // 5의 배수를 카운트할 변수
    int index = 0;       // 배열의 인덱스

    // 배수들 배열에 저장
    for (int i = 1; i <= MAX; ++i) {
        int multiple = num * i;
        multiples[index++] = multiple;

        // 5의 배수인지 확인
        if (multiple % 5 == 0) {
            count++;
        }

        // 5의 배수가 2번 출력 시 종료
        if (count == 2) {
            break;
        }
    }

    // 저장된 배수 출력
    for (int i = 0; i < index; ++i) {
        if (i > 0) {
            cout << " ";
        }
        cout << multiples[i];
    }
    cout << endl;

    return 0;
}