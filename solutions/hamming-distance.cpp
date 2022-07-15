//HAMMING DISTANCE -> 08/11/2021 12:39
//https://leetcode.com/problems/hamming-distance/submissions/
class Solution {
public:
    string binary(int a)
    {
        bitset<32> bits(a);
        return bits.to_string();
    }
    int hammingDistance(int x, int y) {
        int count = 0 ;
        string s1 = binary(x);
        reverse(s1.begin(),s1.end());
        string s2 = binary(y);
        reverse(s2.begin(),s2.end());
        for(int i = 0 ; i < s1.length() ; i++)
        {
            if(s1[i]!=s2[i])
            {
                count++;
            }
        }
        return count;
    }
};
