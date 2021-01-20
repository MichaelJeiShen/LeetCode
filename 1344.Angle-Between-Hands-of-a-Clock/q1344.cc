class Solution {
public:
    double angleClock(int hour, int minutes) {
        double result = abs((double) minutes * 6.0 - ((hour % 12) * 30 + minutes / 2.0)); 
        return min(result, 360.0 - result);
    }
};