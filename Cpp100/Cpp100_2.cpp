#include<iostream>
#include <string.h>
#include "Cpp100.h"
using namespace std;
void CPP100::Cpp100_Calculator() {
	int num1 = 0, num2 = 0;
	char op;
	int result = 0;
	while (1)
	{
		std::cout << "계산하고자 하는 숫자와 연산자를 입력해주세요 (+,-,*,/)" << endl;
		cin >> num1 >> op >> num2;
	
		if (num1 == 4 && op == '0' && num2 == 4) {
			exit(0);
		}
		switch (op)
		{
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			result = num1 / num2;
			break;
		default:
			std::cout << "계산식의 형식을 맞춰주세요 [숫자1 연산자 숫자2] 혹은 연산자 + , - , / , * 형식을 맞춰주세요" << endl << endl;
			break;
		}
		std::cout << "입력받은 계산식은 " << num1 << " " << op << " " << num2 << "입니다." << endl << "결과값은 " << result << " 입니다." << endl << endl << endl;
	}
}