#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<long long int, long long int>
#define el << endl
int main(){std::cout << std::fixed << std::setprecision(0);ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll int n, m ,ct_m_2 = 0,ct_n_2=0,ct_m_3 = 0,ct_n_3=0;cin >> n >> m;
    while (m>0){if(m%6==0) m/=6,ct_m_2++,ct_m_3++;else if(m%2==0) m/=2,ct_m_2++;else if(m%3==0) m/=3,ct_m_3++;else break;}
    while (n>0){if(n%6==0) n/=6,ct_n_2++,ct_n_3++;else if(n%2==0) n/=2,ct_n_2++;else if(n%3==0) n/=3,ct_n_3++;else break;}
    if(m==n && ct_m_2>=ct_n_2 && ct_m_3>=ct_n_3) cout << ct_m_2 - ct_n_2 + ct_m_3-ct_n_3 el;else cout << -1 el;
    return 0;}