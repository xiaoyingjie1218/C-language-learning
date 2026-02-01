#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int T, n;
	cin >> T;
	while (T--) {
		cin >> n;
		double sum = 0;
		int minn = 1001;
		int maxx = -1;
		vector<int> nums(n, 0);
		for (int i = 0; i < n; i++) {
			cin >> nums[i];
			minn = min(minn, nums[i]);
			maxx = max(maxx, nums[i]);
			sum += nums[i];
		}

		double res = 0;
		double avr = sum / n;
		for (int& x : nums) {
			res += (x - avr) * (x - avr);
		}

		printf("%d %.3lf\n", maxx - minn, res / n);

	}
	return 0;
}
