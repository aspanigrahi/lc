class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcnt=0,cnt=0;
        for(auto i:nums){
            if(i==1){
                cnt++;
                maxcnt=max(cnt,maxcnt);
            }
            else cnt=0;
        }
        return maxcnt;
    }
};