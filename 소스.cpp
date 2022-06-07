/*
#include<iostream>
using namespace std;
int main()
{
	cout << "* * * * * * * * * *		   \n*                 *\n*                 *\n*                 *\n*                 *\n*                 *\n*                 *\n*                 *\n*                 *\n* * * * * * * * * *" << endl;
	cout << "* * * * * * * * * *" << endl;
	cout << "*                 *" << endl;
	cout << "*                 *" << endl;
	cout << "*                 *" << endl;
	cout << "*                 *" << endl;
	cout << "*                 *" << endl;
	cout << "*                 *" << endl;
	cout << "*                 *" << endl;
	cout << "*                 *" << endl;
	cout << "* * * * * * * * * *" << endl;
}

#include <iostream>
#include <bitset>

using namespace std;
int main()
{
	int A = 5;
	int B = 5;
	cout << "A is ?" << endl;
	cout << "B is ?" << endl;
	cout << hex << A + B << endl;

}

int main()
{
	int a, b = { 0 };
	cout << "A is ?" << endl;
	cin >> a;
	cout << "B is ?" << endl;
	cin >> b;
	cout << hex << a + b << endl;
}

#include <iostream>
#include <bitset>

using namespace std;
int main()
{
	int a, b = { 0 };
	cout << "A is ?";
	cin >> a;
	cout << "B is ?";
	cin >> b;
	bool result = false;
	result = (b > a) ? false : true;
	result = (a > b) ? true : false;
		cout << "Reulst =" << boolalpha << result << noboolalpha  << result << " a - b = " << a - b << endl;
}

#include <iostream>
#include <bitset>

using namespace std;
int main()
{
	int a, b, c = { 0 };
	cout << "A is ?" << endl;
	cin >> a;
	cout << "B is ?" << endl;
	cin >> b;
	cout << "C is ?" << endl;
	cin >> c;
	cout << "Result = " << boolalpha << (a - b - c) << noboolalpha << endl;
	if (a + b > c)
	{
		cout << a + b << endl;
	}
	else if (a + b < c)
	{
		cout << c << endl;
	}
	else 
	{ 
		cout << "a + b = c" << endl;
	}
}

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	cout << "a = 2진수 : 10101010" << endl;
	cout << "b = 8진수 : 111" << endl;
	cout << "c = 16진수 : ff" << endl;
	cout << "a+b-c를 출력하시오" << endl;

	cout << "10101010" << bitset<32> << endl;
	cout << "111" << oct << endl;
	cout << "ff" << hex << endl;
int main()
{
	int  a = 0b10101010;
	int b = 0111;
	int c = 0xFF;
	cout << a + b - c;
}

int main()
{
	int a, b, c = { 0 };
	cout << "A is ?" << endl;
	cin >> a;
	cout << "B is ?" << endl;
	cin >> b;
	cout << "C is ?" << endl;
	cin >> c;
	bool result = false;
	result = (c > a && a > b) ? true : false;
	cout << "Reulst = " << boolalpha << result << noboolalpha << result <<  b << endl;
}
*/