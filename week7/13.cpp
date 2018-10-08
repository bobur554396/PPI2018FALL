#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

bool isDigit(char c){
	if(c >= '0' && c <= '9')
		return 1; // true
	return 0; // false
}

int main(){
	char c;
	while(true){
		cin >> c;
		if(c == 'q')
			break;
		if(isDigit(c))
			cout << "digit\n";
		else
			cout << "not digit\n";
	}

	return 0;
	
}
