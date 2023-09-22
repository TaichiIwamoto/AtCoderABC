#ifndef INCLUDED_MAIN
#define INCLUDED_MAIN

#include __FILE__

int main()
{
	vector<int> amountInts(2);
	fixedCin(amountInts);
	vector<string> dishKindStrings(amountInts[0]);
	vector<string> uniqeDishStrings(amountInts[1]);
	vector<int> valueInts(amountInts[1] + 1);

	fixedCin(dishKindStrings);
	fixedCin(uniqeDishStrings);
	fixedCin(valueInts);
	bool match = false;
	int value = 0;
	for (int i = 0; i < amountInts[0]; i++) {
		for (int j = 0; j < amountInts[1]; j++) {
			if (dishKindStrings[i] == uniqeDishStrings[j]) {
				value += valueInts[j + 1];
				match = true;
			}
		}
		if (!match) {
			value += valueInts[0];
		}
		match = false;
		//cout << "value= " << value << endl;
	}
	cout << value << endl;

	/*vectorLog(amountInts);
	vectorLog(dishKindStrings);
	vectorLog(uniqeDishStrings);
	vectorLog(valueInts);*/
}

#else // !INCLUDED_MAIN

#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <any>
#include <sstream>
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
void fixedCin(vector<T>& vec) {
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
//vector�̕W���o��
template <class T>
void vectorLog(const T& vec) {
	for (const auto& tmp : vec) {
		cout << tmp << " ";
	}
	cout << endl;
}

#endif //INCLUDED_MAINN