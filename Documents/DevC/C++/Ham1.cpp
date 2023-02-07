#include<iostream>
#include<cmath>
using namespace std;
 double round(double x)
{
	double result;
	if(x>0)
		result= floor(x+0.5);
	else
		result= -floor(-x +0.5);
	return result;
}
int main()
{
	double a, y;
	cout<<"Input a=";
	cin>>a;
	y= round(a);
	cout<<"round(a) = "<<y;
	return 0;
}
