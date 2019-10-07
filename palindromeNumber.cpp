class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long int temp=x;
        long long int find=0;
         if(x>0){
            while(x>0){
                find=find*10+ x%10;
                x=x/10;
            }
            if(temp==find){
                return true;
            }
            else{
                return false;
            }
        }
        else if(x==0){
            return true;
        }
        else{
            return false;
        }
        
    }
};
