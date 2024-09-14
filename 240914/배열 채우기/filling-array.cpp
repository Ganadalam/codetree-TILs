#include <iostream>
#include <vector>  // std::vector 사용을 위해
using namespace std;

int main() {
    vector<int> numbers;  // 정수를 저장할 벡터
    int input;

    // 정수를 입력받기
    while (cin >> input) {
        if (input == 0) {
            break;  // 0이 입력되면 종료
        }
        numbers.push_back(input);  // 벡터에 정수 추가
    }

    // 입력된 정수를 역순으로 출력
    for (int i = numbers.size() - 1; i >= 0; i--) {
        cout << numbers[i];
        if (i > 0) {
            cout << " ";  // 마지막 숫자 뒤에는 공백을 추가하지 않음
        }
    }
    cout << endl;  // 출력 후 줄 바꿈

    return 0;
}