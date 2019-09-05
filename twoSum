#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        return twoSum_1(nums,target);
    }
    
    vector<int> twoSum_1(vector<int>& nums,int target){
        vector<pair<int,int>> numbers(nums.size());
        for(int i=0;i<numbers.size();i++){
            numbers[i]=make_pair(nums[i],i);
        }
        sort(numbers.begin(),numbers.end(),compare);
        int l=0,r=numbers.size()-1;
        while(l<r){
            if(numbers[l].first+numbers[r].first==target)break;
            else if(numbers[l].first+numbers[r].first>target)r--;
            else l++;
        }
        vector<int> res;
        res.push_back(min(numbers[l].second,numbers[r].second));
        res.push_back(max(numbers[l].second,numbers[r].second));
        return res;
        
    }
    
    
};

