
#include <iostream>

using namespace std;

int main()
{
    // 별찍기 1 ~ 7 번
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
}

