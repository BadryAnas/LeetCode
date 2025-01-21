class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // O(n log(n))

        // for(int i = m ; i < m+n ; i++)
        // {
        //     nums1[i] = nums2[i - m];
        // }
        // sort(nums1.begin()  , nums1.end()); 

        // O(n+m)
        if ( m == 0)
        {
            nums1 = nums2;
            return;
        }
        if( n == 0)
            return;


        vector<int>tmp(m);
        tmp = nums1;
        int i = 0 , j = 0, k = 0;
        while( n + m )
        {
            if(tmp[i] <= nums2[j])
            {
                nums1[k] = tmp[i];
                i++;
            }
            else{
                nums1[k] = nums2[j];
                j++;
            }
            k++;

            if(i == m || j == n)
                break;
        }
        while( i < m )
        {
            nums1[k] = tmp[i];
            i++;
            k++; 
        }
        while( j < n )
        {
            nums1[k] = nums2[j];
            j++;
            k++; 
        }

    }
};