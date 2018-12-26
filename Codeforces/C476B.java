import java.util.*; 

public class C476B {
    public static void main(String[] args) {
        long [] factorial = new long[] {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
        Scanner in = new Scanner(System.in);
        String str1 = in.next();
        String str2 = in.next();
        int positive = 0, negative = 0, unknown = 0;
        for (int i = 0; i < str1.length(); i++) {
            if (str1.charAt(i) == '+')
                positive++;
            else
                negative++;
            
            if (str2.charAt(i) == '+')
                positive--;
            else if (str2.charAt(i) == '-')
                negative--;
            else 
                unknown++;
        }

        double res = 0;
        long fact;
        if (positive < 0 || negative < 0) {
            res = 0;
        } else {
            if (unknown == 0) {
                res = 1;
            } else {
                fact = (factorial[unknown])/((factorial[positive])*(factorial[negative]));
                res = (double)fact / (1 << unknown);
            }
        }
        System.out.print(res);
        in.close();
    }
}