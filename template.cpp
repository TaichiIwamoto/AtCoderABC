#ifndef INCLUDED_MAIN
#define INCLUDED_MAIN

#include __FILE__

int main()
{

}

#else // !INCLUDED_MAIN

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
template <class T>
//2�̗v�f�̍ő�l
bool chmax(T& a, const T& b) {
	if (a < b)a = b; return a < b;
}

//2�̗v�f�̍ŏ��l
template <class T>
bool chmin(T& a, const T& b) {
	if (b < a)a = b; return b < a;
}

//vector�̗v�f���W�����͂���
template <class T>
void tmpCin(vector<T>& vec) {
	for (int i = 0; i < vec.size(); i++) {
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


#endif //INCLUDED_MAIN