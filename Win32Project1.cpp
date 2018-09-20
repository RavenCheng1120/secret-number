// Win32Project1.cpp : 定義主控台應用程式的進入點。
// 輸入一串數字，他的'奇數位相加'減掉'偶數位相加'，取絕對值輸出
// ex:輸入131，輸出1。輸入26413，輸出2。
// 可能出現一千位數的輸入，所以要用字串處理

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input_string;
	int check = 1;
	int odd = 0;
	int even = 0;
	cout << "Input number:";
	cin >> input_string;
	for (int i = (input_string.length()-1) ; i >= 0; i--) {
		if (check == 1) {
			odd += (input_string[i]-48);
			check = 0;
		}
		else if (check == 0) {
			even += (input_string[i]-48);
			check = 1;
		}
	}
	int final_number = 0;
	final_number = even - odd;
	if (final_number < 0)
		final_number = -final_number;
	cout << "Output:" << final_number << endl;
    return 0;
}

