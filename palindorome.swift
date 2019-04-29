class Solution {
    func isPalindrome(_ x: Int) -> Bool {
        if (x < 0) {
            return false;
        }
        else if x == 0 {return true;} 
        else {
            var  arr = [Int]();
          
            var v = x;
            while(v > 0) {
                var digit = v % 10;
                arr.append(digit);
                v /= 10;
            }
            var i=0;
            var j=arr.count-1;
            var ret = true;
            while(i<j){
               if(arr[i] == arr[j]) {
                   i+=1;j-=1;
               } else{
                   ret = false;
                   break;
               }
            }
            return ret;
        }
    }
}
