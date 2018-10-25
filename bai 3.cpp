#include <iostream>
#include <conio.h>
using namespace std;
float equivalnet(float a, char b, float c)
{
	if(b=='+')
		return a+c;
	if(b=='-')
		return a-c;
	if(b=='*')
		return a*c;
	if(b=='/')
		return a/c;
}
int main()
{
	float a;
	char b;
	float c;
	char d;
	do{
	cout<<"\nEnter first number, operator, second number :";
	cin>>a;
	cin>>b;
	cin>>c;
	cout<<"\nanswer= :"<<equivalnet( a, b, c);
	cout<<"do another";
	cin>>d;
	}while(d=='y');
	return 0;
}
