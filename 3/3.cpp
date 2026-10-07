#include <iostream>
using namespace std;
int main()
{
	int  i = 1;
	while (i <= 10)
	{
		int c = 1;
		while (c <= i)
		{
			cout << c << "*" << i << "=" << c * i <<"\t";
			c = c + 1;
		}
		cout << endl;
		i++;
	}
	return 0;
};
