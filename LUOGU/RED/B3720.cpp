#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long n;
    char a,b;
    cin >> n >> a >>b;
    int y = 10;
    if (a > b) swap(a, b);
    if (a == 'B') {
        if (b == 'C') {
            y = 6;
            } else {
                y = 8;
                }
            } else if (b == 'C') {
                y = 7;
            }
    cout << n/ 10 * y << endl;
    cin >> n >> a >> b;
}