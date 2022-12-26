// Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

 

// Example 1:

// Input: s = "leetcode"
// Output: 0
// Example 2:

// Input: s = "loveleetcode"
// Output: 2


// using extra array
class Solution {
public:
    int firstUniqChar(string s) {
        int count[26];
        for(int i = 0; i < 26; i++) count[i] = 0;

        for(int i = 0; i < s.length(); i++) count[s[i] - 'a']++;

        for(int i = 0; i < s.length(); i++) 
            if(count[s[i] - 'a'] == 1) return i;
        
        
        return -1;
    }
};

// using hash map
class Solution {
public:
    int firstUniqChar(string s) {
        map<int, int> mp;
        for(int i = 0; s[i] != '\0'; i++){
           if( mp[s[i]] > 0){
              mp[s[i]]++;
               
           }else{
               mp[s[i]] = 1;
           }
        }
        for(int i = 0; s[i] != '\0'; i++){
            if(mp[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};

  