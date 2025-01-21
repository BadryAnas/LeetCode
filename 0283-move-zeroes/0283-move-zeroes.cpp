class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // vector<int>num;
        // vector<int>zeros;
        // int ctr = 0, ctr2 = 0 , ctr3 = 0;
        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     if(nums[ i ] == 0)
        //         zeros.push_back(nums [ i ]);
        //     else
        //         num.push_back(nums [ i ]);
        // } 
        // for( ; ctr2 < num.size() ; ctr2++, ctr++)
        // {
        //     nums[ctr] = num[ctr2];
        // }
        // for( ; ctr3 < zeros.size() ; ctr3++, ctr++)
        // {
        //     nums[ctr] = zeros[ctr3];
        // }

        for(int i = 0 ; i < nums.size()  ;i++)
        {
            if(nums[i] == 0)
            {
                for(int j = i + 1; j < nums.size() ; j++)
                {
                    if(nums[j] != 0)
                    {
                        swap(nums[i] , nums[j]);
                        break;
                    }
                }
            }
        }


    }
};