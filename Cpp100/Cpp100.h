#pragma once
#include<iostream>  
using namespace std;

class CPP100
{
public:
	//1회차 HelloWorld 출력하기
	void Cpp100_1();		
	//2회차 사칙여산 계산기 만들기
	void Cpp100_Calculator();
	//3회차 회원 정보 출력기(나이 계산기)
	void Cpp100_AgeCalculator();
	//4회차 가위바위보 만들기
	void Cpp100_RockScissorsPaper();

	constexpr unsigned int HashCode1(const char* str);
private:

};

