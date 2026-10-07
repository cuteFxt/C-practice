#include <iostream>
using namespace std;
int main()
{
	int a;
	cout << "反转" << endl;
	cin >> a;
	while (a > 0)
	{
		cout << a % 10;
		a /= 10;
	}
	cout <<  endl;
	return 0;

}