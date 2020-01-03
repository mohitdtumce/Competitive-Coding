import java.util.*;
public class mohit_sharma{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		int m,n;
		n = input.nextInt(); 
		m = input.nextInt();
	    int k;
	    k = m >n ? n:m;
	    if(k%2 == 0){
	        System.out.println("Malvika");
	    }
	    if(k%2 == 1){
	    	System.out.println("Akshat");
	    }

	}
}