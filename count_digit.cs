 /* 
 Write a function that counts the number of digits of a randomly big integer. 
 */ 
 
 public static int count_digit(BigInteger num)
        {
            string long_str = num.ToString();
            return long_str.Length; 
        } 
        
