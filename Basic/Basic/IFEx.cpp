#include <iostream>
using namespace std;

int main() {

    // 나이가 15세 이상이면 "관람가" 판정
    int age;
    cout << "나이를 입력하세요: ";
    cin >> age;

    if (age >= 15) {
        cout << "관람가입니다.\n";
    }
    else {
        cout << "관람불가입니다.\n";
    }

    cout << "나이는 " << age << "세 입니다.\n";

    return 0;
}
