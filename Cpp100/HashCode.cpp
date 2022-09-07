#include "Cpp100.h"
//문자열을 switch 에서 정수값으로 변환 시키기 위한 HashCode함수
constexpr unsigned int CPP100::HashCode1(const char* str) {
	return str[0] ? static_cast<unsigned int> (str[0]) + 0xEDB8832Full * HashCode1(str + 1) : 8603;
}