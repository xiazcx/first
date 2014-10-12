using namespace std;
#include <iostream>

int main(int argc, char *argv[])
{
	string str1,str2,str3;
	cout<<"input string"<<endl;
	cin>>str1>>str2;
	cout<<str1<<str2<<endl;
	cout<<"input string"<<endl;
	while(cin>>str3)
		cout<<str3<<endl;
	return 0;
}
