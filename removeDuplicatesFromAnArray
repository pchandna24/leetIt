class Solution {
    
    bool hero(vector<int> checker,int num){
        for(int i=0;i<checker.size();i++){
            if(checker[i]==num){
                return true;
            }
        }
        return false;
    }
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> check;
        for(int i=0;i<nums.size();i++){
            if(hero(check,nums[i])){
                continue;
            }
            else{
                check.push_back(nums[i]);
            }
        }
        nums.clear();
        for(int i=0;i<check.size();i++){
            nums.push_back(check[i]);
        }
 return check.size();
    }
};
