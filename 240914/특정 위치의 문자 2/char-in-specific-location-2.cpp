#include <iostream>
using namespace std;

int main() {
    char chars[10];  // 10개의 문자를 저장할 배열
    
    // 10개의 문자 입력받기
    for (int i = 0; i < 10; i++) {
        cin >> chars[i];
    }

    // 두 번째, 다섯 번째, 여덟 번째 문자를 차례로 출력
    cout << chars[1] << " " << chars[4] << " " << chars[7] << endl;

    return 0;
}