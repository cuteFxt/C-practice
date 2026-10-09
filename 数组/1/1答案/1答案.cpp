#include <iostream>
using namespace std;

int main()
{
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];      // ① 读入

    cout << "原始成绩：";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;

    int maxv = a[0], minv = a[0];                 // ② 最值用 a[0] 初始化
    int sum = 0, pass = 0;                        // 总和、及格计数器
    for (int i = 0; i < n; i++)                   // 一趟遍历求出全部统计量
    {
        if (a[i] > maxv) maxv = a[i];
        if (a[i] < minv) minv = a[i];
        sum += a[i];
        if (a[i] >= 60) pass++;
    }
    cout << "最高分：" << maxv << " 最低分：" << minv << endl;
    cout << "平均分：" << (double)sum / n << endl;
    cout << "及格人数：" << pass << endl;

    cout << "逆序输出：";
    for (int i = n - 1; i >= 0; i--)              // ③ 从末位倒着读
        cout << a[i] << " ";
    cout << endl;

    return 0;
}
