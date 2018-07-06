import java.util.*;

public class mohit_sharma{
	public static void main(String[] args){
	
		Scanner input = new Scanner(System.in);
		long k,n,w;
		k=input.nextLong();
		n=input.nextLong();
		w=input.nextLong();
		long total = k*((w*(w+1))/2);
		if(total>n){
			System.out.print(total-n);
		}else{
			System.out.print(0);
		}
				
	}
}