#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		string a=to_string(i);//数字转字符串to_string()
		string c=a;//字符串复制
		reverse(c.begin(),c.end());//字符串反转reverse()
		if(a==c){
			cout<<a<<endl;
		}
	}
	return 0;
}
