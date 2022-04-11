#include <iostream>

using namespace std;

//int main()
//{
//    srand(time(NULL));
//    int minNumber, maxNumber, randNumber, userNumber;
//    randNumber = rand() % 8;
//    randNumber <= 2 ? randNumber += 3 : randNumber;
//    cout << randNumber << endl;//1번
//
//    cout << "최대값을 입력 : ";
//    cin >> maxNumber;
//    cout << "최솟값을 입력 : ";
//    cin >> minNumber;
//    randNumber = (rand() % maxNumber) + 1;
//    randNumber <= (minNumber - 1) ? randNumber += minNumber : randNumber;
//    cout << randNumber << endl;//2번
//
//    randNumber = (rand() % 9) + 1;
//    cout << "1 ~ 9 사이의 숫자 입력 : ";
//    cin >> userNumber;
//    cout << boolalpha << (randNumber == userNumber) << endl;//3번
//
//} 삼항연산자로 해보고 싶었으나 위 방법으로 할 경우 일부 숫자가 다른 숫자에 비해 더 많이 출몰하게 됨

int main() // 수정본
{
    srand(time(NULL));
    int minNumber, maxNumber, randNumber, userNumber;
    randNumber = rand() % 5 + 3;
    //randNumber <= 2 ? randNumber += 3 : randNumber;
    cout << randNumber << endl; //1번

    cout << "최대값을 입력 : ";
    cin >> maxNumber;
    cout << "최솟값을 입력 : ";
    cin >> minNumber;
    randNumber = rand() % ((maxNumber-minNumber)+1) + minNumber;
    //randNumber <= (minNumber - 1) ? randNumber += minNumber : randNumber;
    cout << randNumber << endl;//2번

    randNumber = (rand() % 9) + 1;
    cout << "1 ~ 9 사이의 숫자 입력 : ";
    cin >> userNumber;
    cout << boolalpha << (randNumber == userNumber) << endl;//3번

}