class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        
        int left=0,right=k-1;
        int sum=0;

        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        double maxavg =(double)sum/k;
        while(right<n-1)
        {
            sum=sum-nums[left];
            left++;

                right++;

            sum=sum+nums[right];
        

         double average= (double)sum/k;

            maxavg=max(maxavg,average);


        }
        return maxavg;
        
    }
};
