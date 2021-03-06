#include<iostream>
#include<vector>
#include<string>

using namespace std;


class Solution {
public:
    bool canPermutePalindrome(string s) {
        
        vector<int> count(256, 0);
        
        for(int i=0; i<s.size(); i++)
        {
            count[s[i]]++;
        }
        
        int countOdd=0;
        
        for(auto n:count)
        {
            if(n&1)
            {
                countOdd++;
            }
        }
        
        if(countOdd>1)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};

int main()
{
    Solution sol;
    string s="aab";
    cout<<sol.canPermutePalindrome(s)<<endl;
    return 0;
}
