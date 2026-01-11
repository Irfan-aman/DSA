#include <bits/stdc++.h>
using namespace std;
int maxSubarraySumK(vector<int> arr, int k)
{
    int ans = -1, sum = 0, i = 0, j = 0;
    while (j < arr.size())
    {
        sum += arr[j];
        if (j - i + 1 < k)
            j++;
        else if (j - i + 1 == k)
        {
            ans = max(ans, sum);
            sum -= arr[i];
            i++;
            j++;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {3, 8, 5, 1, 4, 6, 4, 2, 8, 5, 4};
    cout << "Max Sum Subarray of size k : " << maxSubarraySumK(arr, 3);
    return 0;
}