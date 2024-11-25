#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int r, l, mid, ans;
    double p, q, num;
    scanf("%lf %lf", &p, &q);
    p = p / 100.0;
    q = q / 100.0;
    for (int i = 0;; i++)
    {
        l = 1;
        r = i;
        while (l <= r)
        {
            mid = (l + r) / 2;
            num = double(mid) / double(i);
            if (num > p)
            {
                r = mid - 1;
                ans = mid;
            }
            else
                l = mid + 1;
        }
        num = double(ans)/i;
        if(num < q)
        {
            printf("%d\n",i);
            cin >> num;
            return 0;
        }
    }
    cin >> r;
    return 0;
}
