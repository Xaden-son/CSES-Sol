#include <iostream>
using namespace std;

int main(void)
{
    int i;
    int n;
    int m;
    int arr[100];
    int current_distinct_num;

    cin >> n;
    if (1 <= n && n <= (2 * 100000))
    {
        current_distinct_num = 0;
        for (i = 0; i < n; i++)
        {
            cin >> m;
            arr[i] = m;
            if (arr[i] != arr[i + 1])
                current_distinct_num++;
        }
        cout << current_distinct_num << endl;
    }
    return (0);
}
