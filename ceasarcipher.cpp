#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'caesarCipher' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. STRING s
 *  2. INTEGER k
 */


string caesarCipher(string s, int k) {
    std::string ss;
    int r = 0;
    k = k % 26;
    for( auto const & c: s){

        r = c+k;
        if(static_cast<int>(c) < 123 && static_cast<int>(c) > 96){
            if(k+static_cast<int>(c) > 122){
                r =  k+static_cast<int>(c)  - 26;
            }
            ss +=r;
        } else if(static_cast<int>(c) < 91 && static_cast<int>(c) > 64){
            if(k+static_cast<int>(c) > 90){
                r =  k+static_cast<int>(c)  - 26;
            }
            ss +=r;
        } else {
            ss +=c;
        }
    }
    return ss;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string s;
    getline(cin, s);

    string k_temp;
    getline(cin, k_temp);

    int k = stoi(ltrim(rtrim(k_temp)));

    string result = caesarCipher(s, k);

    fout << result << "\n";
    cout << result << "\n";
    assert("!w-bL`-yX!.G`mVKmFlX/MaCyyvSS!CSwts.!g/`He`eJk1DGZBa`eBLdyu`hZD`vV-jZDm.LCBSre..-!.!dmv!-E" == result);

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
