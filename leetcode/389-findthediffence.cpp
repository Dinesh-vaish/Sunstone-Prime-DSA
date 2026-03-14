class Solution {
public:
    char findTheDifference(string s, string t) { 
    char result = 0;
    for(char c : s) result ^= c;
    for(char c : t) result ^= c;
    return result;
}
};
       

class Solution {
public:
    char findTheDifference(string s, string t) { 
        int freq[26] = {0}; 
        
        // Count characters in t
        for(char c : t) {
            freq[c - 'a']++;
        }
        
        // Subtract characters in s
        for(char c : s) {
            freq[c - 'a']--;
        }
        
        // Find the extra character
        for(int i = 0; i < 26; i++) {
            if(freq[i] == 1) {
                return 'a' + i;
            }
        }
        
        return ' '; // fallback (should never reach here)
    } 
};
    


class Solution {
public:
char findTheDifference(string s, string t) {
    int sumS = 0, sumT = 0;
    for(char c : s) sumS += c;
    for(char c : t) sumT += c;
    return char(sumT - sumS);
}
}