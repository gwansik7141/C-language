#include <stdio.h>

void main()
{
	// main 함수는 프로그램의 진입점 역할을 수행한다.

#pragma region 자료형
	// 데이터를 저장하기 위해 데이터의 형태를 정해준다.

	// 자료형은 각각의 자료형마다 크기가 정해져 있으며,
	// 자료형의 크기는 바이트 단위로 이루어져 있다.

	// char   - 1 byte 문자형

	// short	 - 2        정수
	// int		 - 4        정수
	// long	 - 4        정수

	// float    - 4		 실수형
	// double - 8		 실수
	// long double - 8~16 byte 실수

	// 자료형의 경우 자료형에 따라 저장할 수있는 값의 종류와 범위가 결정되어 있다.
#pragma endregion

#pragma region 변수
	// ctl+k+c 전체 주석
	// ctl+k+u 전체 주석 해제

	// 데이터를 저장할 수 있는 메모리 공간 생성

	// ; : 한 문장 끝내는 기호
	
	// int data = 100;

	// 변수 메모리 공간은 프로그램이 실행될 때마다 바뀜,
	// 여러개의 변수가 있을때 서로 고유의 메모리 공간을 가지고 있음.

	// data = 999;
	// 변수 값은 계속 변할 수 있음. 변수를 선언하고 해당하는 변수에
	// 값을 저장하려면 대입 연산자를 통해 값을 저장할 수 있다.
#pragma endregion

#pragma region 변수의 이름 규칙

		// 1. 변수의 이름은 중복 숫자로 시작할 수 없다.
		// ex) int 5day;

		// 2. 변수의 이름으로 예약어로 사용할 수 없다.
		// ex) int float;

		// 3. 변수의 경우 이미 중복된 변수의 이름을 허용하지 않는다.
		// 변수의 이름을 대문자와 소문자로 구별하여 사용할 수 있다.
		// ex) int hp = 100;
		// ex) int Hp = 200;
		
		// 4. 변수의 이름으로 공백이 포함될 수 없다.
		// ex) int count Down;
		
		// 5. 변수의 이름으로 특수 기호는 "_"와 "$"만 사용할 수 있다.
		//	ex) int count_Down = 5;
		//	ex) int money$ = 100;

#pragma endregion

#pragma region printf() 함수
	
	// 일련의 데이터를 형식 문자열에 지정되어 있는
	// 형태로 출력하는 함수

	char grade = 'A';
	int	 attack = 30;

	// 표준 출력 함수의 경우 출력할 문자열 사이에 변수를
	// 출력하려면 서식이라는 특수한 문자를 받고록 설정해야함.

	printf("Hello Word\n줄바꿈");

	// 서식 지정자의 경우 하나의 표준 출력 함수에 여러 개의 서식을
	// 넣을 수 있으며, 서식 지정자의 순서는 왼쪽에서부터 시작한다.

	printf("%c", grade);

	printf("%c %d", grade, attack);

	// "%c" : 하나의 문자를 표현하는 서식 지정자
	// "%d" : 정수를 표현하는 서식 지정자
#pragma endregion


}