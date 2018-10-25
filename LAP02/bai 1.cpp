#include <iostream>
#include <conio.h>
using namespace std;
class phoneNumber
{
	private:
		int area;
		int exchange;
		int number;
	public:
		void Nhap();
		void Xuat();		
};
void phoneNumber::Nhap()
{
	cout<<"\nEnter area code, exchange and number: ";
	cin>>area>>exchange>>number;
	
}
void phoneNumber::Xuat()
{
	cout<<area<<"  "<<exchange<<"  "<<number<<"  "<<endl;
}
int main()
{
phoneNumber h;
h.Nhap();
h.Xuat();
getch();
}
