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
    int UpperBound(vector<int> &nums, int x)
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
    int result = sol.UpperBound(a, x);
    cout << "Upper Bound of" << x << " is " << (result != -1 ? a[result] : -1 )<< endl;

    return 0;
}

/***************************************************
 * find first element greater than target
 * which is nothing but the upper bound
 * bound means end
 * 
 * where as 
 * lower bound means -> greater than or  equal to the target
 * upper bound means -> strictly greater than the target(one past element to the target)
 * 
 * lb-1 -> strictyl lower than the target
 * ub-1 -> lower than or equal to the target
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