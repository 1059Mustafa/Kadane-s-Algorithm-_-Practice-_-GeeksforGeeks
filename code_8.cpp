int maxSubarraySum(int arr[], int n)
{
    int max_sum=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            sum=sum+arr[i];
            max_sum=max(max_sum,sum);
        }
        else
        {
            sum=sum+arr[i];
            if(sum<0)
            {
                sum=0;
            }
        }
    }
    
    return max_sum;
    
    
    
}
