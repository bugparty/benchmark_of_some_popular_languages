class Solution {
public:
    bool isPalindrome(int x) {
         if (x < 0) return false;
        else if (x ==0) return true;
        else {
            int  arr[12];
            volatile int arrSize=0;
            volatile auto v = x;
            while(v > 0) {
                auto digit = v % 10;
                arr[arrSize++]=(digit);
                v /= 10;
            }
            volatile int i=0;
            volatile int j=arrSize-1;
            bool ret = true;
            while(i<j){
               if(arr[i] == arr[j]) {
                   i++;j--;
               } else{
                   ret = false;
                   break;
               }
            }
            return ret;
        }
    }
};
