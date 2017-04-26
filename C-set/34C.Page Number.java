/*from dust i have come, dust i will be*/
import java.util.*;

public class x 
{   
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        String s=in.next();
        TreeSet<String> tt=new TreeSet();
        
        StringBuilder ss=new StringBuilder();
        for(int i=0;i<s.length();i++)
        {
            if(i==s.length()-1)
            {
                ss.append(s.charAt(i));
                tt.add(ss.toString());//System.out.println(ss);
                break;
            }
            
            if(s.charAt(i)==',')
            {
                tt.add(ss.toString());//System.out.println(ss);
                ss.delete(0,ss.length());
            }
            
            else
            {
                ss.append(s.charAt(i));
            }
        }

        
        int[] x=new int[tt.size()];
        String temp;
        int i=0,l=tt.size();
        while(tt.size()>0)
        {
           temp=tt.pollFirst();
           x[i]=Integer.parseInt(temp);//System.out.println(x[i]);
           i++;
        }
        
        Arrays.sort(x);
        
        //print
        boolean f=true;
        for(i=0;i<x.length;i++)
        {
            if(i==x.length-1)
            {
                System.out.print(x[i]);
            }
            
            else{
                if(x[i+1]-x[i]==1 && f)
                {
                    System.out.print(x[i]+"-");
                    f=false;
                }
                
                else if(x[i+1]-x[i]==1 && !f)
                {
                    continue;
                }
                
                else if(x[i+1]-x[i]!=1)
                {
                    System.out.print(x[i]+",");
                    f=true;
                }
            }
        }
        
    }
}
