#inlcude < bits / stdc++.h>
using namespace std;
void firstNegNoInEverywindK(vector<int> arr, int k)
{
    int ans = 0, idx = -1, nextAns = 0, nextIdx = -1, i = 0, j = 0;
    vector<int> neg;
    while (j < arr.size())
    {
        if (arr[j] < 0)
        {
            neg.push_back(arr[j]);
        }
        if (j - i + 1 < k)
            j++;
        else if (j - i + 1 == k)
        {
            cout << ans << " ";
            if ()
                i++;
            j++;
        }
    }
}
int main()
{
    vector<int> arr = {5, -2, 5, -6, -7, 3, -2, -7, 4};

    return 0;
}