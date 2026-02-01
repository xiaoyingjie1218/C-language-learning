#include <iostream>
using namespace std;

int main() {
	int k, n;
	cin >> k >> n;
	
	long long result = 0;
	long long power = 1;  // 当前k的幂次，从k⁰=1开始
	
	// 处理n的每一位二进制位
	while (n > 0) {
		// 如果当前二进制位为1，加上对应的k的幂次
		if (n & 1) {
			result += power;
		}
		// 右移一位，处理下一个二进制位
		n >>= 1;
		// 计算k的下一个幂次
		power *= k;
	}
	
	cout << result << endl;
	return 0;
}
