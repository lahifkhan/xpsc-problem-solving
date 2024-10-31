#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        vector<pair<char, int>> cap;
        vector<pair<char, int>> smal;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'B')
            {
                if (!cap.empty())
                {
                    cap.pop_back();
                }
            }
            else if (str[i] == 'b')
            {
                if (!smal.empty())
                {
                    smal.pop_back();
                }
            }
            else
            {
                if (str[i] >= 'A' && str[i] <= 'Z')
                {
                    cap.push_back({str[i], i});
                }
                else if (str[i] >= 'a' && str[i] <= 'z')
                {
                    smal.push_back({str[i], i});
                }
            }
        }
        string str2(str.size(),'_');

        for(auto p: cap){
            char c = p.first;
            int index = p.second;
            str2[index] = c;
        }
        for(auto p: smal){
            char c = p.first;
            int index = p.second;
            str2[index] = c;
        }

        for(auto c: str2){
            if(c!='_'){
                cout<<c;
            }
        }

        cout <<endl;

    }

   
    return 0;
}