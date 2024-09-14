#include <iostream>
#include <vector>
#include <algorithm>  // std::reverse 사용을 위해
using namespace std;

int main() {
    int n;
    cin >> n;  // 정수 개수 입력

    vector<int> numbers(n);  // 정수를 저장할 벡터

    // 정수를 입력받기
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    // 짝수만 저장할 벡터
    vector<int> evens;

    // 짝수만 필터링
    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            evens.push_back(numbers[i]);
        }
    }

    // 짝수를 역순으로 정렬
    reverse(evens.begin(), evens.end());

    // 역순으로 정렬된 짝수를 출력
    for (size_t i = 0; i < evens.size(); i++) {
        cout << evens[i];
        if (i < evens.size() - 1) {
            cout << " ";  // 마지막 숫자 뒤에는 공백을 추가하지 않음
        }
    }
    cout << endl;  // 출력 후 줄 바꿈

    return 0;
}