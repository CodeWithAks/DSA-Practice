class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){ //array traverse kiya 
            int first = nums[i];
            int second = target - first;

            if(m.find(second) != m.end()){ //is "second" there ?
                ans.push_back(i);
                ans.push_back(m[second]); //add the pair
                break;
        }

        m[first] = i; //add value in map 
    }

    return ans;
    }
};