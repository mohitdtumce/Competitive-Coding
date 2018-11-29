import java.util.*;
public class Sample {

	public static void main(String[] args) {
		int n,m;
		Scanner mohit = new Scanner(System.in);
		n = mohit.nextInt();
		m = mohit.nextInt();
		int a,b;
		a = mohit.nextInt();
		long count = (a-1);	
		for(int i=1; i<m; i++){
			b= mohit.nextInt();
			if(a>b){
				count+=(n-a+b);
			}else if(a<b){
				count+=(b-a);
			}
			a=b;
		}
		System.out.println(count);
		mohit.close();
	}
}