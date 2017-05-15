/*from dust i have come, dust i will be*/

import java.io.*;
import java.math.BigInteger;
import java.util.*;

public class x 
{

    public static void main(String[] args) 
    {
        Scanner in=new Scanner(System.in);
        
        String s=in.next();
        StringBuilder ss=new StringBuilder();
 
        
        if(s.length()==1)
        {
            System.out.println("1");
        }
        
        else
        {
            if(s.charAt(0)!='9')
            {
                char ch=(char) ((int)s.charAt(0)+1);
                ss.append(ch);
            }
            
            else
                ss.append("10");
            
            for(int i=1;i<s.length();i++)
                ss.append('0');
            
            BigInteger x=new BigInteger(s);
            BigInteger y=new BigInteger(ss.toString());
            
            System.out.println(y.subtract(x));
        }

    }
}
