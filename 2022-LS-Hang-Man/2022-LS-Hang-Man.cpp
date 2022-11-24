#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	
	//게임에 필요한 영단어 배열 생성
	string fruits[15]={"apple", "pear", "grapes", "mango", "watermelon", "orange", 
"lime", "peach", "mandarin", "blueberry", "plum", "strawberry", "kiwi", "banana", "cherry"};
	string alpabet = { 'a','b','c','d','e','f','g','h','i','g','k','l','m','n','o','p','q','r' };

	//단어 랜덤으로 선정
	int index;
	string dap;
;
	srand(time(0));
	index = rand() % 15;
	dap = fruits[index];

	//게임 진행(행맨)
	while (true)
	{

	}


	//최종결과 출력



}
