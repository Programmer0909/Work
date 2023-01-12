int peakElement(int arr[], int n)
{
   for (int i = 0; i < n; i++)
   {
       if (arr[0] >= arr[1])
       {
           return arr[1];
           break;
           
       }
       
        else if ((arr[i] >= arr[i+1]) && (arr[i] >= arr[i-1]))
        {
            return arr[i];
            break;
        }
        

   }return 0;
   
}