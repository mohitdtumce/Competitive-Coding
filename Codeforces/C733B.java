import java.lang.*; 
import java.io.*; 
import java.util.*; 

public class C733B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int [] l = new int[n];
        int [] r = new int[n];

        int sumL = 0, sumR = 0;
        boolean LR = false, RL = false;
        for (int i = 0; i < n; i++) {
            l[i] = in.nextInt();
            r[i] = in.nextInt();
            if (l[i] < r[i])
                RL = true;
            if (r[i] < l[i])
                LR = true;
            sumL += l[i];
            sumR += r[i];
        }

        int index = 0;
        if (LR && RL) {
            int maxSum = Math.abs(sumL - sumR);
            int maxSum1 = maxSum;
            for (int i = 0; i < n; i++) {
                if (maxSum1 < Math.abs(sumL - 2*l[i] - sumR + 2*r[i])) {
                    index = i+1;
                    maxSum1 = Math.abs(sumL - 2*l[i] - sumR + 2*r[i]);
                }
            }
        } 
        
        System.out.print(index);
        in.close();
    }
}