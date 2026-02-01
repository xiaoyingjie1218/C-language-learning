#include <bits/stdc++.h>  // 包含所有标准库头文件（竞赛常用写法）
using namespace std;      // 使用标准命名空间

int main()
{
	long long num = 0;    // 计数器，使用long long防止大输入数据溢出
	char c = 0;           // 用于存储每次读取的字符
	
	// 循环读取字符，直到文件结束(EOF)
	while( (c = getchar()) != EOF)
	{
		// 检查是否为数字字符
		if(c >= '0' && c <= '9')
		{
			num ++;  // 数字计数+1
		}
		// 检查是否为小写字母
		else if(c >= 'a' && c <= 'z')
		{
			num ++;  // 小写字母计数+1
		}
		// 检查是否为大写字母
		else if(c >= 'A' && c <= 'Z')
		{
			num ++;  // 大写字母计数+1
		}
	}
	
	cout << num << endl;  // 输出统计结果
	return 0;               // 程序正常结束
}
