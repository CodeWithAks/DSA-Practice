class Solution {
    public:
    vector<int>twoSum(vector<int>& nums, int target){
        unordered_map<int,int> m;
        vector<int>ans;

        for(int i=0;i<nums.size();i++){
            int first = nums[i];   //first el extract
            int second  = target - first;

            if(m.find(second) != m.end()) {  // is second there ?
                ans.push_back(i); //iska idx
                ans.push_back(m[second]); //second vale ka idx(dono ko store kro)
                break;
            }
            m[first] = i;
        }

        return ans;
    }
};