class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        while(i<nums.size()){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
                i=0;
            }
            else{
                i++;
            }
        }

        return nums.size();
    }
};
