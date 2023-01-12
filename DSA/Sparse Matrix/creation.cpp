// #include <bits/stdc++.h>
// using namespace std;

// class element
// {
// public:
//     int i;
//     int j;
//     int ele;
// };

// class sparse
// {
// public:
//     int row;
//     int col;
//     int num;
//     element *arr;

//     void create(sparse *s);
//     void show(sparse s);
//     sparse add(sparse s1, sparse s2);
//     sparse transpose(sparse s1);
// };

// void sparse ::create(sparse *s)
// {
//     cout << "Enter no of rows : ";
//     cin >> s->row;
//     cout << endl;

//     cout << "Enter no of col : ";
//     cin >> s->col;
//     cout << endl;

//     cout << "Enter no of non zero element : ";
//     cin >> s->num;
//     cout << endl;

//     s->arr = new element[s->num];
//     for (int i = 0; i < s->num; i++)
//     {
//         cout << "Enter row no.";
//         cin >> s->arr[i].i;
//         cout << "Enter col no.";
//         cin >> s->arr[i].j;
//         cout << "Enter element value";
//         cin >> s->arr[i].ele;
//     }
// }

// void sparse::show(sparse s)
// {
//     int k = 0;
//     for (int i = 0; i < s.row; i++)
//     {
//         for (int j = 0; j < s.col; j++)
//         {
//             if (i == s.arr[k].i && j == s.arr[k].j)
//                 cout << s.arr[k++].ele << " ";
//             else
//                 cout << "0 ";
//         }
//         cout << endl;
//     }
// }

// sparse sparse::add(sparse s1, sparse s2)
// {
//     sparse s3;
//     if (s1.row == s2.row && s1.col == s2.col)
//     {
//         s3.row = s1.row;
//         s3.col = s1.col;
//         s3.arr = new element[s1.num + s2.num];

//         int i = 0, j = 0, k = 0;
//         while (i < s1.num && j < s2.num)
//         {
//             if (s1.arr[i].i < s2.arr[j].i)
//             {
//                 s3.arr[k].i = s1.arr[i].i;
//                 s3.arr[k].j = s1.arr[i].j;
//                 s3.arr[k].ele = s1.arr[i].ele;
//                 i++;
//                 k++;
//             }
//             else if (s2.arr[i].i < s1.arr[j].i)
//             {
//                 s3.arr[k].i = s2.arr[i].i;
//                 s3.arr[k].j = s2.arr[i].j;
//                 s3.arr[k].ele = s2.arr[i].ele;
//                 j++;
//                 k++;
//             }
//             else
//             {
//                 if (s1.arr[i].j < s2.arr[j].j)
//                 {
//                     s3.arr[k].i = s1.arr[i].i;
//                     s3.arr[k].j = s1.arr[i].j;
//                     s3.arr[k].ele = s1.arr[i].ele;
//                     i++;
//                     k++;
//                 }
//                 else if (s2.arr[i].j < s1.arr[j].j)
//                 {
//                     s3.arr[k].i = s2.arr[i].i;
//                     s3.arr[k].j = s2.arr[i].j;
//                     s3.arr[k].ele = s2.arr[i].ele;
//                     j++;
//                     k++;
//                 }
//                 else
//                 {
//                     s3.arr[k].i = s2.arr[i].i;
//                     s3.arr[k].j = s2.arr[i].j;
//                     s3.arr[k].ele = s2.arr[i].ele + s1.arr[i].ele;
//                     i++;
//                     j++;
//                     k++;
//                 }
//             }
//         }

//         while (i < s1.num)
//         {
//             s3.arr[k].i = s1.arr[i].i;
//             s3.arr[k].j = s1.arr[i].j;
//             s3.arr[k].ele = s1.arr[i].ele;
//             i++;
//             k++;
//         }
//         while (j < s2.num)
//         {
//             s3.arr[k].i = s1.arr[j].i;
//             s3.arr[k].j = s1.arr[j].j;
//             s3.arr[k].ele = s1.arr[j].ele;
//             j++;
//             k++;
//         }
//     }

//     else
//         return s3;
//     return s3;
// }

// sparse sparse::transpose(sparse org)
// {
//     sparse res;
//     res.row = org.col;
//     res.col = org.row;

//     int count[org.col];
//     for (int i = 0; i < org.col; i++)
//         count[i] = 0;
//     for (int i = 0; i < org.row; i++)
//         count[org.arr[i].j]++;

//     int index[org.col + 1];
//     index[0] = 0;
//     for (int i = 1; i <= org.col; i++)
//         index[i] = index[i - 1] + count[i - 1];

//     for (int i = 0; i < org.row; i++)
//     {
//         int loc = index[org.arr[i].j]++;
//         res.arr[loc].i = org.arr[i].i;
//         res.arr[i].j = org.arr[i].;
//         res.arr[i].ele = org.arr[i].i;
//     }
// }

// // AIM :
// int main()
// {
//     sparse s1, s2, s3;
//     s1.create(&s1);
//     s1.show(s1);
//     s2.create(&s2);
//     s2.show(s2);
//     cout << "RESULTANT MATRIX" << endl;
//     s3 = s3.add(s1, s2);
//     s3.show(s3);

//     for(int i=0;i!=0;i){
//         swap
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define int int long long
// #define vi vector<long long int>
// #define mi map<long long int, long long int>
// #define vii vector<long long int, long long int>
// #define el << endl

// int ch()
// {
//     int n, a = 0, b = 0, c = 0, x = 0, y = 0, z = 0, ct = 0, res = 0, maxi = 0, mini = 0;
//     string s;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     sort(arr, arr + n);
//     for (int i = 0; i < n; i++)
//     {
//         if ((i + 1 - arr[i]) < 0)
//         {
//             cout << -1 el;
//             return 0;
//         }
//         else
//             res += (i + 1 - arr[i]);
//     }
//     cout << res el;
//     return 0;
// }

// int32_t main()
// {
//     std::cout << std::fixed << std::setprecision(0);
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//         ch();
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define int int long long
#define vi vector<long long int>
#define mi map<long long int, long long int>
#define vii vector<int, int>
#define el << endl
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
 
int ch()
{
    int n,k=0,b=0,c=0,x=0,y=0,z=0, ct = 0, res = 0, maxi = 0, mini = 0;
    string s;
    cin >> n >>k ;
    int cat[n];
    for (int i = 0; i < n; i++)
    {
      cin>>cat[i];
    }
    int tim[n];
    for (int i = 0; i < n; i++)
    {
      cin>>tim[i];
    }
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        pair <int , int > p = make_pair(cat[i],tim[i]);
        v.push_back(p);
    }
    unordered_set <int> set;
    sort(v.begin(),v.end(),sortbysec);
    for (int i = 0; i < n; i++)
    {
        
    }
    
    
    return 0;
}

int32_t main()
{
    std::cout << std::fixed << std::setprecision(0);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) ch();
    return 0;
}