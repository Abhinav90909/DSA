#define ll long long int 
class Solution {
public:
    long long countSubstrings(string s, char c) {
        ll ct =0;
        for(auto ch : s) if (c==ch) ct++;
        return (ct*(ct+1))/2;
        
    }
};