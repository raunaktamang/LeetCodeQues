class Solution {
public:
    int reinitializePermutation(int n) {
        int res = 0 , i = 1;
        while(res ==0 || i>1){
            if( i < n/2)
                
                i = i*2;
            else
                i = i * 2 - (n-1) ;
            res ++;
        }
        return res;
        
    }
};