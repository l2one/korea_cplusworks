#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int grade;
    string address;
};

int main() {
    Student st;

    st.name = "�踮��";
    st.grade = 3;
    st.address = "��⵵ �����ֽ� ������";

    cout << "�л� �̸�: " << st.name << endl;
    cout << "�г�: " << st.grade << endl;
    cout << "�ּ�: " << st.address << endl;

    return 0;
}