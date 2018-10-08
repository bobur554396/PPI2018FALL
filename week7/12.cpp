#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int factorial(int n){
	int f = 1;
	for(int i = 1; i <= n; i++)
		f *= i;
	return f;
}

int main(){
	int n;
	cin >> n;
	int res = factorial(n);
	cout << res << endl; 
	return 0;
}
