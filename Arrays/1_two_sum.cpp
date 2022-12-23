Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++){

            
            if(mp.find(nums[i]) == mp.end()){
                mp[nums[i]] = i;
            }

            if(mp.find(target-nums[i]) != mp.end() && i != mp[target-nums[i]] ){
                res.push_back(i);
                res.push_back(mp[target-nums[i]]);
                break;
            }
            
        }
    return res;

    }
};

// [2,7,11,15]

// vector<int> res;
//      unordered_map<int, int> mp;

//      for(int i = 0; i < nums.size(); i++){

//          if(mp.find(target- nums[i]) != mp.end()){
//              res.push_back(mp[target-nums[i]]);
//              res.push_back(i);
//              return res;
//          }
//          mp[nums[i]] = i;
         
//      }
//      return res;


