#include <iostream>
#include <string>
using namespace std;

int main() {

    for (int n = 1; n < 10; n++) {
        cout << n << " ";
    }

    // 1 ~ 10���� �հ� ���
    int sum = 0;
    for (int n = 1; n <= 10; n++) {
        sum += n;
        cout << n << " sum=" << sum << endl;
    }

    cout << endl;
    cout << "�հ�: " << sum << endl;



    return 0;
}
