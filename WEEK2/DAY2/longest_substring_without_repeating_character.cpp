class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
        return 0;

        
        int length,maxlength=0;
        for(int i=0;i<s.size();i++)
        {
            int hash[256]={0};
            for(int j=i;j<s.size();j++)
            {
                hash[s[j]]++;

                if(hash[s[j]]>1)
                break;

                length=j-i+1;

                maxlength=max(maxlength,length);
            }
           
        }
        return maxlength;
        
    }
};
