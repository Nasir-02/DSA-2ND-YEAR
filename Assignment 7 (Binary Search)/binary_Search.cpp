class Solution {
public:
    int search(vector<int>& nums, int target) {
        int first=0;
        int last=nums.size();
        while (first<=last)
        {
            int mid=  first+(last-first)/2;
            if (nums[mid]==target) {
                return mid;
            }
            else if (target>nums[mid])    {
            first=mid+1; }
            else
            {
                last=mid-1;
                mid= first+(last-first)/2;
            }
        }
        return -1;
    }
};
