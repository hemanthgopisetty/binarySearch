/**
 * Find first element greater than target
 *
 *
 */
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int firstGreaterThan(vector<int> &nums, int x)
    {
        sort(nums.begin(), nums.end());
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (nums[mid] > x)
            {
                // nums[mid] is potential answer
                // as mid is greater than x
                // we are reaching
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return ans;
    }
};
int main()
{
    vector<int> a{8,4,7};
    int x = 10;
    Solution sol;
    int result = sol.firstGreaterThan(a, x);
    cout << "First Element Greater than Target " << x << " is " << (result != -1 ? a[result] : a[a.size() - 1]) << endl;

    return 0;
}

/***************************************************
 * find first element greater than target
 *
 *
 * 1,2,3,4,5 -> [] , x = 6
 * ans -> 5
 *
 *
 * 8,4,7 -> [] , x = 10
 * ans -> 8
 *
 *
 * 8,4,7 -> [] , x = 5
 * ans -> 7
 *
 *
 * 8,4,7 -> [] , x = 1
 * ans -> 4
 *
 *
 *
 *
 *
 ***************************************************/