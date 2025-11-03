class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0,mid=0,high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid]==1){
                mid++;
            } else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--; //2 is supposed to start from high+1
            }
        }
    }
};

// [0 ... low-1] → 0s
// [low ... mid-1] → 1s
// [mid ... high] → unsorted array
// [high+1 ... n-1] → 2s