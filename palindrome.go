func isPalindrome(x int) bool {
    if x < 0{
        return false
    } else if x == 0 {
        return true
    }
    
    var  arr  [12] int;
    var arrSize=0;
    var v = x;
    for{
        if v <= 0 {break} 
        var digit = v % 10;
        arr[arrSize]=(digit);
        arrSize+=1
        v /= 10;
    }
    
    for i,j := 0, arrSize-1; i < j ; i,j = i+1, j-1{
        if arr[i] != arr[j]{
             return false
        }            
    }
    
    return true
}
