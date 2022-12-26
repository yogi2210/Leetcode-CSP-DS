Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.

 

Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false
Example 2:

Input: ransomNote = "aa", magazine = "ab"
Output: false



// solution 1 
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26];
        int count2[26];
        int m = magazine.length();
        int r = ransomNote.length();
        for(int i = 0; i < 26; i++ ) count[i] = 0;
        for(int i = 0; i < 26; i++ ) count2[i] = 0;

        for(int i = 0; i < m; i++){
            count[magazine[i] - 'a']++;
        }

         for(int i = 0; i < r; i++){
            count2[ransomNote[i] - 'a']++;
        }
        for(int i = 0; i < r; i++){
            if(count[ransomNote[i] - 'a'] < count2[ransomNote[i] - 'a']){
                return false;
            }
        }

        return true;
    }
};

// solution 2: same principle but executed in concise manner

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
      
      int count[26] = {0};
      for(char ch : magazine){
          count[ch - 'a']++;
      }

      for(char ch : ransomNote){
          if(count[ch - 'a']-- <= 0) return false;
      }
      return true;
    }
};
