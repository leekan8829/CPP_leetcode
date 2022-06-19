#include <iostream>
#include <vector>
#include <cctype>
using namespace std;

void mytoupper(vector<string> &str_vec)
{
    for (auto &str : str_vec)
    {
        for (auto &c : str)
            c = toupper(c);
    }
}

int main()
{
    vector<string> str_vec;
    string str;
    while (cin >> str)
    {
        str_vec.push_back(str);
    }
    mytoupper(str_vec);

    for (auto i = str_vec.begin(); i != str_vec.end(); i++)
        cout << *i << endl;
    return 0;
}