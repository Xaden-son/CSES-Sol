#include <iostream>
using namespace std;

void    solution(long long n)
{
	if (n != 1)
		cout << n << " ";
    if (n == 1)
	{
		cout << n;
		return;
	}
	if (!((n % 2) == 0))
	{
		n = (n * 3) + 1;
		solution(n);
	}else
	{
		n = n / 2;
		solution(n);
	}
}

int main(void)
{
	long long n;
	cin >> n;

    solution(n);
    return (0);
}
