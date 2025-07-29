/**
 * Question is to find the single element in sorted array where that array contains
 * duplicates of each element twice
 *
 */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int linearSolution(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        for (int i = 0; i < n; i += 2)
        {
            if (nums[i] != nums[i + 1])
                return nums[i];
        }
        return 0;
    }
    int hashMap(vector<int> &nums)
    {
        return 0;
    }
    int hashSet(vector<int> &nums)
    {
        return 0;
    }
    int bitManipulation(vector<int> &nums)
    {
        return 0;
    }
    int binarySearch(vector<int> &nums)
    {
        return 0;
    }

private:
};

int main()
{
    vector<int> nums{1, 1, 2, 3, 3};

    Solution sol;
    int result = sol.linearSolution(nums);
    cout << "LinearSearch : " << result << endl;
    result = sol.hashMap(nums);
    // cout << "Hashmap : " << result << endl;
    // result = sol.hashSet(nums);
    // cout << "Hashset : " << result << endl;
    // result = sol.bitManipulation(nums);
    // cout << "Bit Manipulation : " << result << endl;
    // result = sol.binarySearch(nums);
    // cout << "Binary Search : " << result << endl;
    return 0;
}
/**
 * We can solve this using
 * Linear Search,Hashmap,HashSet,Bit Manipulation,Binary Search
 *
 *
 *
 * Linear Search
 * If the elements in the order are not matching then return the index which doesn;t mat itself
 */