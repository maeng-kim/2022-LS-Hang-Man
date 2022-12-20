#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
char input();
bool correct(char userChar, string dap);
char uppercase(char upperChar);

int main()
{
	
	//게임에 필요한 영단어 배열 생성
	string fruits[15]={"apple", "pear", "grapes", "mango", "watermelon", "orange", 
"lime", "peach", "mandarin", "blueberry", "plum", "strawberry", "kiwi", "banana", "cherry"};
	string alpabet = { 'a','b','c','d','e','f','g','h','i','g','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

	//단어 랜덤으로 선정
	int index, size;
	char userChar;
	string dap;
;
	srand(time(0));
	index = rand() % 15;
	dap = fruits[index];

	//게임 진행(행맨)
	while (true)
	{
		size = dap.length();
		//자리수출력
		for (int i = 0; i < size; i++)
			cout << "_" << " ";

		//유저문자입력
		userChar=input();

		//입력한 문자가 맞았을 시
		if (correct(userChar, dap, size)) {

		}

	}
	//최종결과 출력



}

//대문자-> 소문자 변환
char uppercase(char upperChar)
{
	return upperChar = static_cast<char>(upperChar + ('a' - 'A'));
}

//유저의 문자입력
char input()
{
	char char1;
	cout << "Enter a character : ";
	cin >> char1;
	return char1;
}

bool correct(char userChar, string dap, int size)
{
	for (int j = 0; j < size; j++) {
		if (dap[j] == userChar)
			return true;
		else
			return false;
	}
}