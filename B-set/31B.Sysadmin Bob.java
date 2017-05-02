import java.util.ArrayList;
import java.util.Scanner;

public class SysadminBob 
{

    public static void main(String[] args)
    {
                Scanner in = new Scanner(System.in);

        String s=in.next();
        StringBuilder x=new StringBuilder();
        ArrayList a=new ArrayList();
        
        
        boolean la=false,at=false,f=true;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='@')
            {
                if(i+1<s.length() && la && Character.isLetter(s.charAt(i+1)))
                {
                    x.append('@');x.append(s.charAt(i+1));
                    a.add(x.toString());la=false;i++;at=true;
                    x.delete(0,x.length());
                }
                
                else
                {
                    f=false;break;
                }
            }
            
            else
            {
                x.append(s.charAt(i));
                la=true;
            }
        }
        
        if(!at)
            f=false;
        
        if(f)
        {
            
            String ss=(String) a.get(a.size()-1);
            x.delete(0,x.length());
            x.append(ss);//System.out.println(x);
            StringBuilder ff=new StringBuilder();
            
            for(int i=s.length()-1;i>=0;i--)
            {
                if(s.charAt(i)=='@')
                    break;
                else
                    ff.append(s.charAt(i));
            }
            
            a.remove(a.size()-1);
            x.delete(x.length()-1,x.length());
            x.append(ff.reverse());
            a.add(x);
            
            for(int i=0;i<a.size();i++)
            {
                System.out.print(a.get(i));
                if(i+1!=a.size())
                    System.out.print(",");
            }
        }
        
        else
        {
            System.out.println("No solution");
        }
    }
    
}
