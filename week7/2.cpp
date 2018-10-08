#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	// char c;
	// cin >> c;

	// cout << (char)toupper(c) << endl;
	string s;
	cin >> s;
	for(int i = 0; i < s.size(); i++)
		s[i] = toupper(s[i]);
	
	cout << s << endl;		
	return 0;
}