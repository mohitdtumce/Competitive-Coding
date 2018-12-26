import java.util.Scanner;
public class C731B {
    public static void main(String[] args) {
        Scanner in = new Scanner((System.in));
        int n = in.nextInt();
        int pizza;
        // Integer [] pizza = new Integer [n];
        boolean rem = false, res = true;
        for (int i = 0; i < n; i++) {
            pizza = in.nextInt();
            if (rem) { pizza -= 1; rem = false; }
            if (pizza < 0) { res = false; break; }
            if (pizza > 0) {
                pizza %= 2;
                if ((pizza & 1) != 0) {
                    rem = true;
                }
            }
        }

        if (res && !rem) {
            System.out.print("YES");
        } else {
            System.out.print("NO");
        }
        in.close();
    }
}