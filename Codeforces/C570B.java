import java.util.Scanner;
public class C570B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
    
        if ((n & 1) != 0) {
            if (m < (n/2 + 1)) {
                System.out.print(Math.min(m + 1, n));
            } else {
                System.out.print(Math.max(m - 1, 1));
            }
        } else {
            if (m >= (n/2 + 1)) {
                System.out.print(Math.max(m - 1, 1));
            } else if (m <= (n/2)) {
                System.out.print(Math.min(m + 1, n));
            }
        }
        in.close();
    }
}