/**
 *
 * given a non negative integer x
 * return the square root of x  rounded down
 * to the nearest integer
 *
 *
 *
 */
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 1 or x == 0)
            return x; // since square root of o and 1 is number it self

        // create a search space and use binary search principle
        int low = 1;
        int high = x;
        int ans = -1;
        while (low <= high)
        {
            // calculate the mid
            int mid = low + (high - low) / 2;
            // check the mid
            long long square = static_cast<long long>(mid) * mid;
            if (square < x)
            {
                ans = mid;
                low = mid + 1;
            }
            else if (square == x)
                return mid;
            else
                high = mid - 1;
        }
        return ans;
    }
};
int main()
{
    Solution sol;
    int result = sol.mySqrt(8);
    cout << result << endl;
    return 0;
}

/**
 *
 * to solve this we are using binary search to find the sqroot
 *
 * how
 *
 * we are searching answer it self using binary search principle
 * which means sort things , check mid , reduce and increase search space
 *
 * this is the principle
 *
 * the same we are using here also
 *
 * from 1 to x this is our search space
 * check mid -> square the mid check lesser than x or not
 * if it's lesser or greater reduce/shrink the search space that its the concept
 */