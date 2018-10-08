#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	// 12
	// 2 3 4 6
	int n;
	cin >> n;
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
		
}
