#include <iostream>
using namespace std;

int main() {
    int n;

    // 사용자로부터 입력받기
    cin >> n;

    // 별을 출력하는 반복문
    for (int i = 0; i < n; ++i) {
        int stars = (n - i) * (n - i);  // 각 줄에 출력할 별의 개수 계산
        for (int j = 0; j < stars; ++j) {
            cout << "*";
            if ((j + 1) % (n - i) == 0)  // n - i 개수만큼 별을 출력한 후 띄우기
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}