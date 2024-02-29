class Solution {
public:
    bool isPowerOfFour(int n) { 
        if(n<=0) return false;
        if(n==1) return true;
        if(n%4!=0) return false;
        bool y=isPowerOfFour(n/4);
return y;
}
};