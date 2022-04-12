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

       switch (정수형 변수) { // 괄호안의 정수 값에 따라 아래 정수별로 실행문을 실행 ex) 정수형 변수 == 1 이면 case 1: 실행
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

    int flagNumber;
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

}