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
		std::cout << "����ϰ��� �ϴ� ���ڿ� �����ڸ� �Է����ּ��� (+,-,*,/)" << endl;
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
			std::cout << "������ ������ �����ּ��� [����1 ������ ����2] Ȥ�� ������ + , - , / , * ������ �����ּ���" << endl << endl;
			break;
		}
		std::cout << "�Է¹��� ������ " << num1 << " " << op << " " << num2 << "�Դϴ�." << endl << "������� " << result << " �Դϴ�." << endl << endl << endl;
	}
}