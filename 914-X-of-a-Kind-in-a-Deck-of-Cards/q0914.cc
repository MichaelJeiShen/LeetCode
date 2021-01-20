class Solution {
public:
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    bool hasGroupsSizeX(vector<int>& deck) {
        vector<int> v(10005);
        for (int num : deck) v[num]++;
        int result = 0;
        for (int num : v) {
            if (num == 0) continue;
            else if (result == 0) result = num;
            else result = gcd(result, num);
            if (result == 1) return false;
        }
        return true;
    }
};