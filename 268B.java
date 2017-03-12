import java.util.*;
public class testfile {

	public static void main(String[] args) {
		Scanner mohit = new Scanner(System.in);
		int n;
		long count=0;
		n = mohit.nextInt();
		int[] al = new int[n];

		for(int i=0;i<n;i++){
			al[i] = mohit.nextInt();
		}
		count += (2*n-1);
		count += al[0];
		for(int i=1;i<n;i++){
			count += Math.abs(al[i]-al[i-1]);
		}
		System.out.print(count);
		mohit.close();
	}

}