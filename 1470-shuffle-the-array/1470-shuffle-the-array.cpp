class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int x=n;
        vector<int> output;
        for(int i=0;i<n;i++){
            output.push_back(nums[i]);
            output.push_back(nums[x]);
            x++;
           
        }
        return output;
    }
};