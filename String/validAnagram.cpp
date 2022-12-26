Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26] = {0};
        for(char ch : s){
            count[ch-'a']++;
        }

        for(char ch : t){
            count[ch-'a']--;
        
        }

        for(int i = 0; i < 26; i++){
            if(count[i] != 0){
                return false;
            } 
        }
        return true;
    }
};