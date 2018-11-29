import java.util.Scanner;

public class C588A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int a, p, minPrice = 101;
        long cost = 0;
        for (int i = 0; i < n; i++) {
            a = input.nextInt();
            p = input.nextInt();
            minPrice = Math.min(minPrice, p);
            cost += (a*minPrice);
        }

        System.out.print(cost);
        input.close();
    }
}