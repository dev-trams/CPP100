#include <iostream>
#include "Cpp100.h"
#include <cstdlib>
#include <ctime>	
#include <cstring>
using namespace std;
//문자열을 switch 에서 정수값으로 변환 시키기 위한 HashCode함수
constexpr unsigned int HashCode(const char* str) {
	return str[0] ? static_cast<unsigned int> (str[0]) + 0xEDB8832Full * HashCode(str + 1) : 8603;
}
//4회차 가위바위보 만들기
void CPP100::Cpp100_RockScissorsPaper()
{
	// 문자열의 메모리값을 지정해주고 초기화 해준다.(이렇게 해야 stream에서 데이터를 받아서 보내줄 수 있음)
	char player_result[255] = {};
	int playerResultConvert = 0;


	cout << "당신의 픽은? (가위, 바위, 보)" << endl;
	cout << "Player : ";
	
	cin >> player_result;

	switch (HashCode(player_result))
	{
		
	case HashCode("가위"):
		playerResultConvert = 1;
		break;
	case HashCode("바위"):
		playerResultConvert = 2;
		break;
	case HashCode("보"):
		playerResultConvert = 3;
	default:
		break;
	}
		

	//srand 로 난수 시드를 생성해주고 인자에 ctime->time을 넣어서 시드가 매번 변경될 수 있도록 한다.
	srand((unsigned int)time(NULL));
	
	//1~3까지의 난수를 출력해준다.
	int ai_result = (rand() % 3) + 1;

	switch (ai_result)
	{
	case 1:
		cout << "AI : 가위" << endl;
		break;
	case 2:
		cout << "AI : 바위" << endl;
		break;
	case 3:
		cout << "AI : 보" << endl;
		break;
	default:
		break;
	}

	//1 = 가위, 2 = 바위, 3 = 보
	if (playerResultConvert == 1)
	{
		if (ai_result == 2) {
			cout << "컴퓨터 win";
		}
		else if (ai_result == 3) {
			cout << "플레이어 win";
		}
	}
	else if (playerResultConvert == 2)
	{
		if (ai_result == 3) {
			cout << "컴퓨터 win";
		}
		else if (ai_result == 1) {
			cout << "플레이어 win";
		}
	}
	else if (playerResultConvert == 3) {
		if (ai_result == 1) {
			cout << "컴퓨터 win";
		}
		else if (ai_result == 2) {
			cout << "플레이어 win";
		}
	}

	//비김
	if (playerResultConvert == ai_result) {
		cout << "비겼습니다.";
	}
	
}
