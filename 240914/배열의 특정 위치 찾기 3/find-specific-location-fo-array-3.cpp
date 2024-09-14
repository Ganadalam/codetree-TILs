#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int num;
    
    // 정수를 입력받아 벡터에 저장
    while (cin >> num) {
        numbers.push_back(num);
        // 입력이 0이면 종료
        if (num == 0) {
            break;
        }
    }

    // 0의 위치 찾기
    int zeroIndex = -1;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == 0) {
            zeroIndex = i;
            break;
        }
    }

    // 0의 앞의 3개 정수의 합 계산
    if (zeroIndex >= 3) {
        int sum = numbers[zeroIndex - 1] + numbers[zeroIndex - 2] + numbers[zeroIndex - 3];
        cout << sum << endl;
    } else {
        // 0 앞에 3개 정수가 부족할 경우
        cout << "Not enough numbers before the zero." << endl;
    }

    return 0;
}