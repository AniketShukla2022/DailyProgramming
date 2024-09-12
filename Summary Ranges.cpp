class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> answer;
        if(nums.size() == 0)
        {
            return answer;
        }
        
        int start = nums[0];
        int end = nums[0];
        if (nums.size() == 1)
        {
            answer.push_back(to_string(end));
            return answer;
        }

        for (int i=0; i<nums.size()-1; i++)
        {
            if (nums[i+1] == nums[i]+1)
            {
                start = min(nums[i],start);
                end = max(nums[i+1],end);
            }
            else 
            {
                if (start == end)
                    answer.push_back(to_string(start));
                else
                {
                    string s = to_string(start) + "->" + to_string(end);
                    answer.push_back(s);
                }
                start = nums[i+1];
                end = nums[i+1];
            }
        }
        if (nums[nums.size()-1] == nums[nums.size()-2]+1)
        {
            end = nums[nums.size()-1];
            string s = to_string(start) + "->" + to_string(end);
            answer.push_back(s);
        }
        else {
            answer.push_back(to_string(end));
        }
        return answer;
    }
};