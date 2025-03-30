#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int number;
    string title;
    string author;

public:
    // �⺻ ������
    Book() : number(0), title(""), author("") {}

    // �Ű������� �޴� ������
    Book(int num, string tit, string aut) : number(num), title(tit), author(aut) {}

    // å ��ȣ�� �����ϴ� �Լ�
    void setNumber(int num) {
        number = num;
    }

    // å ��ȣ�� �������� �Լ�
    int getNumber() {
        return number;
    }

    // å ������ �����ϴ� �Լ�
    void setTitle(string t) {
        title = t;
    }

    // å ������ �������� �Լ�
    string getTitle() {
        return title;
    }

    // å ���ڸ� �����ϴ� �Լ�
    void setAuthor(string aut) {
        author = aut;
    }

    // å ���ڸ� �������� �Լ�
    string getAuthor() {
        return author;
    }
};

int main() {
    // å 3�� ����
    Book book[3] = {
        Book(100, "ä��������", "�Ѱ�"),
        Book(101, "C++ ��������", "���Գ�"),
        Book(102, "����� C���", "������"),
    };

    // å ���� ���
    for (int i = 0; i < 3; i++) {
        cout << "å ��ȣ: " << book[i].getNumber() << endl;
        cout << "å ����: " << book[i].getTitle() << endl;
        cout << "å ����: " << book[i].getAuthor() << endl;
        cout << "==============================\n";
    }

    return 0;
}
