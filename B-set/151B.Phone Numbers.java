import java.util.ArrayList;
import java.util.Scanner;

public class PhoneNumbers 
{
        static class man
    {
        String name;
        public man(){}
        public int t=0,g=0,p=0;
    }
    
    public static int who(String s)
    {
        if(s.charAt(0)==s.charAt(1) && s.charAt(1)==s.charAt(3) && s.charAt(3)==s.charAt(4) && s.charAt(4)==s.charAt(6) && s.charAt(6)==s.charAt(7))
            return 1;
        
        else if(s.charAt(0)>s.charAt(1) && s.charAt(1)>s.charAt(3) && s.charAt(3)>s.charAt(4) && s.charAt(4)>s.charAt(6) && s.charAt(6)>s.charAt(7))
            return 2;
        
        else
            return 3;
    }
    
    
    public static void main(String[] args) 
    {
                Scanner in = new Scanner(System.in);

        int n=in.nextInt();
        int m;
        String name,number;
        ArrayList<man> arr=new ArrayList<>();
        
        int tmax=0,pmax=0,gmax=0;
        while(n>0)
        {
            m=in.nextInt();
            name=in.next();
            
            man x=new man();
            x.name=name;
            
            for(int i=0;i<m;i++)
            {
                number=in.next();
                
                if(who(number)==1)
                {
                    x.t++;//System.out.println(name+" "+who(number));
                    tmax=Integer.max(x.t, tmax);
                }
                
                else if(who(number)==2)
                {
                    x.p++;//System.out.println(name+" "+who(number));
                    pmax=Integer.max(x.p, pmax);
                }
                
                else
                {
                    x.g++;//System.out.println(name+" "+who(number));
                    gmax=Integer.max(x.g, gmax);
                }
            }
            
            arr.add(x);
            
            n--;
        }
        
        StringBuilder s=new StringBuilder();
        StringBuilder ss=new StringBuilder();
        StringBuilder sss=new StringBuilder();
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr.get(i).t==tmax)
            {
                s.append(arr.get(i).name);
                s.append(", ");
            }
            
            if(arr.get(i).p==pmax)
            {
                ss.append(arr.get(i).name);
                ss.append(", ");
            }
            
           if(arr.get(i).g==gmax)
            {
                sss.append(arr.get(i).name);
                sss.append(", ");
            }
        }
        
        s.delete(s.length()-2,s.length());
        s.append(".");
        ss.delete(ss.length()-2,ss.length());
        ss.append(".");
        sss.delete(sss.length()-2,sss.length());
        sss.append(".");
        
        System.out.println("If you want to call a taxi, you should call: "+s);
        System.out.println("If you want to order a pizza, you should call: "+ss);
        System.out.println("If you want to go to a cafe with a wonderful girl, you should call: "+sss);
        
    }
    
}
