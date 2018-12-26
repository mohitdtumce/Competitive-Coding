// Incomplete
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;
public class C546B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int index, i, j, counter = 0, inc = n+1;

        boolean [] hash = new boolean[n+1];
        ArrayList<Integer> dup = new ArrayList<>();
        // ArrayList<Integer> empty = new ArrayList<>();
        for (i = 1; i <= n; i++) {
            index = in.nextInt();
            if (hash[index] == false) {
                hash[index] = true;
            } else {
                dup.add(index);
            }
        }
        Collections.sort(dup);
        for (i = 0; i < dup.size(); i++) {
            System.out.print(dup.get(i) + " ");
        }
        System.out.println();
        j = dup.size() - 1;
        i = n;
        while (j >= 0 && i >= 1) {
            while (i >= 1 && hash[i] == true) {
                i--;
            }
            if (i >= 1 && i >= dup.get(j)) {
                counter += (i - dup.get(j));
                System.out.println("i = " + i + " counter = " + counter);
                i -= 1;
            } else {
                counter += (inc - dup.get(j));
                System.out.println("inc = " + inc + " counter = " + counter);
                inc += 1;
            }
            j -= 1;
        }

        System.out.print(counter);
        in.close();
    }
}