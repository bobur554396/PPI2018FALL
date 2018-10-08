#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

void greeting(string a){
	cout << "Welcome " << a;
}

int main(){
	string s;
	cin >> s;
	greeting(s);

	return 0;
}