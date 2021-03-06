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

    (데이터)형변환 : 데이터타입을 변환한다.
    묵시적 형변환
    명시적 형변환
*/

/*
    실습1.   string형 배열변수 5개짜리를 선언하고 반복문을 통해 학생의 이름을 입력받는다.
            입력을 다 받고나서 1 ~ 5 사이의 값을 입력하면 해당학생의 이름이 출력된다.

    실습2.   구구단의 결과를 저장하는 2차원 배열을 하나 선언하고 
            이중 for문을 이용해서 배열 변수에 구구단의 결과값을 저장하고, 
            두 수를 입력 받아서 적합한 결과값을 출력해보자

    실습3. A ~ Z 키 중에 하나를 정답으로 설정한다.
          유저는 한 개의 키를 입력해서 설정된 값을 맞춘다.
          유저가 입력한 키와 설정된 값이 맞으면 승리, 프로그램 종료
          틀리면 남은 기회를 보여주고, 5번 틀리면 정답을 알려주고 게임오버

          + 틀릴 때마다 정답 알파벳이 입력된 알파벳 앞에 있는지, 뒤에 있는지 힌트를 준다.

          + 입력된 값이 대소문자 구분없이 처리 될 수 있도록 수정해보자.
    
    실습4. 콘솔용 탈출게임
          10 * 10 크기의 맵을 구성한다. (2차원 배열)

          O#########
          ##########
          ##########
          ##########
          ##########
          ##########
          ##########
          ##########
          ######E###
          ##########
          
          플레이어(0, 0)가 존재한다. -> O 
          탈출지점이 존재한다. -> E
          WASD 키입력을 통해 플레이어를 이동시킨다.
          탈출지점은 (0, 0) 을 제외하고 랜덤 설정
          O가 E에 도달하면 "탈출에 성공했습니다." 프로그램 종료

          
*/


#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{

    int playerX, playerY, escapeX, escapeY, inputKey;
    srand(time(NULL));
    escapeX = rand() % 9 + 1; //탈출지점 세로위치
    escapeY = rand() % 9 + 1; //탈출지점 가로위치
    playerX = 0; // 플레이어 세로위치
    playerY = 0; // 플레이어 가로위치
    int array[10][10];
    while (1) {
        for (int i = 0;i < 10;i++) {
            for (int j = 0;j < 10;j++) {
                array[i][j] = '#';
            }
        }
        array[escapeX][escapeY] = 'E';
        array[playerX][playerY] = 'O';

        for (int i = 0;i < 10;i++) {
            for (int j = 0;j < 10;j++) {
                cout << (char)array[i][j];
            }
            cout << endl;
        }
        if (playerX == escapeX && playerY == escapeY) {
            cout << "탈출에 성공했습니다!!!" << endl;
            break;
        }
        inputKey = _getch();
        switch (inputKey) {
            case 97:
                if (playerY <= 0) {
                    break;
                }
                playerY--;
                break; // 왼쪽으로 가유~
            case 115:
                if (playerX >= 9) {
                    break;
                }
                playerX++;
                break; // 아래로 가유~
            case 100:
                if (playerY >= 9) {
                    break;
                }
                playerY++;
                break; // 오른쪽으로 가유~
            case 119:
                if (playerX <= 0) {
                    break;
                }
                playerX--;
                break; // 위로 가유~
        }
        
        system("cls");
    }
        
        //system("cls");
    
    

    

    //system("cls"); 화면 지우개





    //int randNumber, getKey, turnCount = 4;
    //srand(time(NULL));
    //randNumber = (rand() % 26) + 97;//97 ~ 122

    ////cout << (char)randNumber;

    //while (1) {
    //    cout << endl << "한 개의 키를 입력하세요 : ";
    //    getKey = _getch();
    //    cout << (char)getKey << endl;
    //    if (getKey >= 65 && getKey <= 90) {
    //        getKey += 32;
    //    }//65~90


    //    if (getKey == randNumber) {
    //        cout << endl << "정답입니다!!" << endl;
    //        break;
    //    }
    //    else if (getKey >= 97 && getKey <= 122) {
    //        if (turnCount == 0) {
    //            cout << endl << "게임오버" << endl;
    //            break;
    //        }

    //        cout << endl << "땡! 오답입니다. 남은기회 " << turnCount-- << "번" << endl;

    //        if (getKey < randNumber) {
    //            cout << endl << "해당 알파벳보다 뒤에 있는 알파벳입니다." << endl;
    //        }
    //        else {
    //            cout << endl << "해당 알파벳보다 앞에 있는 알파벳입니다." << endl;
    //        }


    //    }
    //    else {
    //        cout << "알파벳 키를 눌러주세요~" << endl;
    //    }


    //} // 알파벳 맞추기










    //int inputKey = _getch();
    //char inputKeyChar = _getch();
    //cout << (int)inputKeyChar << endl;


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
    int num=1,count=0;
    while (1) {
        for (int i = count;i < (5-count);i++) {
            array[count][i] = num;
            num++;
        }
        if (num == 26) {
            break;
        }
        for (int i = count + 1 ;i < (5 - count);i++) {
            array[i][4 - count] = num;
            num++;
        }
        for (int i = 3 - count;i >= count;i--) {
            array[4 - count][i] = num;
            num++;
        }
        for (int i = 3 - count;i > count;i--) {
            array[i][count] = num;
            num++;
        }
        count++;
        
    }
    
            
        for (int i = 0;i < 5;i++) {
                for (int j = 0;j < 5;j++) {
                    cout << array[i][j] << "\t";
                }
                cout << endl;
        }*///달팽이






        
    
}