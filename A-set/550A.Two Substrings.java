/*from dust i have come, dust i will be*/

import java.util.*;

public class x 
{   
    public static void main(String[] args)
    {
        Scanner in= new Scanner(System.in);

        String s=in.next();
        
        boolean f1=false,s1=false;
        int i;
        
        for(i=0;i<s.length()-1;i++)
        {
            if(s.charAt(i)=='A' && s.charAt(i+1)=='B')
            {
                i+=2;f1=true;
                break;
            }
        }
        
        for(int j=i;j<s.length()-1;j++)
        {
            if(s.charAt(j)=='B' && s.charAt(j+1)=='A')
            {
                s1=true;
                break;
            }
            
        }
        
        boolean f2=false,s2=false;
        for(i=0;i<s.length()-1;i++)
        {
            if(s.charAt(i)=='B' && s.charAt(i+1)=='A')
            {
                i+=2;s2=true;
                break;
            }
        }
        
        for(int j=i;j<s.length()-1;j++)
        {
            if(s.charAt(j)=='A' && s.charAt(j+1)=='B')
            {
                f2=true;
                break;
            }
        }
        
        //System.out.println(f1+" "+s1+" "+f2+" "+s2);
        
        if((f1 && s1) || (f2 && s2))
            System.out.println("YES");
        else
            System.out.println("NO");
            
    }
}
