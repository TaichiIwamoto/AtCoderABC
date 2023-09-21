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
//2‚Â‚Ì—v‘f‚ÌÅ‘å’l
bool chmax(T& a, const T& b) {
	if (a < b)a = b; return a < b;
}

//2‚Â‚Ì—v‘f‚ÌÅ¬’l
template <class T>
bool chmin(T& a, const T& b) {
	if (b < a)a = b; return b < a;
}

//vector‚Ì—v‘f•¶•W€“ü—Í‚·‚é
template <class T>
void tmpCin(vector<T>& vec) {
	for (int i = 0; i < vec.size(); i++) {
		cin >> vec.at(i);
	}
}

//string‚ğ‹t‡‚É‚µ‚Ä•Ô‚·
template <class T>
string reverseStr(T str) {
	string strR = str;
	reverse(strR.begin(), strR.end());
	return strR;
}

//‰ñ•ª”»’è
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