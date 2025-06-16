/**
 * Find Element  X in the given array
 *
 */

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool binarySearch(vector<int> &nums, int x)
    {
        sort(nums.begin(), nums.end());
        int low = 0;
        int high = nums.size() - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            cout << low << " " << high << " " << mid << endl;
            if (nums[mid] == x)
                return true;
            else if (nums[mid] < x)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return false;
    }
};
int main()
{
    vector<int> a{9, 8, 7, 6, 5, 4, 3, 2, 1};
    int x = 4;
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
 * Binary search operates on a fundamental principle: 
 * it repeatedly divides the search interval in half.
 * 
 *  
 * It does this by 
 * comparing the target value 
 * to the 
 * middle element of the current interval. 
 * 
 * 
 * 
 * If the target is less than the middle element, 
 * it knows the target must be in the left half.
 * 
 * 
 * 
 * If the target is greater than the middle element, 
 * it knows the target must be in the right half.
 * 
 * 
 * If the target is equal to the middle element, 
 * it has found the element.
 * 
 * 
 * 
 * This logic only holds true if the data is sorted.
 * 
 * 
 * 
 * if we don't sort then that won't be logarathamic
 * or 
 * result can be incorrect
 * 
 * 
 */