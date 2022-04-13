/*
    ※교수님이 빼먹으신 데이터타입
    boolean 타입
    bool isAlive = false; 0 or 1 -> 1byte


    배열 (자료구조)
    같은 데이터타입의 여러 변수를 하나의 묶음으로 나타낸 것.

    배열의 데이터타입에 대한 동일한 크기로 메모리상에 "연속된 공간"이 할당된다.
    ex) int nums[10]; 선언시 4byte 공간이 연속되게 10개 총 40byte의 공간이 할당됨.

    변수의 메모리주소 값은 "&변수명" 이나 배열의 메모리주소는 "배열명" 이다

    배열의 [n] 안의 숫자는 할당된 메모리의 처음 주소와의 n번째 떨어져있는지 로 생각하면 됨.
*/

/*
    실습1. string형 배열변수 5개짜리를 선언하고 반복문을 통해 학생의 이름을 입력받는다.
          입력을 다 받고나서 1 ~ 5 사이의 값을 입력하면 해당학생의 이름이 출력된다.
*/


#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*int nums[10] = {1,2,3,4,5,6,7,8,9,12};

    cout << nums << endl;
    for (int i = 0;i < 10;i++) {
        cout << &(nums[i]) << endl;
    }*/
    //cout << nums[10] << endl; // 런타임에러 - 잘못된 메모리주소에 접근한 경우

    string studentName[5];
    int studentNumber;
    for (int i = 0;i < 5;i++) {
        cout << i + 1 << "번째 학생의 이름을 입력하세요 : ";
        cin >> studentName[i];
    }
    cout << "1 ~ 5사이의 번호를 입력하세요 : ";
    cin >> studentNumber;
    cout << studentNumber << "번째 학생의 이름은 " << studentName[studentNumber - 1] << "입니다.";

}
