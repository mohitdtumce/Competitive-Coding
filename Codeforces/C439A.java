import java.util.Scanner;
public class C439A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int d = in.nextInt();
        int t;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            t = in.nextInt();
            sum += t;
        }
        sum += (n-1)*10;
        if (sum > d) {
            System.out.print("-1");
        } else {
            System.out.print((n-1)*2 + (d - sum)/5);
        }
        in.close();
    }
}