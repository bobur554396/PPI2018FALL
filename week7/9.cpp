#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int square(int a){
	return a * a;
}

int main(){
	int n;
	cin >> n;
	int res = square(n);
	cout << res;
	return 0;
}
