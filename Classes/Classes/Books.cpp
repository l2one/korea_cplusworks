#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    int number;
    string title;
    string author;

public:
    // 기본 생성자
    Book() : number(0), title(""), author("") {}

    // 매개변수를 받는 생성자
    Book(int num, string tit, string aut) : number(num), title(tit), author(aut) {}

    // 책 번호를 설정하는 함수
    void setNumber(int num) {
        number = num;
    }

    // 책 번호를 가져오는 함수
    int getNumber() {
        return number;
    }

    // 책 제목을 설정하는 함수
    void setTitle(string t) {
        title = t;
    }

    // 책 제목을 가져오는 함수
    string getTitle() {
        return title;
    }

    // 책 저자를 설정하는 함수
    void setAuthor(string aut) {
        author = aut;
    }

    // 책 저자를 가져오는 함수
    string getAuthor() {
        return author;
    }
};

int main() {
    // 책 3권 생성
    Book book[3] = {
        Book(100, "채식주의자", "한강"),
        Book(101, "C++ 완전정복", "조규남"),
        Book(102, "모두의 C언어", "이형우"),
    };

    // 책 정보 출력
    for (int i = 0; i < 3; i++) {
        cout << "책 번호: " << book[i].getNumber() << endl;
        cout << "책 제목: " << book[i].getTitle() << endl;
        cout << "책 저자: " << book[i].getAuthor() << endl;
        cout << "==============================\n";
    }

    return 0;
}
