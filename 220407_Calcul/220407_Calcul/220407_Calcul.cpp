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

		2. 대입연산자 (우측부터 연산)
		= : 왼쪽 항에 오른쪽 항의 값을 대입(복사)한다.
		
		3. 복합대입연산자
		+= : a += b;	=> a = a + b;
		-= : a -= b;	=> a = a - b;
		*= : a *= b;	=> a = a * b;
		/= : a /= b;	=> a = a / b;
		%= : a %= b;	=> a = a % b; (a와 b는 정수형타입이어야 한다.)

		4. 증감연산자
		특정 변수의 값을 1씩 증가시키거나 감소시킬 때 사용한다.
		변수의 앞이나 뒤에 ++ / -- 를 붙여서 사용한다.

		5. 관계연산자
		두 값을 비교한 결과가 참(1, true)인지 거짓(0, false)인지 반환하는 연산자
		
		< : a < b : 왼쪽 항의 값이 오른쪽 항의 값보다 작으면 참을 반환한다.
		> : a > b : 왼쪽 항의 값이 오른쪽 항의 값보다 크면 참을 반환한다.
		<= : 왼쪽 항의 값이 오른쪽 항의 값보다 작거나 같으면 참을 반환한다.
		>= : 왼쪽 항의 값이 오른쪽 항의 값보다 크거나 같으면 참을 반환한다.
		== : 왼쪽 항의 값과 오른쪽 항의 값이 같을 때, 참을 반환한다.
		!= : 왼쪽 항의 값과 오른쪽 항의 값이 다를 때, 참을 반환한다.

		
	*/

	/*
		실습
		고객의 나이를 입력받아서 미성년자(19세 이하)이면 true를 출력
		성인이면 false를 출력.

		아까 입력 받은 나이를 기준으로, 주민등록증 발급대상(20살만)이면 true를 아니면 false를 출력

		+ 아홉수(1의 자리가 9인수)인지 확인해서 true, false를 출력.
	*/

	int customerAge;
	bool boolean;
	cout << boolalpha;

	cout << "나이를 입력해주세요: ";
	cin >> customerAge;
	boolean = customerAge <= 19;	
	cout << "고객님은 미성년자 " << boolean << " 입니다" << endl;

	boolean = customerAge == 20;
	cout << "고객님은 주민등록증 발급대상이 " << boolean << " 입니다" << endl;

	boolean = 9 == (customerAge % 10);
	cout << "고객님의 나이는 아홉수가 " << boolean << " 입니다." << endl;


	//int left_value = 11;
	//int right_value = 3;


	////left_value++;
	//cout << left_value++ << endl;
	////++left_value;
	//cout << ++left_value << endl;

	//left_value += right_value;
	//cout << "+ : " << left_value/* + right_value*/ << endl;

	//left_value = 11;
	//left_value -= right_value;
	//cout << "- : " << left_value/* - right_value*/ << endl;

	//left_value = 11;
	//left_value *= right_value;
	//cout << "* : " << left_value/* * right_value */<< endl;

	//left_value = 11;
	//left_value /= right_value;
	//cout << "/ : " << left_value /*/ right_value*/ << endl;

	//left_value = 11;
	//left_value %= right_value;
	//cout << "% : " << left_value /*% right_value*/ << endl;

}
