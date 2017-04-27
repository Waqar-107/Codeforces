import java.util.ArrayList;
import java.util.Scanner;
import java.util.TreeSet;

public class StudentsAndShoelace 
{
     public static class pair {

    public int f, s;

    public pair(int f, int s) {
        this.f = f;
        this.s = s;
    }
}

    
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int m = in.nextInt();

        int u, v;
        TreeSet[] nodes = new TreeSet[n];

        for (int i = 0; i < n; i++) {
            nodes[i] = new TreeSet();
        }

        for (int i = 0; i < m; i++) {
            u = in.nextInt();
            v = in.nextInt();

            u--;
            v--;

            nodes[u].add(v);
            nodes[v].add(u);
        }

        int g = 0, gt, temp;
        while (true) {
            gt = 0;
            ArrayList<pair> arr = new ArrayList();
            for (int i = 0; i < n; i++) {
                if (nodes[i].size() == 1) {
                    temp = (int) nodes[i].pollFirst();
                    arr.add(new pair(temp, i));
                    gt++;
                }
            }

            if (gt == 0) {
                break;
            } else {
                g++;
            }

            //removal
            for (pair e : arr) {
                nodes[e.f].remove(e.s);
            }
        }
        System.out.println(g);
    }
    
}
