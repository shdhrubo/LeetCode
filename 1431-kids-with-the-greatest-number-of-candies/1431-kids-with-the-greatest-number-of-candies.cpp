class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> output;
        int maxValue = (candies.empty()) ? 0 : *max_element(candies.begin(), candies.end());
            for(int j=0;j<candies.size();j++){
             if((candies[j]+extraCandies)>=maxValue){
                    output.push_back(true);
            }
             else{
                 output.push_back(false);
                }            
    }
         return output;
    }
};