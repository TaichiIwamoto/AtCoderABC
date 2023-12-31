#ifndef INCLUDED_MAIN
#define INCLUDED_MAIN

#include __FILE__

int main()
{
	vector<int> vec(8);
	tmpCin(vec);
	for (int i = 0; i < vec.size() - 1; i++) {
		if (vec[i] > vec[i + 1]) {
			cout << "No" << endl;
			return 0;
		}
	}

	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] < 100 || vec[i] > 675) {
			cout << "No" << endl;
			return 0;
		}

		if (vec[i] % 25 != 0) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
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