// C++ 문법

// 주석 : 실행(컴파일) 되지 않고 설명만을 위해서 사용되는 문법
/*
    1줄
    2줄
    3줄
    4줄
*/
/*
    C++ 문법을 사용할 때 주의해야 할 점
    1. 대/소문자를 구분해야 한다.

    main / Main / mAIN / maIN <-- 모두다름

    2. 띄어쓰기를 통해 요소를 구분한다.
    3. 실행문의 마무리는 세미콜론(;)로 한다.
*/
/*
    [변수] : 데이터를 저장할 메모리공간을 할당받는다.
    데이터타입 변수명;
    데이터타입 변수명 = 10;
    데이터타입 변수명 = 'a';
    데이터타입 변수명 = "Hello";

    데이터타입
    1. 정수형 ( ...-2 -1 - 1 2 3 4 5 6...) 
    int
    short 
    long
    long long
    __int8, __int16, __int32, __int 64 ...
    2. 실수형 
    float
    double
    long double
    3. 문자형
    char
    4. 문자열
    string

    변수명 이름짓기 규칙 (표기법)
    1. 헝가리안 표기법 - 데이터타입 약자를 접두어로 붙인다. --> int nMaxCount = 10;
    2. 카멜 표기법 --> int maxCount;
    3. 파스칼 표기법 --> int MaxCount;

    변수명은 해당 변수의 의미를 알아 볼 수 있게 작성
    int nn = 10; int cmprs = 20; (X)

    1. 대소문자를 구분한다.
    2. 알파벳, 숫자, _ 만 사용가능
     2-1. 숫자는 가장 앞에 올 수 없다.
    
    변수의 4가지 속성
    1. 이름
    2. 크기
    3. 값
    4. 메모리주소
*/

/*
    연산자
    데이터를 가공(연산)하는 모든 명령에 필요한 것들
    1) 어떤 종류의 연산자인가
    2) 우선순위 : 어떤 순서로 연산이 되는가
    3) 결합순서 : 좌측부터 연산하는가, 우측부터 연산하는가

    1. 사칙연산 : 산술연산자 (좌측부터 연산된다)
    + : 더하기
    - : 빼기
    * : 곱하기
    / : 나누기     11 / 3 -> 3 (몫)
    % : 나머지     11 % 3 -> 2 (나머지)

    우선순위 -> * / % > + -

    2. 대입연산자 = (우측부터 연산된다)
    = : 왼쪽 항에 오른쪽 항의 값을 대입한다.

    3. 복합대입연산자
    += : a += b; -> a = a + b;
    -= : a -= b; -> a = a - b;
    *= : a *= b; -> a = a * b;
    /= : a /= b; -> a = a / b; (b == 0, 런타임에러 발생)
    %= : a %= b; -> a = a % b; (데이터타입이 정수형이 아닐 때)

    4. 증감연산자
    특정 변수의 값을 1씩 증가시키거나 감소시길 때 사용하는 연산자
    변수명 앞이나 뒤에 ++ / -- 를 붙여서 사용한다.
    
    5. 관계연산자
    두 항의 값을 비교한 결과가 참(1, true) 또는, 거짓(0, false)으로 "반환"되는 연산자
    <  : 좌항이 우항보다 작다
    >  : 좌항이 우항보다 크다
    <= : 좌항이 우항보다 작거나 같다
    >= : 좌항이 우항보다 크거나 같다
    == : 좌항과 우항이 같다
    != : 좌항과 우항이 같지않다

    6. 논리연산자
    왼쪽 항과 오른쪽 항의 값을 각각 참과 거짓으로 연산해서 두 값을 비교해서 참과 거짓을 반환하는 연산자
    && : 논리곱(AND) -> a && b : a의 결과값이 참이고 b의 결과값이 참이면 1을 반환
    || : 논리합(OR) -> a || b : a의 결과값 또는 b의 결과값이 참이면 1을 반환
    ! : 논리부정(NOT) -> !a : a의 결과값이 참이면 거짓을 반환, 거짓이면 참을 반환

    7. 삼항연산자
    a ? b : c;
    a의 결과값이 참이면 b실행문이 동작, 거짓이면 c실행문이 동작

    난수 (랜덤값)
    rand(); // 0 ~ 32767 사이의 랜덤한 값이 반환된다.
    함수 내부에 seed값이 있어서 이 값에 의해서 리턴값이 정해진다.
    기본적으로 seed : 1로 세팅되어 있다. -> 값이 일정함
    srand -> seed값에 변화를 주어 값이 랜덤하게 나오게 함

    srand(time(NULL)) // 계속 바뀌는 시간에 따른 시드 변환으로 랜덤성 부여 (그러나 그렇게 랜덤하지는 않다)
*/
/*
    rand()의 데이터 타입 찾기
*/
/*
    실습1. 3 ~ 7 사이의 랜덤한 숫자를 출력하는 프로그램을 작성하자. (3, 7 포함)

    실습2. 가장 작은 값과 큰 값을 입력 받아서, 그 사이의 임의의 값을 출력하는 프로그램을 작성하자.

    실습3. 프로그램을 실행하면 내부적으로 1 ~ 9 사이의 숫자가 정답으로 정해진다. 유저가 1 ~ 9 사이의 숫자를 입력하면 맞으면 true, 틀리면 false를 출력한다.
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    srand(time(NULL));
    int minNumber, maxNumber, randNumber, userNumber;
    randNumber = rand() % 8;
    randNumber <= 2 ? randNumber += 3 : randNumber;
    cout << randNumber << endl;//1번

    cout << "최대값을 입력 : ";
    cin >> maxNumber;
    cout << "최솟값을 입력 : ";
    cin >> minNumber;
    randNumber = (rand() % maxNumber) + 1;
    randNumber <= (minNumber - 1) ? randNumber += minNumber : randNumber;
    cout << randNumber << endl;//2번

    randNumber = (rand() % 9) + 1;
    cout << "1 ~ 9 사이의 숫자 입력 : ";
    cin >> userNumber;
    cout << boolalpha << (randNumber == userNumber) << endl;//3번

}







//srand(time(NULL));
    //std::cout << rand() << std::endl;
    //(10 > 5) ? std::cout << "10이 5보다 크다" : std::cout << "10이 5보다 작다";
    //std::cout << std::endl;
    //std::cout << !1 << std::endl; // 0
    //std::cout << ((10 < 5) == 0) << std::endl; // 1
    //

    //int input_key = 10;

    //std::cout << input_key++ << input_key << input_key++ << input_key << input_key++ << std::endl;  // 10
    //std::cout << ++input_key << std::endl;  // 12
    //std::cout << input_key-- << std::endl;  // 12
    //std::cout << --input_key << std::endl;  // 10

    //float testFloat = 5.3f;
    //float testFloat2 = 5.3;
    //char testCharacter = 'a';
    //std::string testString = "hello";

    //std::cout << "Hello World!\n";
    //std::cin >> input_key;