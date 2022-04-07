#include <iostream>
#include <string>
using namespace std;
int main()
{
    //변수
    /*
        1) 이름 : testNum   2) 크기 : 4Byte   3) 값  : 2.8  4) 메모리주소 : 00000058BE2FFC84 -> &testNum으로 확인
    */

    //float testNum = 2.8f; //값 뒤에 f를 붙이지 않으면 기본적으로 double로 인식 >> 메모리를 더 잡아먹음
    //double testNum1 = 2.8; 

    //cout << sizeof(testNum) << endl;
    //cout << &testNum << endl; //변수앞에 &을 붙이면 해당 변수의 메모리 주소에 해당됨
    //cout << sizeof(testNum1) << endl;

    // 실습 1. 상대방 이름과 내 이름, 상대방 나이를 입력 받아서 축하메세지를 출력하는 프로그램을 만들어보자.
    /*
        예시)
            상대방 이름을 입력하세요.
            _OOO

            본인의 이름을 입력하세요.
            _XXX

            상대방 나이를 입력하세요.
            _VV

            XXX : OOO님 VV살 생일을 축하합니다.
    */
    /*
        변수명 이름 규칙
        1. C++에서 사용하는 키워드들은 변수명으로 사용할 수 없다.
        int float = 3; (X)

        2. 알파벳, 숫자, _ 로만 구성할 수 있다.
            1) 숫자로 변수명을 시작할 수는 없다. ex) int 2customer = 100; (X)

        3. 대/소문자 구분을 한다.

        4. 변수명 사이에 띄어쓰기를 넣을 수 없다.

        5. 전부 소문자로 작성한다.

        6. 축약어를 쓰지 않는다.

    */
    string my_name, other_name;
    int age;

    cout << "상대방 이름을 입력하세요." << endl;
    cin >> other_name;
    cout << "본인의 이름을 입력하세요." << endl;
    cin >> my_name;
    cout << "상대방 나이를 입력하세요." << endl;
    cin >> age;

    cout << my_name << " : " << other_name << "님 " << age << "살 생일을 축하합니다.";


}