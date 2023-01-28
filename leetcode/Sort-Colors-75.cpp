class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> sortedArray;
        int i,j,k,r=0,w=1,b=2,redCount=0,whiteCount=0,blueCount=0;
        int s1,s2;
        for(i=0;i<nums.size();i++){
            if(nums[i]==r) redCount++;
            else if(nums[i]==w) whiteCount++;
            else blueCount++;
           }
        s1=redCount+whiteCount;
        s2=redCount+whiteCount+blueCount;
            for(j=1;j<=nums.size();j++){
                if(j<=redCount) sortedArray.push_back(r);
                else if(j>redCount && j<=s1) sortedArray.push_back(w);
                else if(j>s1 && j< s2) sortedArray.push_back(b);
                else sortedArray.push_back(b);
            }
           for(int i=0;i<sortedArray.size();i++){
               nums[i]=sortedArray[i];
           }
    }
};
