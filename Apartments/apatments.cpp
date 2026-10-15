#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    int n, m, k, i, j;
    int counter;
    int desired_size;
    int size_of_appartments;

    i = 0;
    j = 0;
    counter = 0;
    cin >> n >> m >> k;
    vector<int> arr_desired(n);
    vector<int> arr_size_of_app(m);

    if ((1 <= n && n <= 2 * 100000) && (1 <= m && m <= 2 * 100000))
    {
        for (i = 0; i < n; i++)
        {
            cin >> desired_size;
            if (1 <= desired_size && desired_size <= 1000000000)
                arr_desired[i] = desired_size;
        }
        sort(arr_desired.begin(), arr_desired.end());

        for (i = 0; i < m; i++)
        {
            cin >> size_of_appartments;
            if ((1 <= size_of_appartments) && (size_of_appartments <= 1000000000))
                arr_size_of_app[i] = size_of_appartments;
        }
        sort(arr_size_of_app.begin(),arr_size_of_app.end());
        
        i = 0;
        j = 0;
        while (i < n && j < m)
        {
            if ((arr_desired[i] - k <= arr_size_of_app[j]) && (arr_size_of_app[j] <= arr_desired[i] + k))
            {
                i++;
                j++;
                counter++;
            }
            else if (arr_desired[i] - k > arr_size_of_app[j])
                j++;
            else
                i++;
        }
    }
    cout << counter << endl;
    return (0);
}
