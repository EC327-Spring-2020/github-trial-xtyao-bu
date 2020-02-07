#include<iostream>

using namespace std;

int main()
{
	int num=0;

	cout<<"give me a number: "<<endl;

	cin>>num;

	num=(num*4+6)/(3+(num%2))-num;

	cout << num << endl;

	return 0;
}

