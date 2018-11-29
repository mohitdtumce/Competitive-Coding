import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class C735B{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);  
        int n = in.nextInt();
        int n1 = in.nextInt();
        int n2 = in.nextInt();
        Integer [] wealth = new Integer [n];
        for (int i = 0; i < n; i++) {
            wealth[i] = in.nextInt();
        } 
        Arrays.sort(wealth, Collections.reverseOrder());

        double sum1 = 0, sum2 = 0;
        int index = 0, i = 0;
        while (index < Math.min(n1, n2) &&  i < n) {
            sum1 += wealth[i];
            index++;
            i++;
        }
        index = 0;
        while (index < Math.max(n1, n2) &&  i < n) {
            sum2 += wealth[i];
            index++;
            i++;
        }
        sum1 /= (Math.min(n1, n2));
        sum2 /= (Math.max(n1, n2));
        System.out.printf("%.8f", (sum1 + sum2));
    }
}