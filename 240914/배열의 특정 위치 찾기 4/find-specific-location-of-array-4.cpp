#include <iostream>
using namespace std;

int main() {
    const int max_numbers = 10; // 최대 입력 수
    int count = 0; // 2의 배수 개수
    int sum = 0; // 2의 배수 합계

    // 정수 입력받기
    for ( int i = 0; i < max_numbers; i++ ) {
        int input;
        cin >> input;

        if (input == 0)  {
            break; // 0 입력 시 loop 종료
        }

        if ( input % 2 == 0) {
            count++; // 2의 배수 개수 증가
            sum += input; // 2의 배수 합계 계산
        }
    }

    // 결과 출력
    cout << count << " " << sum << endl;
    
     return 0;
}