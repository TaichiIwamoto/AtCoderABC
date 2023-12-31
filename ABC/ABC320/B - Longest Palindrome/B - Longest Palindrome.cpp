#ifndef INCLUDED_MAIN
#define INCLUDED_MAIN

#include __FILE__

int main()
{
		string str;
		cin >> str;
		int maxCount=0;
		int strSize = str.size();
		for (int k = 0; k < strSize; k++) {
			for (int i = k; i < strSize; i++) {
				string tmp = "";
				for (int j = 0; j < strSize - i; j++) {
					tmp.push_back(str[k + j]);
				}
				if (isPalindrome(tmp)) {
					if (tmp.size() > maxCount) {
						maxCount = tmp.size();
					}

				}
			}
		}
		cout << maxCount<<endl;
	return 0;
}

#else // !INCLUDED_MAIN

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

template <class T>
//2つの要素の最大値
bool chmax(T& max, const T& min) {
	if (max < min)max = min; return max < min;
}

//2つの要素の最小値
template <class T>
bool chmin(T& min, const T& max) {
	if (min < max)max = min; return min < max;
}

//vectorの要素文標準入力する
template <class T>
void tmpCin(vector<T>& vec) {
	for (int i = 0; i < vec.size(); i++) {
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

#endif //INCLUDED_MAIN