#include <unordered_set>
using namespace std;
class Solution {
    int digitSquareSum(int n) {
        int sum = 0;
        while (n) { int digit = n % 10; sum += digit * digit; n /= 10; }
        return sum;
    }
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        while (n != 1 && !seen.count(n)) { seen.insert(n); n = digitSquareSum(n); }
        return n == 1;
    }
};
