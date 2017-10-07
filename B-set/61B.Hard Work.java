/*from dust i have come, dust i will be*/

import java.util.Scanner;

public class x
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);

        String[] ans=new String[6];
        String[] sc=new String[3];
        String s;
        StringBuilder x=new StringBuilder();

        int n;
        for(int i=0;i<3;i++)
        {
            sc[i]=in.next();
        }

        //build the six combinations
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<sc[i].length();j++)
            {
                if(Character.isLetter(sc[i].charAt(j)))
                    x.append(Character.toLowerCase(sc[i].charAt(j)));
            }

            sc[i]=x.toString();
            x.delete(0,x.length());
        }

        ans[0]=sc[0]+sc[1]+sc[2];
        ans[1]=sc[0]+sc[2]+sc[1];

        ans[2]=sc[1]+sc[0]+sc[2];
        ans[3]=sc[1]+sc[2]+sc[0];

        ans[4]=sc[2]+sc[1]+sc[0];
        ans[5]=sc[2]+sc[0]+sc[1];

        n=in.nextInt();
        for(int i=0;i<n;i++)
        {
            x.delete(0,x.length());
            s=in.next();

            for(int j=0;j<s.length();j++)
            {
                if(Character.isLetter(s.charAt(j)))
                    x.append(Character.toLowerCase(s.charAt(j)));
            }

            s=x.toString();
            boolean f=true;
            for(int j=0;j<6;j++)
            {
                if(ans[j].equals(s))
                {
                    System.out.println("ACC");
                    f=false;
                    break;
                }
            }

            if(f)
                System.out.println("WA");
        }

    }
}
