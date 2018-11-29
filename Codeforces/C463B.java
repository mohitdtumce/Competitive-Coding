import java.lang.*; 
import java.io.*; 
import java.util.*; 

public class C463B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long energy = 0, expenditure = 0;
        int currHeight = 0, nextHeight;
        int n = in.nextInt();
        for (int i = 0; i < n; i++) {
            nextHeight = in.nextInt();
            if (nextHeight > currHeight) {
                if (energy >= (nextHeight - currHeight)) {
                    energy -= (nextHeight - currHeight);
                } else {
                    expenditure += ((nextHeight - currHeight) - energy);
                    energy = 0;
                }
            } else {
                energy += (currHeight - nextHeight);
            }
            currHeight = nextHeight;
        }

        System.out.print(expenditure);
    }
}