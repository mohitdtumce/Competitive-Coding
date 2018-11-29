import java.util.Scanner;
public class C749A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        if (n % 2 == 0) {
            System.out.println(n/2);
            for (int i = 1; i <= n/2; i++) {
                System.out.print("2 ");
            }
        } else {
            n -= 3;
            System.out.println(n/2 + 1);
            for (int i = 1; i <= n/2; i++) {
                System.out.print("2 ");
            }
            System.out.print("3");
        }
    }
}