#include<iostream>
#include "Cpp100.h"
using namespace std;

void CPP100::Cpp100_1() {
	// 문자열 변수 a에 256개의 데이터를 저장할 수 있도록 지정해준다.
	char a[256] = "fdsafaf";
	//  Ener the Your Name을 출력한다.
	cout << "Enter the Your Name";
	// 문자열 변수 a에 이름을 받는다
	cin >> a;
	// Helloworld + 문자열 변수 a에서 받은 데이터를 받는다.
	cout << "HelloWorld " << a;

	//예상 결과 HelloWorld 이재규
	
}