#include<iostream>
using namespace std;
class area
{
	public:
		void area(int s)
		{
			cout<<"area of square ="<<s*s<<endl;
		}
		void area(int l , int b)
		{
			cout<<"area of rectangle="<<l*b<<endl;
		}
		void area(float r)
		{
			cout<<"area of circles="<<3.14*r*r<<endl;
		}
		void area(int b,int h)
		{
			cout<<"area of triangle="<<(float)1/2*(b*h)<<endl;
		}
};
int main()
{
	area A
	A.area(4);
	A.area(3,2);
	A.area(5.4);
	A.area(5,6);
	return 0;
}
