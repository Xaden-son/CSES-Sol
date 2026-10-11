#include <iostream>
using namespace std;

void    take_int(long long n)
{
	if(n != 1)
		cout << n << " ";
    if (n == 1)
	{
		cout << n;
		return;
	}
	if (!((n % 2) == 0))
	{
		n = (n * 3) + 1;
		take_int(n);
	}else
	{
		n = n / 2;
		take_int(n);
	}
}

int main(void)
{
	long long n;
	cin >> n;

	if (1 <= n && n <= 1000000)
		take_int(n);
    return (0);
}
