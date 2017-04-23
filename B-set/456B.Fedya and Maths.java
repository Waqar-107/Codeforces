package pkg456b.fedya.and.maths;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.util.Scanner;

public class FedyaAndMaths
{
    public static void main(String[] args) 
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
       Scanner in=new Scanner(System.in);
       BigInteger b;
       BigInteger x=new BigInteger("4");
       BigInteger y=new BigInteger("0");
       
       b=in.nextBigInteger();
       
       if(b.mod(x).equals(y))
           System.out.println("4");
       else
           System.out.println("0");
         
    }
    
}
