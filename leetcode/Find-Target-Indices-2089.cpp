class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int i,len = nums.size();
        vector<int> targetIndex;
        
        if(len==1 and nums[0]==target){
            targetIndex.push_back(0); 
            return targetIndex;
        }
        if(len==1 and nums[0]!=target){
            //targetIndex.push_back(); 
            return targetIndex;
        }
        sort(nums.begin(), nums.end());
        for(i=0;i<len;i++){
            if(nums[i]==target){
             targetIndex.push_back(i);   
            }
        }
        return targetIndex;
    }
};
