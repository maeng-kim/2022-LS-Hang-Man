#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
char input();
string correct(char userChar, const string dap, const int size, string& userDap);
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
	string dap, userDap;
;
	srand(time(0));
	index = rand() % 15;
	dap = fruits[index];

	size = dap.length();

	//자리수출력
	for (int i = 0; i < size; i++)
		userDap = "_" + userDap;
	cout << userDap << endl;

	//게임 진행(행맨)
	while (true)
	{


		//유저문자입력
		userChar=input();

		//입력한 문자가 맞았을 시

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

string correct(char userChar, const string dap, const int size, string& userDap)
{
	string tempUserDap = userDap;

	for (int j = 0; j < size; j++) 
		if (dap[j] == userChar)
			userDap[j] = userChar;
	
	if (tempUserDap == userDap)
		cout << "This character does not exist";

	return userDap;
}