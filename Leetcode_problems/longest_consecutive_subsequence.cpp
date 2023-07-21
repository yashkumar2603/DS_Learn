class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_map<int, int> track;
        int n = nums.size();
        int max = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            track[nums[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            if (track[nums[i] + 1] >= 1)
            {
                max++;
                if (max >= ans)
                {
                    ans = max;
                }
            }
            else if (track[nums[i] + 1] == 0)
            {
                max = 0;
            }
        }
        return ans;
    }
};