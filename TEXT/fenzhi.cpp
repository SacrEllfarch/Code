#include<iostream>
using namespace std;
#define MAXN 15

int Partition(int a[], int s, int t) {
int i = s, j = t;
int temp = a[s];
while (i != j) {
while (j > i && a[j] >= temp)
j--;
a[i] = a[j];
while (i < j && a[i] <= temp)
i++;
a[j] = a[i];
}
a[i] = temp;
return i;
}

int Solve(int a[], int s, int t, int k) {
if (s < t) {
int i = Partition(a, s, t);
if (k - 1 == i)
return a[i];
else if (k - 1 < i)
return Solve(a, s, i - 1, k);
else
return Solve(a, i + 1, t, k);
} else if (s == t && s == k - 1)
return a[k - 1];
return -1; // 错误情况
}

int main() {
int n, k;
int a[MAXN];
cout << "请输入数组的大小：";
cin >> n;
cout << "请依次输入数组数据：";
for (int i = 0; i < n; i++)
cin >> a[i];
cout << "请输入查找第几小的元素：";
cin >> k;
cout << "第" << k << "小的元素为：" << Solve(a, 0, n - 1, k) << endl;
return 0;
}