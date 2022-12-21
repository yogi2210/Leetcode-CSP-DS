Given an integer array nums, find the 
subarray
 which has the largest sum and return its sum.

 

Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.

// solution 1

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currMax = 0, maxTillNow = INT_MIN;

        for(auto i : nums){
            currMax = max(i, currMax+i);
            maxTillNow = max(maxTillNow, currMax);
        }
        return maxTillNow;
    
    }
};    


// solution 2

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currMax = 0;
        int maxTillNow = INT_MIN;

        for(int i = 0; i < nums.size(); i++){
            currMax += nums[i];
            if(maxTillNow < currMax){
                maxTillNow = currMax;
            }
            if(currMax < 0){
                currMax = 0;
            }
        }
        return maxTillNow;
        
    }
};