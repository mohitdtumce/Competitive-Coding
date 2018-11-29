import java.util.*;
public class Sample {

	public static void main(String[] args) {
		Scanner mohit = new Scanner(System.in);
		long n,m;
		n = mohit.nextLong();
		m = mohit.nextLong();
		long kmin,kmax;
		kmax = ((n-m+1)*(n-m))/2;
		kmin = (((n%m)*((n/m)+1)*(n/m))+(m- n%m)*(n/m)*((n/m)-1))/2;
		System.out.println(kmin+" "+kmax);
		mohit.close();
	}
}