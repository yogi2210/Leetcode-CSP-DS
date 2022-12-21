#include <unordered_map>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool>umap;
        for(int i =0; i < nums.size(); i++){
            if(umap[nums[i]] == true){
                return true;
                break;
            }else{
                umap[nums[i]] = true;
            }
        }
        return false;



        

    }
};

// nlogn solution

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size()-1;
        for( int i = 0; i < n; i++){
            if(nums[i] == nums[i+1]){
                return true;
            }
        }
        return false;
    }
};

