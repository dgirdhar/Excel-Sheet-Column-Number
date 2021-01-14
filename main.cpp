class Solution {
public:
    int titleToNumber(string s) {
        int response = 0;
        int index = 0;
        
        for (int i = s.size() - 1; i >= 0; --i) {
            response += pow(26, i) * (s[index++] - 'A' + 1);
        }
        
        return response;
    }
};
