/*from dust i have come, dust i will be*/

import java.util.Scanner;

public class x
{
    public static void main(String[] args)
    {
        Scanner in=new Scanner(System.in);

        String s=in.next();

        String s2=s.replace("dot",".");
        String s3=s2.replace("at","@");

        StringBuilder x=new StringBuilder();

        //System.out.println(s3);
        int at=0;
        for(int i=0;i<s3.length();i++)
        {
            if(i==s3.length()-1 || i==0)
            {
                if(s3.charAt(i)=='@'){
                    x.append("at");
                }
                else if(s3.charAt(i)=='.')
                    x.append("dot");
                else
                    x.append(s3.charAt(i));
            }

            else if(s3.charAt(i)=='@')
            {
                if(at>0)
                    x.append("at");
                else{
                    x.append("@");
                    at++;
                }
            }

            else
                x.append(s3.charAt(i));
        }

        System.out.println(x);
    }
}
