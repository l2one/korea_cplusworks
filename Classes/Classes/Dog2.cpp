//#include <iostream>
//#include <string>
//using namespace std;
//
//class Dog {
//public:
//    string type;
//    int age;
//
//    // 기본 생성자
//    Dog() {
//        type = "강아지";
//        age = 1;
//        cout << "생성합니다.\n";
//    }
//
//    // 매개변수를 받는 생성자
//    Dog(string t, int a) {
//        type = t;
//        age = a;
//    }
//
//    void bark() {
//        cout << "멍멍~\n";
//    }
//
//    void dogInfo() {
//        cout << "강아지 종류: " << type << endl;
//        cout << "강아지 나이: " << age << "세" << endl;
//    }
//};
//
//int main() {
//    Dog dog[3] = {
//        Dog("푸들", 3),
//        Dog("진돗개", 4),
//        Dog("불독", 2)
//    };
//
//    // dog[1]의 정보를 출력
//    dog[1].dogInfo();
//
//
//    for (int i = 0; i < 3; i++) {
//        dog[i].dogInfo();
//        dog[i].bark();
//        cout << "============================\n";
//    }
//
//
//
//    return 0;
//}
