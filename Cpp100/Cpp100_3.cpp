#include <iostream>
#include <ctime>
#include "Cpp100.h"
#include <cstring>
using namespace std;

void CPP100::Cpp100_AgeCalculator() {
	// �ѱ� 2����Ʈ, ���� 1����Ʈ
	char name[8], sex[8];
	int age = 0, year = 0, uid = 0, chose = 0;
	cout << "����� ���� ���� �ý���" << endl;

	cout << "�̸��� �Է��ϼ���: ";
	cin >> name;

	cout << "������ �Է��ϼ���: ";
	cin >> sex;

	cout << "������� ���̸� �Է��Ͻ÷��� 1�� ����⵵�� �Է��Ͻ÷��� 2�� �Է����ּ���" << endl;
	cin >> chose;
	// ���� �⵵ ���ϴ� ���� (ctime���̺귯�� ���)
	time_t d_day = time(NULL);
	// d_day�� �״�� ����� �� ������ localtime Ű���带 �̿��Ͽ� ����ȯ ��Ų��.
	struct tm* t = localtime(&d_day);	
	
	switch (chose)
	{
	case 1:
		cout << "���̸� �Է��ϼ���: ";
		cin >> age;
		//���� �⵵�� 1900�⵵�� ���ϰ� ���̸� ���� 1�� ���Ͽ� ���� ���̸� ���Ѵ�.
		year = ((t->tm_year + 1900) - age) + 1;
		break;
	case 2:
		cout << "����⵵�� �Է��ϼ���: ";
		cin >> year;
		age = ((t->tm_year + 1900) - year) + 1;
		
		break;
	default:
		cout << "��Ȯ�� �ڵ带 �Է����ּ���" << endl;
		break;
	}


	if ((year >= 2000) && (strcmp(sex,"��") == 0	)||(strcmp(sex, "����") == 0)||(strcmp(sex, "����") == 0))
	{
		uid = 3;
	}
	else if (year >= 2000 && (strcmp(sex, "��") == 0) || (strcmp(sex, "����") == 0) || (strcmp(sex, "����") == 0)) {
		uid = 4;
	}
	else if (year < 2000 && (strcmp(sex, "��") == 0) || (strcmp(sex, "����") == 0) || (strcmp(sex, "����") == 0)) {
		uid = 1;
	}
	else if (year < 2000 && (strcmp(sex, "��") == 0) || (strcmp(sex, "����") == 0) || (strcmp(sex, "����") == 0)) {
		uid = 2;
	}
	else {
		uid = 404;
	}
	cout << endl << "�̸�: " << name << " ����: " << sex << " ����: " << age << " ����⵵: " << year << "-" << uid << endl;
}