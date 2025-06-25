/**
 * 
 * 
 */

 #include <bits/stdc++.h>
 using namespace std ;
 class Solution{
    public :
    int LowerBound(vector<int>&a,int target){
        int low=0;
        int high = a.size()-1;
        int ans =-1 ;
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(a[mid]>=target)
            {
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans ;
    }
 };
 int main()
 {
    vector<int>a{1,3,4,7};
    int x=2;
    Solution sol;
    int result  = sol.LowerBound(a,x);
        cout << "Lower Bound of" << x << " is " << (result != -1 ? a[result] : -1 )<< endl;
    return 0;
 }

 /**
  * 
  * 
  * 
  * lower bound -> greater than or equal to the target
  * upper bound -> greater than the target 
  * 
  * lb-1 -> lower than the target
  * 
  * ub-1 -> lower than or equal to the target
  * 
  * 
  * 
  */
