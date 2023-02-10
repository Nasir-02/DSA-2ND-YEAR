
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=nums.size();
        vector<int> a={-1,-1};
        
        
        for (int i=0;i<l;i++)
        {
            if (nums[i]==target){
            a[0]=i;
            break;
            }
        }
        for(int j=l-1;j>=0;j--)
        {
            if (nums[j]==target){
            a[1]=j;
            break;
            }
        }
       // cout<<"["<<f<<","<<lst<<"]";
       // return a;
        return a;
    }
};
