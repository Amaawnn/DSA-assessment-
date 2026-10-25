#include <string>
#include <vector>
using namespace std;
class Solution {
    const vector<string> letters{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    void build(const string& digits, int index, string& current, vector<string>& result) {
        if (index == digits.size()) { result.push_back(current); return; }
        for (char ch : letters[digits[index] - '0']) {
            current.push_back(ch);
            build(digits, index + 1, current, result);
            current.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> result;
        string current;
        build(digits, 0, current, result);
        return result;
    }
};
