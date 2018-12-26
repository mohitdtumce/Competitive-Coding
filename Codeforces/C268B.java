import java.util.Scanner;
public class C268B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int counter = n;
        for (int i = 1; i <= n-1; i++) {
            counter += ((n - i) + i*(n - i - 1));
        }
        System.out.print(counter);
        in.close();
    }
}