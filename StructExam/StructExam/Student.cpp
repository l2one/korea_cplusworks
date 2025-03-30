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

    st.name = "김리원";
    st.grade = 3;
    st.address = "경기도 남양주시 오남읍";

    cout << "학생 이름: " << st.name << endl;
    cout << "학년: " << st.grade << endl;
    cout << "주소: " << st.address << endl;

    return 0;
}