
  class Solution {
public:
    bool isPowerOfThree(int n) { 
        if(n<=0) return false;
        if(n==1) return true;
        if(n%3!=0) return false;
        bool y=isPowerOfThree(n/3);
return y;
}
};