class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int res[32] = {0};
        int i=0;
        while (n)
        {
            res[i] = n&1;
            n = n >> 1;
            i++;
        }
        uint32_t ans = 0;
        for (int i=0; i<32; i++)
        {
            ans = ans + (1<<i)*res[31-i];
        }
        return ans;
    }
};
