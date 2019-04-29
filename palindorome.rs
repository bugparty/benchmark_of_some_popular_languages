impl Solution {
    pub fn is_palindrome(x: i32) -> bool {
         let mut arr : [i32; 12] = [0;12];
         let mut arrSize = 0;
        if (x < 0 ) { return false;}
        else if (x == 0) { return true;}
        else {
           
            let mut v = x;
            while(v > 0) {
                let  digit = v % 10;
                arr[arrSize]=(digit);
                arrSize+=1;
                v /= 10;
            }
            let mut i=0;
            let mut j=arrSize-1;
            let mut  ret = true;
            while(i<j){
               if(arr[i] == arr[j]) {
                   i+=1;
                   j-=1;
               } else{
                   ret = false;
                   break;
               }
            }
        
            return ret;
        }
    }
}
