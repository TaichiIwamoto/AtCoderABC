#ifndef INCLUDED_MAIN
#define INCLUDED_MAIN

#include __FILE__

int main()
{

	string str;
	cin >> str;

	int pass[4];
	for (int i = 0; i < 4; i++) {
		pass[i] = str[i] - '0';
	}

	int tmp = 0;
	bool strength;
	//����1 �S�ē�����
	for (int i = 0; i < 3; i++) {
		if (pass[i] != pass[i + 1]) {
			strength = true;

			break;
		}
		else {
			strength = false;
		}
	}
	//����2 ���̐�����+1
	if (strength != false) {
		for (int i = 0; i < 3; i++) {
			tmp = pass[i];
			if (tmp + 1 == 10) {
				tmp = -1;
			}
			if (pass[i + 1] == tmp + 1) {
				strength = false;
			}
			else {
				strength = true;
				break;
			}
		}
	}


	if (strength == true) {
		cout << "Strong" << endl;
	}
	else {
		cout << "Weak" << endl;
	}

	return 0;
}

#else // !INCLUDED_MAIN

#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
template <class T>
//2�̗v�f�̍ő�l
bool chmax(T& a, const T& b) {
	if (a < b) {
		a = b;
	}
	return a < b;
}

//2�̗v�f�̍ŏ��l
template <class T>
bool chmin(T& a, const T& b) {
	if (b < a) {
		a = b;
	}
	return b < a;
}

//vector�̗v�f���W�����͂���
template <class T>
void tmpCin(vector<T>& vec) {
	for (int i = 0; i < (int)vec.size(); i++) {
		cin >> vec.at(i);
	}
}

//string���t���ɂ��ĕԂ�
template <class T>
string reverseStr(T str) {
	string strR = str;
	reverse(strR.begin(), strR.end());
	return strR;
}

//�񕪔���
template <class T>
bool isPalindrome(T str) {
	int strSize = str.size();
	for (int i = 0; i < strSize; i++) {
		if (str[i] != str[strSize - i - 1]) {
			return false;
		}
	}
	return true;
}



#endif //INCLUDED_MAINN