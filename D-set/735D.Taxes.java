/*from dust i have come, dust i will be*/

import java.math.BigInteger;
import java.util.*;

/*approach: if the numbers are represented as prime numbers then the tax will be least.
If the number is prime then the answer is 1, else if the number is even it can represented as two 
primes according to "Goldbatch Conjecture". Odd number can be 
presented as "even+2", that will make the answer '3' or "prime+2" that will make the answer '2'*/

public class x 
{   
    public static void main(String[] args)
    {
        Scanner in= new Scanner(System.in);

        String s=new String();
        s=in.next();
        
        BigInteger x=new BigInteger("2");
        BigInteger n=new BigInteger(s);
        
        Integer i=Integer.parseInt(s);
        
        if(n.isProbablePrime(100))
            System.out.println("1");
        
        else
        {
            if(i%2==0)
                System.out.println("2");
            
            else
            {
                n=n.subtract(x);
                if(n.isProbablePrime(100))
                    System.out.println("2");
                else
                    System.out.println("3");
               
            }
        }
    }
}
