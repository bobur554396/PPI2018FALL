#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	/*
	hello123 cpp5c++
	1235
	*/
	string s;
	getline(cin, s);
	for(int i = 0; i < s.size(); i++)
		if(isdigit(s[i]))
			cout << s[i];

	return 0;
}