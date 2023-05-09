Leetcode : https://leetcode.com/problems/find-the-distinct-difference-array/

Solution: 
class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        
        int n = nums.size();
        vector <int> v;
        map <int,int> m1,m2;

        for(auto &i:nums)
            m2[i]++;
        
        for(auto &i : nums)
        {
            m2[i]--;
            m1[i]++;

            if(m2[i] == 0)
                m2.erase(i);
            v.push_back(m1.size()-m2.size());
        }
        return v;
    }
};
