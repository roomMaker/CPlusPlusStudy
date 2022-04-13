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

        2) for 문

        for( (1)초기식 ; (2)조건식 ; (3)증감식 )
        {
            (4)실행문;
        }

        (1) -> (2) -> (4) -> (3) -> (2) -> (4) -> (3) -> (2) -> (4) -> (3) -> .... 조건식의 결과값이 0(false)가 나올 때까지

        실습(for) : 
        1. 10부터 1까지 차례대로 출력되는 코드를 작성해 보자.
        2. 100미만의 3의 배수를 차례대로 출력하는 코드를 작성해 보자.
        3. 1000미만의 2의 승수를 차례대로 출력하는 코드를 작성해보자.
        4. 구구단을 출력해보자.
            1) 2단 차례대로 출력
            2) 2단부터 9단까지 출력
            3) 구구단을 2  3  4
                       5  6  7
                       8  9
               단 순으로 출력

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

    /*srand(time(NULL));
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
    }*/ //실습

    /*userNumber = -1;
    while (randNumber != userNumber) {
        cout << "1 ~ 9 사이의 숫자 맞추기!! : ";
        cin >> userNumber;

        (randNumber == userNumber) ? cout << "정답!" << endl : cout << "다시 시도해 보세요" << endl;
    }*/ //실습

    /*for (int i = 0; i < 5; i++) {
        cout << "Hello World" << endl;
    }*/



    /*
    cout << "10부터 1까지 출력 : ";
    for (i = 10; i > 0; i--) {
        cout <<  i << " ";
    }
    cout << endl;
    cout << "100미만 3의배수 : ";
    for (i = 3; i < 100; i+=3) {
        cout << i << " ";
    }
    cout << endl;
    cout << "1000미만 2의 승수 : ";
    for (i = 1; i < 1000; i*=2) {
       cout << i << " ";
    }
    cout << endl;*/

    /*int i;

    for (i = 1; i < 10; i++) {
        cout << "2 * " << i << " = " << 2 * i << endl;
    }
    cout << endl;

    for (i = 2; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << endl;
    }

    cout << endl;
    for (int k = 2; k < 9; k += 3) {
        for (i = 1; i < 10; i++) {
            for (int j = k; j < k + 3; j++) {
                if (j == 10) {
                    break;
                }
                cout << j << " * " << i << " = " << i * j << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }*/

    for (int i = 1; i < 6; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    } // 1번
    cout << endl;

    for (int i = 1; i < 6; i++) {
        for (int j = 4; j >= i; j--) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    } // 2번
    cout << endl;

    for (int i = 5; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    } // 3번
    cout << endl;

    for (int i = 1; i < 6; i++) {
        for (int j = 2; j <= i; j++) {
            cout << " ";
        }
        for (int j = 5; j >= i; j--) {
            cout << "*";
        }
        cout << endl;
    } // 4번
    cout << endl;

    for (int i = 0; i < 5; i++) {
        for (int j = 3; j >= i; j--) {
            cout << " ";
        }
        for (int j = 0; j <= i + i; j++) {
            cout << "*";
        }
        cout << endl;
    } // 5번
    cout << endl;

    for (int i = 0; i < 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << " ";
        }
        for (int j = 8; j >= i + i; j--) {
            cout << "*";
        }
        cout << endl;
    } // 6번
    cout << endl;

    for (int i = 0; i < 5; i++) {
        for (int j = 3; j >= i; j--) {
            cout << " ";
        }
        for (int j = 0; j <= i + i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i < 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << " ";
        }
        for (int j = 8; j >= i + i; j--) {
            cout << "*";
        }
        cout << endl;
    }// 7번
    cout << endl;
    for (int i = 0;i < 9;i++) {
        if (i < 5) {
            for (int j = 3; j >= i; j--) {
                cout << " ";
            }
            for (int j = 0; j <= i + i; j++) {
                cout << "*";
            }
            cout << endl;
        }
        else {
            for (int j = 5; j <= i; j++) {
                cout << " ";
            }
            for (int j = 7; j > i + i - 10; j--) {
                cout << "*";
            }
            cout << endl;
        }
    }// 7번 if문
    cout << endl;

    int num;
    cin >> num;
    for (int i = 0;i < 2 * num - 1;i++) {
        if (i < num) {
            for (int j = 0; j <= i; j++) {
                cout << "*";
            }
            for (int j = 2 * num - 2; j > i + i; j--) {
                cout << " ";
            }
            for (int j = 0; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
        else {
            for (int j = 2 * num - 1; j > i; j--) {
                cout << "*";
            }
            for (int j = 2 * num - 2; j < i + i; j++) {
                cout << " ";
            }
            for (int j = 2 * num - 1; j > i; j--) {
                cout << "*";
            }
            cout << endl;
        }
    }// 8번

    cin >> num;
    for (int i = 0;i < 2 * num - 1;i++) {
        if (i < num) {
            for (int j = 1;j <= i;j++) {
                cout << " ";
            }
            for (int j = 2 * num - 1; j > i + i;j--) {
                cout << "*";
            }
            cout << endl;
        }
        else {
            for (int j = 2 * num - 2;j > i; j--) {
                cout << " ";
            }
            for (int j = 2 * num - 3; j < i + i; j++) {
                cout << "*";
            }
            cout << endl;
        }

    }// 9번

    cin >> num;
    for (int i = 0; i < num; i++) {
        if (i == 0) {
            for (int j = 0;j < num;j++) {
                cout << "*";
            }
            cout << endl;
        }
        else if (i < num -1) {
            cout << "*";
            for (int j = 0;j < num - 2;j++) {
                cout << " ";
            }
            cout << "*";
            cout << endl;
        }
        else {
            for (int j = 0;j < num;j++) {
                cout << "*";
            }
        }
        
    }
}