//O(nlogm) -> binary search

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int maxele = *max_element(piles.begin(), piles.end());
        int l = 1;
        int r = maxele;
        int res = r;
        while (l<=r)
        {
            int m = (l+r)/2;
            int val = 0;
            for (int i=0; i<n; i++)
            {
                if (piles[i]<m)
                    val++;
                else
                {
                    val += piles[i]/m;
                    if (piles[i]%m)
                        val++;
                }
            }
            if (val <= h)
            {
                res = m;
                r = m-1;
            } 
            else
                l = m+1;
        }
        return res;
    }
};


//O(n*m)
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int res = 0;
        int maxele = *max_element(piles.begin(), piles.end());
        int n = piles.size();

        for (int k=1; k<=maxele; k++)
        {
            int val = 0;
            for (int i=0; i<n; i++)
            {
                if (piles[i]<k)
                    val++;
                else
                {
                    val += piles[i]/k;
                    if (piles[i]%k)
                        val++;
                    if (val > h)
                        break;
                }
            }
            if (val <= h)
                return k;
        }
        return maxele;
    }
};

