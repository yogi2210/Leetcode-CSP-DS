Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.

 

Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]


// recursive method
class Solution {
public:
     void helper(vector<char>& s, int left,int right){
         if(left >= right){
             return;
         }
         swap(s[left++], s[right--]);
         helper(s, left, right);
     }

    void reverseString(vector<char>& s) {
        helper(s, 0, s.size()-1);
    }
};

// iterative method with two pointers
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int i = 0, j = n-1;
        while(i < j){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
            
        }
    }
};