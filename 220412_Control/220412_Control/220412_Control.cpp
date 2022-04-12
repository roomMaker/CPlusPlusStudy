#include <iostream>
using namespace std;

/*
    제어문     데이터(타입) / 연산자 / <제어구조>

    1. 조건문 : 특정 조건에 따라서 실행문을 실행할지 안할지 제어 : if / switch
    2. 반복문 : 특정 조건에 따라서 실행문을 일정 횟수만큼 반복 실행 제어 : for / while

    조건문
        1) if 문 

        if (조건식1) // 조건식1 판단 -> 참일경우 실행문1 실행
        {
            실행문1;
        }
        else if(조건식2) // 조건식1이 거짓일 때 조건식2가 참이면 실행문3 실행
        {
            실행문3;
        }
        else // 조건식1, 조건식2 가 모두 거짓일 때 실행문2 실행
        {
            실행문2;
        }

        실습1(if) : 정수를 하나 입력 받아서 입력 받은 숫자가 10보다 크면 "입력 된 숫자가 10보다 큽니다." 출력
          10 이하 9 초과 이면 "9보다 큽니다." 출력
          9 이하 6 초과 이면 "6보다 큽니다." 출력
          그 이외에는 "6보다 작거나 같습니다." 출력


       2) switch 문

       switch (정수형 변수) // 괄호안의 정수 값에 따라 아래 정수별로 실행문을 실행 ex) 정수형 변수 == 1 이면 case 1: 실행
       { 
           case 정수:
                   실행문1;
               break;
           case 정수2:
                   실행문2;
               break;
           case 정수3:
                   실행문3;
               break;
           defalut: // 해당하는 정수값이 없을 때
                   실행문4;
               break;
       }

        실습2(switch) : 당신의 고향은 어디입니까?
        1. 서울    2. 양평   3. 광주   4. 대전   5. 제주도  default
        _1

        안녕하세요. 당신의 고향은 서울이군요.
        안녕하수꽝. 혼저옵서예.
        default : 5개 중에 선택해 주세요.

        반복문

        1) while 문

        while (조건식) // 조건식이 만족 될 때 반복
        {
            실행문;
            조건식을 바꾸는 실행문;   //while문을 중단시키는 첫 번째 방법

            if (조건식)
            {
                break;              //while문을 중단시키는 두 번째 방법
            }
        }
        예제) Hello World를 5번 출력하는 프로그램

        1) 2) do-while문

        do
        {
            실행문;
        }
        while(조건식);     // 실행문을 무조건 한번 실행한 뒤 while 조건식에 따라 반복할지 말지 결정 (조건식 뒤 세미콜론 유의)

        실습) 전에 만든 숫자 맞추기 프로그램을 while문을 이용하여 정답을 맞출 때까지 반복되는 프로그램으로 수정해보자.
*/


int main()
{
    //int inputNumber;
    //cout << "숫자하나 입력 : ";
    //cin >> inputNumber;
    //if (inputNumber > 10) {
    //    cout << "입력 된 숫자가 10보다 큽니다." << endl;
    //}
    //else if (/*inputNumber <= 10 &&*/ inputNumber > 9) {
    //    cout << "입력 된 숫자가 9보다 큽니다." << endl;
    //}
    //else if (/*inputNumber <= 9 && */ inputNumber > 6) {
    //    cout << "입력 된 숫자가 6보다 큽니다." << endl;
    //}
    //else {
    //    cout << "입력 된 숫자가 6보다 작거나 같습니다." << endl;
    //}

    /*int flagNumber;
    cout << "당신의 고향은 어디입니까?" << endl << "1. 서울    2. 양평   3. 광주   4. 대전   5. 제주도 (번호입력 후 엔터)" << endl;
    cin >> flagNumber;
    switch (flagNumber) {
        case 1:
            cout << "안녕하세요. 당신의 고향은 서울이군요." << endl;
            break;
        case 2:
            cout << "안녕하세요. 당신의 고향은 양평이군요." << endl;
            break;
        case 3:
            cout << "오메;;" << endl;
            break;
        case 4:
            cout << "안녕하세요. 당신의 고향은 대전이군요." << endl;
            break;
        case 5:
            cout << "안녕하수꽝. 혼저옵서예." << endl;
            break;
        default:
            cout << "5개 중에 선택 해 주세요." << endl;
            break;
    }

    if (flagNumber == 1) {
        cout << "안녕하세요. 당신의 고향은 서울이군요." << endl;
    }
    else if (flagNumber == 2) {
        cout << "안녕하세요. 당신의 고향은 양평이군요." << endl;
    }
    else if (flagNumber == 3) {
        cout << "오메;;" << endl;
    }
    else if (flagNumber == 4) {
        cout << "안녕하세요. 당신의 고향은 대전이군요." << endl;
    }
    else if (flagNumber == 5) {
        cout << "안녕하수꽝. 혼저옵서예." << endl;
    }
    else {
        cout << "5개 중에 선택 해 주세요." << endl;
    }*/

    //int count = 0;

    /*while (count < 5) {
        cout << "Hello World" << endl;
        count++;
    }*/
    
    /*while (1) {
        cout << "Hello World" << endl;
        count++;
        if (count >= 5) {
            break;
        }
    }*/

    /*do
    {
        cout << "Hello World" << endl;
        count++;
    } 
    while (count < 5);*/

    srand(time(NULL));
    int randNumber, userNumber, countNumber = 0;
    randNumber = (rand() % 9) + 1;

    while (1) {
        cout << "1 ~ 9 사이의 숫자 맞추기!! : ";
        cin >> userNumber;
        if (randNumber == userNumber) {
            cout << "정답!" << endl;
            break;
        }
            cout << "다시 시도해 보세요" << endl;
    }

    userNumber = -1;
    while (randNumber != userNumber) {
        cout << "1 ~ 9 사이의 숫자 맞추기!! : ";
        cin >> userNumber;
       
        (randNumber == userNumber) ? cout << "정답!" << endl : cout << "다시 시도해 보세요" << endl;
    }
}