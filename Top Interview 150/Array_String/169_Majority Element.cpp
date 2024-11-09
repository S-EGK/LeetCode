class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int number;
        for (int i=0; i<nums.size(); i++) {
            if (count==0) {
                number = nums[i];
            }
            if (nums[i] == number) {
                count+=1;
            }
            else {
                count-=1;
            }
        }
        return number;
    }
};