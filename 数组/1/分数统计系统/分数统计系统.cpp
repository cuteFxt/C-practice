#include <iostream>
using namespace std;
int main() {
	int a[100],n,i,m;
	cin>>n;
	for (i = 0;i < n;i++)
		cin >> a[i];
		//输入
	cout << "原始成绩";
	for (i = 0;i < n;i++)
		cout << a[i]<<"  ";  
	cout << endl;//yuanshi
	int max = a[0], min = a[0],pass=0,sum=0;
	for(i=0;i<n;i++)
	{
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
		if (a[i] >= 60) pass = pass + 1;
		sum += a[i];
	}
	for (m = 0;m < n-1;m++)
	{
		for (i = 0;i<n-1-m;i++) {
			if (a[i] > a[i + 1])
			{
				int j = a[i];
				a[i] = a[i + 1];
				a[i + 1] = j;
			}
		}
	}
	cout << "顺序排列" << "  ";
	for (i = 0;i < n;i++)
		cout << a[i] << "  ";
	cout << endl;
	cout << "最高分" << max << "最低分" << min << endl;
	cout << "及格人数" << pass << endl;
	cout << "平均分" << (double)(sum) / n << endl;
	 
	return 0;

}