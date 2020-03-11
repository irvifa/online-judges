class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        const uint32_t MAX = 32;
        uint32_t tmp = 0;
        for (int i=0; i<MAX; i++) {
            tmp = (tmp<<1)|(n&0x01);
            n = n >> 1;
        }
        return tmp;
    }
};