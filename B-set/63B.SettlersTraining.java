package pkg63b.settlers.training;

import java.util.Arrays;
import java.util.Scanner;

public class SettlersTraining
{
    public static void main(String[] args) 
    {
        int i,j,k;
            int x=0,h=-1,count=0,n;
            
            Scanner in=new Scanner(System.in);
            
            n=in.nextInt();
            k=in.nextInt();
            
            int[] a=new int[n];
            
            for(i=0;i<n;i++)
            {
                a[i]=in.nextInt();
                if(a[i]==k)
                    x++;
            }
            
            while(x!=n)
            {
                Arrays.sort(a);
                h=-1;
                for(i=0;i<n;i++)
                {
                    if(a[i]!=h && a[i]<k)
                    {
                        h=a[i];
                        a[i]++;
                        if(a[i]==k)
                            x++;
                    }//System.out.print(a[i]+" ");
                }count++;//System.out.println("");
            }
        System.out.println(count);
    }
    
}
