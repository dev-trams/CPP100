#include "Cpp100.h"
//���ڿ��� switch ���� ���������� ��ȯ ��Ű�� ���� HashCode�Լ�
constexpr unsigned int CPP100::HashCode1(const char* str) {
	return str[0] ? static_cast<unsigned int> (str[0]) + 0xEDB8832Full * HashCode1(str + 1) : 8603;
}