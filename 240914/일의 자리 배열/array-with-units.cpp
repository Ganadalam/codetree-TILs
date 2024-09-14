#include <iostream>
using namespace std;

int main() {
    int first, second;
    int sequence[10];  // 10개의 항 저장할 배열

    // 첫째항과 둘째항 입력 받기
    cin >> first >> second;

    // 첫 번째 항과 두 번째 항을 배열에 설정
    sequence[0] = first;
    sequence[1] = second;

    // 나머지 항 계산
    for (int i = 2; i < 10; ++i) {
        sequence[i] = (sequence[i - 1] + sequence[i - 2]) % 10;  // 전전항과 전항의 합의 1의 자리
    }

    // 결과 출력
    for (int i = 0; i < 10; ++i) {
        cout << sequence[i] << " ";
    }
    cout << endl;

    return 0;
}