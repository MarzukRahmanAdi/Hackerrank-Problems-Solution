#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


int pageCount(int n, int p) {
    if(p == 1 || p == n ) return 0;
    if(p <= n/2 ){
        int x = p / 2;
        return x;
    } else {
        if (n - 1 == p && n % 2 != 0) return 0;
        int y = n;
        
        if (n % 2 == 0) {
            y = y + 1;
        }
        
        int res = (y - p) / 2;

        return res;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    int result = pageCount(n, p);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
