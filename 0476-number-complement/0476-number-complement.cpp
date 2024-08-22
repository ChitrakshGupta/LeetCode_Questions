class Solution {
public:
int findComplement(int num) {
    // Special case for num = 0, the complement should be 1
    if (num == 0) {
        return 1;
    }
    
    // Initialize mask
    unsigned mask = ~0; // All bits set to 1
    
    // Shift the mask left until it covers all bits of num
    while (num & mask) {
        mask <<= 1;
    }
    
    // XOR num with the inverse of the mask
    return ~num & ~mask;
}


};