class Solution {
public:
    int countDigits(int num) 
    {
        int count=0;
        int val=num;
        while(val>0)
        {
            int a=val%10;
            if(a!=0 && num % a==0)
            {
                count++;
            }
            val/=10;
        }
        return count;
    }
};