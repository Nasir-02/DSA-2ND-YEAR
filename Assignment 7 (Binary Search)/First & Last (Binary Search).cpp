
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> a ={-1,-1};
        int s=0, e=nums.size()-1;
        //left
        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[m]==target){
                a[0]=m;
                e=m-1;

            }
            if(nums[m]>target){
                e=m-1;
            }
            if(nums[m]<target){
                s=m+1;
            }
        }
        //right
        s=0;
        e=nums.size()-1;

        while(s<=e){
            int m=s+(e-s)/2;
            if(nums[m]==target){
                a[1]=m;
                s=m+1;

            }
            if(nums[m]>target){
                e=m-1;
            }
            if(nums[m]<target){
                s=m+1;
            }
        }
        return a;
    }
};
