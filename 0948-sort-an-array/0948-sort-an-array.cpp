class Solution {
    void merge (vector<int> &arr, int s, int e)
{
    vector<int> temp(e-s+1);
    int mid=s+(e-s)/2;
    int i=s, j=mid+1,k=0;
    while(i<=mid && j<=e)
    {
        if(arr[i]<arr[j])
         temp[k++]=arr[i++];
        else
         temp[k++]=arr[j++];
    }
    while(i<=mid)
     temp[k++]=arr[i++];
    while (j<=e) 
     temp[k++]=arr[j++];
    for(int x=0; x<e-s+1; x++)
    {
        arr[x+s]=temp[x];
    } 
}
void mergeSort (vector<int> &arr, int s, int e)
{
    if(s>=e)
     return;
    else{
        int mid=s+(e-s)/2;
        
        mergeSort(arr, s, mid);
        mergeSort(arr, mid+1, e);
        merge(arr, s,e);
    } 
}
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};