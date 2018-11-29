import java.lang.*; 
import java.io.*; 
import java.util.*; 

public class C588B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long n = in.nextLong();
        ArrayList <Long> divisor = new ArrayList<>();
        for (long i = 2; i <= n/2; i++) {
            if (n % i == 0) {
                divisor.add(i);
            }
        }
        divisor.add(n);
        int found;
        for (int i = divisor.size() - 1; i >= 0; i--) {
            found = i - 1;
            for (int j = i-1; j >= 0; j--) {
                if (divisor.get(i) % (divisor.get(j)*divisor.get(j)) == 0){
                    found --;
                }
            }

            if (found == i-1) {
                System.out.print(divisor.get(i));
                break;
            }
        }
        in.close();
    }
}