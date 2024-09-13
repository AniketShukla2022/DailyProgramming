class Solution {
public:
    int captureForts(vector<int>& forts) {
        int n = forts.size();
        if (n<=2)
            return 0;
        int start = INT_MIN;
        int end = INT_MIN;
        int flag = 0;
        int NoOfCaptures = INT_MIN;

        for (int i=0; i<n; i++)
        {
            if (forts[i] == 1)
                start = i;
            else if (forts[i] == -1)
                end = i;
            if (start != INT_MIN && end != INT_MIN && forts[i] != 0)
            {
                NoOfCaptures = max(NoOfCaptures,abs(end-start)-1);
                if (start == i)
                    end = INT_MIN;
                else if (end == i)
                    start = INT_MIN;
                flag = 1;
            }
        }
        if ((start == INT_MIN || end == INT_MIN) && flag == 0)
            return 0;
        return NoOfCaptures;
    }
};