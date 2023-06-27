/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
    int peak(MountainArray &mountainArr)
    {
        int s=0, e=mountainArr.length()-1, mid;
        while(s<e)
        {
            mid=s+(e-s)/2;
            if(mountainArr.get(mid)<mountainArr.get(mid+1))
             s=mid+1;
            else 
             e=mid; 
        }
        return mid;
    }
    int indexLeft(int k, MountainArray &mountainArr, int e)
    {
        int ans=-1;
        int s=0, mid;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(mountainArr.get(mid)==k)
            {
                return mid;
             
            }
            else if (mountainArr.get(mid)>k)
            {
                e=mid-1;
            }
            else
             s=mid+1;
        }
        return -1;
    }
    int indexRight(int k, MountainArray &mountainArr, int s)
    {
        
        int  e=mountainArr.length()-1, mid;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(mountainArr.get(mid)==k)
            {
                return mid;
           
            }
            else if (mountainArr.get(mid)>k)
            {
                s=mid+1;
            }
            else
             e=mid-1;
        }
        return -1;
    }
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {

        int peakIndex=peak(mountainArr);
        int ans=indexLeft(target, mountainArr, peakIndex);
        if(ans==-1)
        {
            if(peakIndex<mountainArr.length()-1)
            ans=indexRight(target, mountainArr, peakIndex+1);
        }
        return ans;
    }
};