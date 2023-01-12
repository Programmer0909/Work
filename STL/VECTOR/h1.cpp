#include <bits/stdc++.h>
using namespace std;

int intersectPoint(Node *head1, Node *head2)
{
    // Your Code Here
    int ct1 = 1, ct2 = 1;
    Node *tem1 = head1;
    Node *tem2 = head2;
    while (tem1->next != NULL)
    {
        ct1++;
        tem1 = tem1->next;
    }
    while (tem2->next != NULL)
    {
        ct2++;
        tem2 = tem2->next;
    }
    int maxi = max(ct1, ct2);
    int k = abs(ct1 - ct2);
    Node *temp1 = head1;
    Node *temp2 = head2;
    if (maxi == ct1)
    {
        while (k != 0)
        {
            temp1 = temp1->next;
            k--;
        }
    }
    else
    {
        while (k != 0)
        {
            temp2 = temp2->next;
            k--;
        }
    }

    while(temp1!=NULL || temp2!=NULL){
        if (temp1->data == temp2->data)
        {
            return tem1->data;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return -1;


}

// AIM :
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        unsigned long long int re = binomialCoeff(n, k);
        unsigned long long int r = (unsigned long long int)pow(2, re);
        cout << r << endl;
    }

    return 0;
}