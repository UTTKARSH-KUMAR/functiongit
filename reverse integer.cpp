#include<stdio.h>
#include <limits.h>
class Solution {
public:
    int reverse(int x) {
        int sol=0;
        
        while(x!=0){
            int digit = x % 10;
            if(( sol > INT_MAX/10 )||(sol < INT_MIN/10)){
                return 0;
            }
            sol=(sol*10)+digit;
            x=x/10;
            
        }
    return sol;
        
    }
};