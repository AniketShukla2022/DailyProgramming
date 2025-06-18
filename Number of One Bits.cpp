class Solution {
public:
    int hammingWeight(uint32_t n) {
        /*1st solution
	int res = 0;
        while (n)
        {
            n = n&(n-1);
            res++;
        }
        return res;*/
        /*2nd solution
	return __builtin_popcount(n);*/
	/*3rd solution
	int res = 0;
        while (n)
        {
            if (n%2 != 0)
                res++;
            n = n >> 1;
        }
        return res;*/
    }
};
