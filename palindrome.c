

bool isPalindrome(int x){
if (x < 0) return false;
        else if (x ==0) return true;
        else {
            int  arr[1000];
            int arrSize=0;
            int v = x;
            int digit;
            while(v > 0) {
                 digit = v % 10;
                arr[arrSize++]=(digit);
                v /= 10;
            }
            int i=0;
            int j=arrSize-1;
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
