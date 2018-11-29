import java.util.Scanner;
import java.util.Arrays;
public class C545D {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long [] person = new long[n];
        for (int i = 0; i < n; i++) {
            person[i] = in.nextLong();
        }
        Arrays.sort(person);
        long counter = 0;
        int flag = 0;
        for (int i = 0; i < n; i++) {
            if (person[i] >= counter) {
                flag++;
                counter += person[i];
            }
        }
        
        System.out.print(flag);
    }
}