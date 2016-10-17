#include<iostream>

using namespace std;

void Two(int&);
void One();

int main()
{
	int m = 5;
	Two(m);
	cout << m << endl;
	One();
	return 0;
}
void Two(int &x)
{
	x = 10;
	cout << x << endl;
}
void One()
{
	int y = 100;
	Two(y);
	cout << y << endl;
}
