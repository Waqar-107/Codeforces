package pkg625b.war.of.the.corporations;

import java.util.Scanner;

public class WarOfTheCorporations
{
    public static void main(String[] args)
    {
        int i,j,k;
        String g,a;
        
        Scanner in=new Scanner(System.in);
        
        g=in.nextLine();
        a=in.nextLine();
        
        int index=g.indexOf(a);
        int count=0;
        int len=g.length();
        
        while(index<len && index>-1)
        {
            index=g.indexOf(a,index+a.length());
            count++;
        }
        
        System.out.print(count);
        
    }
    
}
