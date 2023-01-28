class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
     int i,j,k,count=0,len=nums.size();
       vector<int>  newArray;   
       for(i=0;i<len;i++){
           for(j=0;j<len;j++){
               if(nums[i]>nums[j]){
                   count++;
               }
           }
          newArray.push_back(count);
          count=0;
          j=0;
     }
   return newArray;
    }
};
