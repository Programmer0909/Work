class Solution
{
public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)
    {
        // code here
        int re = 0, i = 0, j = 0, ct = 0;
        while (i < n && j < m)
        {
            if (b[j] < a[i])
            {
                if (b[j] != re)
                {
                    ct++;
                    re = b[j];
                }
                j++;
            }
            else if (a[i] < b[j])
            {
                if (a[i] != re)
                {
                    ct++;
                    re = a[i];
                }
                i++;
            }
            else
            {
                if (a[i] != re)
                {
                    ct++;
                    re = a[i];
                }
                i++;
                j++;
            }
        }
        while (i < n)
        {
            ct++;
            i++;
        }
        while (j < m)
        {
            ct++;
            j++;
        }
        return ct;
    }
};