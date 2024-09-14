#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // 원소의 개수 입력

    int arr[n]; // 입력 받을 배열 선언

    // 배열에 원소 입력
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 각 원소의 제곱을 출력
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << " "; // 첫 번째 원소가 아닌 경우 공백 출력
        cout << arr[i] * arr[i]; // 제곱 계산 및 출력
    }
    cout << endl; // 마지막에 줄 바꿈

    return 0;
}