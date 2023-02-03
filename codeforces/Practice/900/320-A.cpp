            #include <bits/stdc++.h>
            using namespace std;

            //AIM : 
            int main(){
                string s;
                cin>>s;
                for (int i = 0; i < s.length(); i++)
                {
                    if(s[i]!='1' && s[i]!='4') {cout << "NO" << endl;return 0;}
                }
                int ct=0; 
                for (int i = 0; i < s.length(); i++)
                {

                    if(s[i]=='4' && (s[i-1]!='1' && s[i-1]!='4')) {cout << "NO" << endl;return 0;}
                    if(ct>=3) {cout << "NO" << endl;return 0;}
                    if(s[i]=='4') ct++;
                    else ct=0;
                }
                    if(ct>=3) {cout << "NO" << endl;return 0;}
                cout << "YES" << endl;
                return 0;
            }