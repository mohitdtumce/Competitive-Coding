// incomplete question
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Calendar;
public class C538B {
    public static void main(String[] args) {
        int [] quasiBinary = new int [] {1, 10, 11, 100, 101, 110, 111, 1000, 
        1001, 1010, 1011, 1100, 1101, 1110, 1111, 10000, 10001, 10010, 10011, 
        10100, 10101, 10110, 10111, 11000, 11001, 11010, 11011, 11100, 11101, 
        11110, 11111, 100000, 100001, 100010, 100011, 100100, 100101, 100110, 
        100111, 101000, 101001, 101010, 101011, 101100, 101101, 101110, 101111, 
        110000, 110001, 110010, 110011, 110100, 110101, 110110, 110111, 111000, 
        111001, 111010, 111011, 111100, 111101, 111110, 111111, 1000000};
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();
        int index = 63;
        ArrayList<Integer> res = new ArrayList<>();
        while (num > 0) {
            if (num >= quasiBinary[index]) {
                System.out.print(index + " ");
                num -= quasiBinary[index];
                res.add(quasiBinary[index]);
            } else {
                index -= 1;
            }
        }
        System.out.println(res.size());
        for(int i = 0; i < res.size(); i++) {
            System.out.print(res.get(i) + " ");
        }
    }
}