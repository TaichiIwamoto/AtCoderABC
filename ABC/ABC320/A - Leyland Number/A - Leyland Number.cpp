#ifndef INCLUDED_MAIN
#define INCLUDED_MAIN

#include __FILE__

int main()
{
	vector<int> vec(2);
	tmpCin(vec);
	int calc = pow(vec[0], vec[1]) + pow(vec[1], vec[0]);
	cout << calc;
	return 0;
}

#else // !INCLUDED_MAIN

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
template <class T>
//2つの要素の最大値
bool chmax(T& a, const T& b) {
	if (a < b)a = b; return a < b;
}

//2つの要素の最小値
template <class T>
bool chmin(T& a, const T& b) {
	if (b < a)a = b; return b < a;
}

//vectorの要素文標準入力する
template <class T>
void tmpCin(vector<T>& vec) {
	for (int i = 0; i < vec.size(); i++) {
		cin >> vec.at(i);
	}
}

#endif //INCLUDED_MAIN