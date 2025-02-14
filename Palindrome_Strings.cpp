#include <bits/stdc++.h>
using namespace std;

    class Solution {

        public:
            bool isPalindrome(string s) {
                int i = 0, j=s.size()-1;
                while(i<j){
                    if(s[i]!=s[j]){
                        return false;
                    }else{
                        i++;
                        j--;
                    }
                }
                return true;
            }
    };

int main () {
        string s;
        cin >> s;
        Solution ob;
        if(ob.isPalindrome(s)) {
            cout << "True" << endl;
        }
        else {
            cout << "False" << endl;
        }
        // cout << ob.isPalindrome(s) << endl;
    return 0;
}