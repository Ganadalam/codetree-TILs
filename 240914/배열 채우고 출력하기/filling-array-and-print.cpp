#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);  // 한 줄 전체 입력 받기

    // 입력 문자열의 끝에서부터 시작하여 거꾸로 출력
    for (int i = input.length() - 1; i >= 0; i--) {
        if (input[i] != ' ') {  // 공백을 제외하고 출력
            cout << input[i];
        }
    }
    cout << endl;  // 출력 후 줄 바꿈

    return 0;
}