#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
	int a[] = {2, 20, -1};
	sort(a, a + 3);
	reverse(a, a + 3);

	for(int i = 0; i < 3; i++)
		cout << a[i] << " ";

	return 0;
}