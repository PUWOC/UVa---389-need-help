#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(void)
{
    string str;
    while (cin >> str)
    {
        int base_before, base_after;
        cin >> base_before >> base_after;
        int decimal = 0;
        for (int i = str.size() - 1; i >= 0; i--)
        {
            int temp;
            if (str[i] >= 65)
            {
                temp = str[i] - 55;
            }
            else
            {
                temp = str[i] - '0';
            }
            if (str[i] != '0')
            {
                int tt = 1;
                for (int j = 0; j < str.size() - i - 1; j++)
                {
                    tt *= base_before;
                }
                tt *= temp;
                decimal += tt;
            }
        }
        vector<int> vec;
        while (decimal != 0)
        {
            vec.push_back(decimal % base_after);
            decimal /= base_after;
        }
        reverse(vec.begin(), vec.end());
        if (vec.size() > 7)
        {
            cout << "  ERROR" << endl;
            continue;
        }
        for (int i = 0; i < 7 - vec.size(); i++)
        {   
            cout << " ";
        }
        for (int i = 0; i < vec.size(); i++)
        {
            switch (vec[i])
            {
            case 10:
                cout << "A";
                break;
            case 11:
                cout << "B";
                break;
            case 12:
                cout << "C";
                break;
            case 13:
                cout << "D";
                break;
            case 14:
                cout << "E";
                break;
            case 15:
                cout << "F";
                break;
            default:
                cout << vec[i];
                break;
            }
        }
        cout << endl;
    }
}