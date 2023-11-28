class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxValue=0;
        for(string s:sentences){
            int m=1;
            for(int i=0;s[i]!='\0';i++){
                if(s[i]==' '){
                    m++;
                }
                maxValue=max(maxValue,m);
            }
        }
        return maxValue;
    }
};