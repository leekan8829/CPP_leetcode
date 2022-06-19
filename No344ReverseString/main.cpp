#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        for (int i = 0, r = s.size() - 1; i < r; i++, r--)
        {
            swap(s[i], s[r]);
        }
    }
};