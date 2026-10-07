// class Solution {
// public:

//     int expand(int left,int right)
//     {
//         while(left>=0 && right<n && s[left]==s[right])
//         {
//             left--;
//             right++;
//         }
//         return right-left-1;
//     }
//     string longestPalindrome(string s) {
//         for(int i=1;i<s.size()-1;i++)
//         {
//             if(s[i-1]==s[i+1])
//         }      
//     }
// };

class Solution {
public:
    string longestPalindrome(string s) {

        string ans = "";

        for (int i = 0; i < s.size(); i++) {

            // Odd length palindrome
            int left = i;
            int right = i;

            while (left >= 0 && right < s.size() &&
                   s[left] == s[right]) {

                if (right - left + 1 > ans.size()) {
                    ans = s.substr(left, right - left + 1);
                }

                left--;
                right++;
            }

            // Even length palindrome
            left = i;
            right = i + 1;

            while (left >= 0 && right < s.size() &&
                   s[left] == s[right]) {

                if (right - left + 1 > ans.size()) {
                    ans = s.substr(left, right - left + 1);
                }

                left--;
                right++;
            }
        }

        return ans;
    }
};