/**
 * Find Element  X in the given array
 *
 */

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool bsRecu(vector<int> &nums, int x, int low, int high)
    {
        if (low > high)
            return false;

        int mid = low + (high - low) / 2;
        if (nums[mid] == x)
            return true;
        if (nums[mid] < x)
            return bsRecu(nums, x, mid + 1, high);
        else
            return bsRecu(nums, x, low, mid - 1);
    }
    bool binarySearch(vector<int> &nums, int x)
    {
        sort(nums.begin(),nums.end());
        return bsRecu(nums, x, 0, nums.size() - 1);
    }
};
int main()
{
    vector<int> a{9, 8, 7, 6, 5, 4, 3, 2, 1};
    int x = 1;
    Solution sol;
    bool result = sol.binarySearch(a, x);
    if (result)
    {
        cout << "We found the value " << x << endl;
    }
    else
    {
        cout << "There is no element called X in the given array\n";
    }
    return 0;
}

/**
 *
 * Data Should be sorted
 * Recursive Approach
 */