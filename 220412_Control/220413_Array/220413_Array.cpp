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

    2차원배열 및 다차원배열
    배열이 "개념적으로" 2중으로, 다중으로 구성되어 있는 것

    1차원 배열 : int studentNumber[5];      // 5개의 int
        -> 5명의 학생이 있다.
    2차원 배열 : int studentName[3][10];    // 15개의 int
        -> 3개 반에 각각 5명의 학생이 있다.
    3차원 배열 : int studentName[4][3][5];  // 60개의 int
        -> 4개 학년에 각각 3개 반이 존재, 각 반에 5명의 학생이 있다.

    (엔터 없이) 문자 하나를 입력받는 방법
    _getch();
*/

/*
    실습1.   string형 배열변수 5개짜리를 선언하고 반복문을 통해 학생의 이름을 입력받는다.
            입력을 다 받고나서 1 ~ 5 사이의 값을 입력하면 해당학생의 이름이 출력된다.

    실습2.   구구단의 결과를 저장하는 2차원 배열을 하나 선언하고 
            이중 for문을 이용해서 배열 변수에 구구단의 결과값을 저장하고, 
            두 수를 입력 받아서 적합한 결과값을 출력해보자
*/


#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{

    int inputKey = _getch();
    cout << inputKey << endl;

    //int studentNums[3][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}}; // 순서대로 출력하는 코드

    //for (int i = 0;i < 3;i++) {
    //    for (int j = 0;j < 5;j++) {
    //        cout << studentNums[i][j] << endl;
    //    }
    //}


    /*int nums[10] = {1,2,3,4,5,6,7,8,9,12};

    cout << nums << endl;
    for (int i = 0;i < 10;i++) {
        cout << &(nums[i]) << endl;
    }*/
    //cout << nums[10] << endl; // 런타임에러 - 잘못된 메모리주소에 접근한 경우

    /*string studentName[5];
    int studentNumber;
    for (int i = 0;i < 5;i++) {
        cout << i + 1 << "번째 학생의 이름을 입력하세요 : ";
        cin >> studentName[i];
    }
    cout << "1 ~ 5사이의 번호를 입력하세요 : ";
    cin >> studentNumber;
    cout << studentNumber << "번째 학생의 이름은 " << studentName[studentNumber - 1] << "입니다.";*/


    /*int guguResult[8][9];
    int firstNum, secondNum;
    for (int i = 0;i < 8;i++) {
        for (int j = 0;j < 9;j++) {
            guguResult[i][j] = (i+2) * (j+1);
        }
    }
    cout << "(결과 저장 완료)" << endl;
    cout << "몇 단을 볼까요? : ";
    cin >> firstNum;
    cout << "몇을 곱할까요? : ";
    cin >> secondNum;

    cout << firstNum << " * " << secondNum << " = " << guguResult[firstNum-2][secondNum-1];*/



    /*int array[5][5] = {};
    
    for (int i = 0;i < 5;i++) {
        if (i == 0) {

        }else if() {
        
        }
   
    for (int i = 0;i < 5;i++) {
        for (int j = 0;j < 5;j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }*/
    

}
