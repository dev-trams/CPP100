#include <iostream>
#include "Cpp100.h"
#include <cstdlib>
#include <ctime>	
#include <cstring>
using namespace std;
//���ڿ��� switch ���� ���������� ��ȯ ��Ű�� ���� HashCode�Լ�
constexpr unsigned int HashCode(const char* str) {
	return str[0] ? static_cast<unsigned int> (str[0]) + 0xEDB8832Full * HashCode(str + 1) : 8603;
}
//4ȸ�� ���������� �����
void CPP100::Cpp100_RockScissorsPaper()
{
	// ���ڿ��� �޸𸮰��� �������ְ� �ʱ�ȭ ���ش�.(�̷��� �ؾ� stream���� �����͸� �޾Ƽ� ������ �� ����)
	char player_result[255] = {};
	int playerResultConvert = 0;


	cout << "����� ����? (����, ����, ��)" << endl;
	cout << "Player : ";
	
	cin >> player_result;

	switch (HashCode(player_result))
	{
		
	case HashCode("����"):
		playerResultConvert = 1;
		break;
	case HashCode("����"):
		playerResultConvert = 2;
		break;
	case HashCode("��"):
		playerResultConvert = 3;
	default:
		break;
	}
		

	//srand �� ���� �õ带 �������ְ� ���ڿ� ctime->time�� �־ �õ尡 �Ź� ����� �� �ֵ��� �Ѵ�.
	srand((unsigned int)time(NULL));
	
	//1~3������ ������ ������ش�.
	int ai_result = (rand() % 3) + 1;

	switch (ai_result)
	{
	case 1:
		cout << "AI : ����" << endl;
		break;
	case 2:
		cout << "AI : ����" << endl;
		break;
	case 3:
		cout << "AI : ��" << endl;
		break;
	default:
		break;
	}

	//1 = ����, 2 = ����, 3 = ��
	if (playerResultConvert == 1)
	{
		if (ai_result == 2) {
			cout << "��ǻ�� win";
		}
		else if (ai_result == 3) {
			cout << "�÷��̾� win";
		}
	}
	else if (playerResultConvert == 2)
	{
		if (ai_result == 3) {
			cout << "��ǻ�� win";
		}
		else if (ai_result == 1) {
			cout << "�÷��̾� win";
		}
	}
	else if (playerResultConvert == 3) {
		if (ai_result == 1) {
			cout << "��ǻ�� win";
		}
		else if (ai_result == 2) {
			cout << "�÷��̾� win";
		}
	}

	//���
	if (playerResultConvert == ai_result) {
		cout << "�����ϴ�.";
	}
	
}
