/**
 * Think edge cases for your where this solution can be buggy
 * find bugs in your own code always
 */

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
        int n = nums.size();
        unordered_map<int, int> hm;
        for (int i = 0; i < n; i++)
            hm[nums[i]]++;
        for (auto it : hm)
        {
            if (it.second == 1)
            {
                return it.first;
            }
        }
        return 0;
    }
    int hashSet(vector<int> &nums)
    {
        unordered_set<int> hs;
        for (auto it : nums)
        {

            if (hs.count(it))
            {
                hs.erase(it);
            }
            else
            {
                hs.insert(it);
            }
        }

        return *(hs.begin());
    }
    int bitManipulation(vector<int> &nums)
    {
        int ans = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
            ans ^= nums[i];
        return ans;
    }
    int binarySearch(vector<int> &nums)
    {
        int l=0;
        int r=nums.size()-1;
        while(l<r){
            int mid = l+(r-l)/2;
            if(mid%2==1)mid--;
            if(nums[mid]!=nums[mid+1]){
                r=mid;
            }
            else{
                l=mid+2;
            }
        }
        return nums[l];
    }

private:
};

int main()
{
    vector<int>nums{1,1,2,2,3};

    Solution sol;
    int result=0;

    // result = sol.linearSolution(nums);
    // cout << "LinearSearch : " << result << endl;

    // result = sol.hashMap(nums);
    // cout << "Hashmap : " << result << endl;

    // result = sol.hashSet(nums);
    // cout << "Hashset : " << result << endl;

    // result = sol.bitManipulation(nums);
    // cout << "Bit Manipulation : " << result << endl;

    result = sol.binarySearch(nums);
    cout << "Binary Search : " << result << endl;

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
 *
 * Hashmap
 * It the element frequency is not more than 2 then return that element
 *
 * Hashset
 * If the element is found in the hashset then cross the element by removing and in the end whatever element
 * is found return that
 *
 * BitManipulation
 * Two same elements of xor cancel each other and results in zero , if we have one element that , only that
 * will be results in the xor value
 * 
 * Binary Search 
 * This solution comes by deep observation ,
 * as we can see single element sub array size is odd
 * where as pairs are even in size
 * so , element will be in even position where as it's duplicate is in odd position
 * and the same thing if element is in odd position it's mean the duplicate will be in an element before
 * that 
 * 
 * as this indicates us 
 * when this patterns is got missed 
 */