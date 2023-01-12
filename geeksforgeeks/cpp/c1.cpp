class Solution{
public:
    int maxValue(int A, int B){
        // code here
        if ((A>0 && B>0) || (A<0 && B<0) )
        {
            if(A==B==1){
                return 2;}
            return A*B;
        }
        else if ((A>0 && B<0) || (A<0 && B>0))
        {
            int r =A-B;
            if (r>0)
            {
                return r;
            }
            else
            {
                return -1*r;
            }
            
            
        }
        else if (A<0 && B>0)
        {
            return B-A;
        }
        else if (A==0 ||B==0)
        {
            return -999999;
        }
        
    }
};