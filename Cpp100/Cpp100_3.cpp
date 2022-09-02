#include <iostream>
#include <ctime>
#include "Cpp100.h"
#include <cstring>
using namespace std;

void CPP100::Cpp100_AgeCalculator() {
	// 한글 2바이트, 영어 1바이트
	char name[8], sex[8];
	int age = 0, year = 0, uid = 0, chose = 0;
	cout << "사용자 정보 취합 시스템" << endl;

	cout << "이름을 입력하세요: ";
	cin >> name;

	cout << "성별을 입력하세요: ";
	cin >> sex;

	cout << "사용자의 나이를 입력하시려면 1을 출생년도를 입력하시려면 2를 입력해주세요" << endl;
	cin >> chose;
	// 현재 년도 구하는 수식 (ctime라이브러리 사용)
	time_t d_day = time(NULL);
	// d_day를 그대로 사용할 수 없으니 localtime 키워드를 이용하여 형변환 시킨다.
	struct tm* t = localtime(&d_day);	
	
	switch (chose)
	{
	case 1:
		cout << "나이를 입력하세요: ";
		cin >> age;
		//현재 년도에 1900년도를 더하고 나이를 뺀후 1을 더하여 현재 나이를 구한다.
		year = ((t->tm_year + 1900) - age) + 1;
		break;
	case 2:
		cout << "출생년도를 입력하세요: ";
		cin >> year;
		age = ((t->tm_year + 1900) - year) + 1;
		
		break;
	default:
		cout << "정확한 코드를 입력해주세요" << endl;
		break;
	}


	if ((year >= 2000) && (strcmp(sex,"남") == 0	)||(strcmp(sex, "남성") == 0)||(strcmp(sex, "남자") == 0))
	{
		uid = 3;
	}
	else if (year >= 2000 && (strcmp(sex, "여") == 0) || (strcmp(sex, "여성") == 0) || (strcmp(sex, "여자") == 0)) {
		uid = 4;
	}
	else if (year < 2000 && (strcmp(sex, "남") == 0) || (strcmp(sex, "남성") == 0) || (strcmp(sex, "남자") == 0)) {
		uid = 1;
	}
	else if (year < 2000 && (strcmp(sex, "여") == 0) || (strcmp(sex, "여성") == 0) || (strcmp(sex, "여자") == 0)) {
		uid = 2;
	}
	else {
		uid = 404;
	}
	cout << endl << "이름: " << name << " 성별: " << sex << " 나이: " << age << " 출생년도: " << year << "-" << uid << endl;
}