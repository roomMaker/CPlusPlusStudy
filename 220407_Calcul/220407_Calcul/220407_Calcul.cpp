
#include <iostream>
using namespace std;
int main()
{
	/*
		연산자
		데이터를 가공(연산)하는 모든 명령에 필요한 것들
		1) 어떤 종류의 연산자들이 있는지?
		2) 우선 순위 : 어떤 순서로 연산이 진행되는지?
		3) 결합 순서 : 좌측부터 연산하는 연산자, 우측부터 연산하는 연산자

		1. 사칙연산 : 산술연산자 (좌측부터 연산)
		+ : 더하기
		- : 빼기
		* : 곱하기
		/ : 나누기	11 / 3 => 3
		% : 나머지	11 % 3 => 2

		우선순위 : *, /, % > +, -
	*/

	int left_value = 11;
	int right_value = 3;

	cout << "+ : " << left_value + right_value << endl;
	cout << "- : " << left_value - right_value << endl;
	cout << "* : " << left_value * right_value << endl;
	cout << "/ : " << left_value / right_value << endl;
	cout << "% : " << left_value % right_value << endl;

}
