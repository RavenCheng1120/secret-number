// Win32Project1.cpp : �w�q�D���x���ε{�����i�J�I�C
// ��J�@��Ʀr�A�L��'�_�Ʀ�ۥ['�'���Ʀ�ۥ['�A������ȿ�X
// ex:��J131�A��X1�C��J26413�A��X2�C
// �i��X�{�@�d��ƪ���J�A�ҥH�n�Φr��B�z

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

