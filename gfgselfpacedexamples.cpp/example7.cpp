/*second largest element in an array by using the naive approach*/
int getlargest(int arr[], int n){
   int largest=0;
   for(int i=0;i<n;i++)
   if(arr[i]>arr[largest])
   largest=i;
   return largest;
}
int secondlargest(int arr[],int n){
    int largest=getlargest(arr,n);
    int res=-1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[largest])
        {
            if(res==-1)
               res=i;
            else if(arr[i]>arr[res])
               res=i;
        }
    }
    return res;
}
/* efficeint approach*/
int secondlargest(int arr[],int n){
    int res=-1;largest=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>ar[largest])
        {
            res=largest;
            largest=i;
        }
        else if(arr[i]!=arr[largest])
        {
            if(res==-1||arr[i]>arr[res])
            res=i;
        }
    }
    return res;
}