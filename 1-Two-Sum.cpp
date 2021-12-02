class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash_nood;
        vector<int> ret;
        int fir_value;
        
        for(int fir_loc = 0; fir_loc<nums.size(); fir_loc++){
            int fir_value = nums[fir_loc];
            hash_nood[fir_value] = fir_loc;
        }
            
        
        for(int fir_loc = 0; fir_loc<nums.size(); fir_loc++){
            fir_value = nums[fir_loc];
            int sec_value = target - fir_value; 
            if(hash_nood.count(sec_value) && hash_nood[sec_value] != fir_loc){
                int sec_loc = hash_nood[sec_value];
                ret.push_back(fir_loc);
                ret.push_back(sec_loc);
                return ret;
            }
        }
        return ret;
    }
};
