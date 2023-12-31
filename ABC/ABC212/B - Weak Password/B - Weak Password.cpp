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
	//条件1 全て同じ数
	for (int i = 0; i < 3; i++) {
		if (pass[i] != pass[i + 1]) {
			strength = true;

			break;
		}
		else {
			strength = false;
		}
	}
	//条件2 次の数字が+1
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
//2つの要素の最大値
bool chmax(T& a, const T& b) {
	if (a < b) {
		a = b;
	}
	return a < b;
}

//2つの要素の最小値
template <class T>
bool chmin(T& a, const T& b) {
	if (b < a) {
		a = b;
	}
	return b < a;
}

//vectorの要素文標準入力する
template <class T>
void tmpCin(vector<T>& vec) {
	for (int i = 0; i < (int)vec.size(); i++) {
		cin >> vec.at(i);
	}
}

//stringを逆順にして返す
template <class T>
string reverseStr(T str) {
	string strR = str;
	reverse(strR.begin(), strR.end());
	return strR;
}

//回分判定
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