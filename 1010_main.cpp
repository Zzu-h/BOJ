#include<iostream>
using namespace std;

int recursive(int n, int m) {
	if (n == m)
		return 1;
	else if (n == 1)
		return m;
	else {
		int count = 0;
		for (int i = m-1; i >= n-1; i--) {
			count += recursive(n-1, i);
		}
		return count;
	}
}


int main() {
	
	int T;
	cin >> T;
	while (T--) {
		int N, M;
		cin >> N >> M;
		cout << recursive(N, M) << endl;
	}

	return 0;
}