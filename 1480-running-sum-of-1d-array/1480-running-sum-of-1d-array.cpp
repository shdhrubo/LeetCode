class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> output;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j>=0;j--){
                sum=sum+nums[j];
            }
            output.push_back(sum);
        }
        return output;
        
    }
};