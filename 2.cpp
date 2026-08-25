#include <cmath>

class Solution {
public:
    int digitsInFactorial(int n) {
        if (n <= 1) return 1;

        double sumOfLogs = 0;
        for (int i = 1; i <= n; i++) {
            sumOfLogs += log10(i);
        }

        return floor(sumOfLogs) + 1;
    }
};
