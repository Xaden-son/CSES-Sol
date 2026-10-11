#include <iostream>
#include <ostream>
using namespace std;

long long cal_sum(long long n)
{
    long long sum;

    sum = n*(n+1) / 2;
    return (sum);
}

int main(void)
{
    long long n;
    int m;
    int sum1;
    int sum2;
    int missing_num;

    cin >> n;
    sum1 = cal_sum(n);
    if (2 <= n && n <= (2 * 100000))
    {
        sum2 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> m;
            sum2 = m + sum2;
        }
        if (sum1 != sum2)
            missing_num = sum1 - sum2;
        cout << missing_num << endl;
    }
    return (0);
}
