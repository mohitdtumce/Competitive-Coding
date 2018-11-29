import java.lang.*; 
import java.io.*; 
import java.util.*; 

public class C701B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long n = in.nextInt();
        int m = in.nextInt();
        long unattacked;
        Set<Integer> rowsAttacked = new HashSet<>();
        Set<Integer> colsAttacked = new HashSet<>();
        int row, col;
        for (int i = 0; i < m; i++) {
            row = in.nextInt();
            col = in.nextInt();
            rowsAttacked.add(row);
            colsAttacked.add(col);
            unattacked = n*n;
            unattacked -= (n*(rowsAttacked.size() + colsAttacked.size()));
            unattacked += (rowsAttacked.size()*colsAttacked.size());
            System.out.print(unattacked + " ");
        }
        in.close();
    }
}