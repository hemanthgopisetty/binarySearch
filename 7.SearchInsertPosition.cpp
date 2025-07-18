/**
 * Given Sorted array , of distinct integers 
 * and a target value , return the index if the target is found
 * if the target is not found  return the index where the target can be inserted
 * in the sorted array in order
 */
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int low=0,high=nums.size()-1;

        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(nums[mid]==target)return mid;
            else if(nums[mid]<target)low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};
int main()
{
    vector<int> nums{1, 2, 3, 5, 6};
    Solution sol;
    int result = sol.searchInsert(nums, 4);
    cout << result << endl;
    return 0;
}

/**
 * Find the value in the sorted array if found return the index
 * and if it's not found 
 * then search the value where target can be inserted
 * 
 * from this question what we learn
 * how to set 
 *  loop condtion 
 *  and update the pointer's 
 *  by m+1 or m-1 or m
 * 
 * 
 * We have to update this by the nature of the question 
 * 
 * search for mid , if found
 * else return left since 
 *  
 */