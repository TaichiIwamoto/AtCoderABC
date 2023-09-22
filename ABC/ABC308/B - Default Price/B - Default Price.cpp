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
void fixedCin(vector<T>& vec) {
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
//vectorの標準出力
template <class T>
void vectorLog(const T& vec) {
	for (const auto& tmp : vec) {
		cout << tmp << " ";
	}
	cout << endl;
}

#endif //INCLUDED_MAINN