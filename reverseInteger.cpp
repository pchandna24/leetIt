class Solution {
public:
    int reverse(int x) {
       
        long long int y=0;
        int temp=x;
        int i=0;
        while(x!=0){
            int t=x%10;
            y=y*10 + t;
            i++;
            x=x/10;
        }
        if(y>pow(2,31)-1){
            y=0;
        }
        if(y<=-1*pow(2,31)){
            y=0;
        }
      return y;
    }
};
