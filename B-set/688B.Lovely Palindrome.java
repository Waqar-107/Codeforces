package pkg688b.lovely.palindrome;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class LovelyPalindrome
{
  public static void main(String[] args) throws IOException
    {
        String s;
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        
        s=br.readLine();
        
        StringBuilder str=new StringBuilder(s);
        
        System.out.println(s+str.reverse());
         
    }
    
}
