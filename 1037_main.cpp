#include<iostream>
//#include<algorithm>
using namespace std;
#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)

int main() {
	int N;
	cin >> N;
	int max_ = 0, min_ = 10000000;

	while (N--) {
		int i;
		cin >> i;
		max_ = max(max_, i);
		min_ = min(min_, i);
	}
	cout << max_ * min_ << endl;
	return 0;
}