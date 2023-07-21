class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> track;
        for (int i = 0; i < n; i++)
        {
            track[nums[i]]++;
        }
        int max = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (track[nums[i]] > max)
            {
                max = track[nums[i]];
                ans = nums[i];
            }
        }
        return ans;
    }
};