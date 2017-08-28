 /* 
 Implement the factorial function. 
 I will use BigInteger in order to allow factorials of 
 large numbers to be computed. 
 */ 
 
  public static BigInteger factorial(int num)
        {
            if (num == 0 || num == 1)
                return 1;
            else
                return num * factorial(num - 1); 
        } 
        
        
