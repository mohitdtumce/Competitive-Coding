
// Incomplete question
import java.util.Scanner;

public class C515C {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] counter = new int[10];
        int n = in.nextInt();
        char[] carr = in.next().toCharArray();
        for (int i = 0; i < n; i++) {
            // System.out.print((carr[i] - '0'));
            for (int j = (carr[i] - '0'); j >= 2; j--) {
                counter[j]++;
            }
        }

        for (int i = 0; i < 10; i++) {
            System.out.print(counter[i] + " ");
        }
        in.close();
    }
}