/*from dust i have come, dust i will be*/
            
import java.util.*;

public class x 
{   
    public static void main(String[] args) 
    {
        Scanner in=new Scanner(System.in);
        
        int n, m;
        n=in.nextInt();
        
        if(n % 2 == 0)
            m = n / 2;
        else
        {
            m = (n - 3) / 2; 
            System.out.print(7);
        }
    
        while(m > 0)
        {
            m--;
            System.out.print(1);
        }
     
    }
}
