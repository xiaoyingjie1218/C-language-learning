#include <bits/stdc++.h>  // 包含所有标准库头文件
using namespace std;      // 使用标准命名空间

int main()
{
	long long n;          // 声明变量n，用于存储输入的上限值
	cin >> n;             // 从标准输入读取n的值
	
	// 循环从1到n
	for(int i = 1; i <= n; ++i)
	{
		// 判断条件：如果数字能被4整除 或者 包含数字'4'
		if(i % 4 == 0 || to_string(i).find("4") != string::npos)
			continue;     // 满足条件则跳过当前数字
		else
			cout << i << "\n";  // 否则输出该数字
	}
	return 0;             // 程序正常结束
}
