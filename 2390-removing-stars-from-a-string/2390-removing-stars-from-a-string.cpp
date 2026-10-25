class Solution {
public:
    string removeStars(string s) {
        string ans;
        for(char ch:s)
        {
            if(ch=='*')
                ans.pop_back();
            else
                ans.push_back(ch);
        }
        return ans;
        

        
        // for(int i=0;i<s.size();i++)
        // {
        //     if(s[i]=='*')
        //     {
        //         s.erase(i-1,2);
        //         i=0;
        //     }
        // }
        // return s;
    }
};