import java.util.Scanner;

public class C349A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int count25 = 0, count50 = 0, count100 = 0, note;
        int n = in.nextInt();
        boolean error = false;
        for (int i = 0; i < n; i++) {
            note = in.nextInt();
            if (note == 25) {
                count25++;
            } else if (note == 50) {
                if (count25 > 0) {
                    count25 -= 1;
                    count50 += 1;
                } else {
                    error = true;
                    break;
                }
            } else if (note == 100) {
                if (count50 > 0 && count25 > 0) {
                    count50 -= 1;
                    count25 -= 1;
                    count100 += 1;
                } else if (count25 > 2) {
                    count25 -= 3;
                    count100 += 1;
                } else {
                    error = true;
                    break;
                }
            }
        }
        if (error) {
            System.out.print("NO");
        } else {
            System.out.print("YES");
        }
        in.close();
    }
}