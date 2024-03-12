#include <iostream>
#include <string>
using namespace std;

bool check(string& s, int index, int n)
{
    string s_ref = "";
    s_ref += s[index];

    if(index+1 < n && index+2 < n)
    {
        s_ref += s[index+1];
        s_ref += s[index+2];
    }

    if(s_ref == "map" || s_ref == "pie")
    {
        return true;
    }

    return false;

}

int main()
{
    int t;
    cin  >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int index = 0;
        int count = 0;

        while(index < n)
        {
            if(s[index] == 'm'  || s[index] == 'p')
            {
                if(check(s, index, n) == true)
                {
                    count++;
                    index += 3;
                }
                else
                {
                    index++;
                }
            }
            else
            {
                index++;
            }
            
        }

        cout << count << endl;
    }

}