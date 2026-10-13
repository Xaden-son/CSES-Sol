#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int i;
    int n;
    int m;
    int current_distinct_num;
    
    current_distinct_num = 1;
    cin >> n;
    vector<int> arr(n);
    if (1 <= n && n <= (2 * 100000))
    {
        for (i = 0; i < n; i++)
        {
            cin >> m;
            arr[i] = m;
        }
        
        sort(arr.begin(), arr.end());

        for (i = 0; i < n; i++)
        {
            if (i > 0 && arr[i] != arr[i - 1])
                current_distinct_num++;
        }
    }

    cout << current_distinct_num << endl;
    return (0);
}
