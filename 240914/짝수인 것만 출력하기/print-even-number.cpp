#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;  // 원소 개수 입력

    vector<int> elements(n);  // 원소를 저장할 벡터
    vector<int> evenNumbers;  // 짝수를 저장할 벡터

    // 원소 입력 받기
    for (int i = 0; i < n; ++i) {
        cin >> elements[i];
    }

    // 짝수인 값을 필터링하여 저장
    for (int i = 0; i < n; ++i) {
        if (elements[i] % 2 == 0) {
            evenNumbers.push_back(elements[i]);
        }
    }

    // 짝수 값 출력
    for (size_t i = 0; i < evenNumbers.size(); ++i) {
        if (i > 0) {
            cout << " ";
        }
        cout << evenNumbers[i];
    }
    cout << endl;

    return 0;
}