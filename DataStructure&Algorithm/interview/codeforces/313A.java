import java.util.*;
public class Set{
	public static void main(String[] args){
		
		Scanner input = new Scanner(System.in);
		long a = input.nextLong();
		if( a >= 0){
			System.out.print(a);
		}else if(a < 0){
			a= -a;
			int u = (int)(a % 10);
			a = a/10;
			int t = (int)(a % 10);
			a = a/10;			
			u = (u > t ? t:u);
			a = (a*10 + u);
			a = -a;
			System.out.print(a);
		}
		
	}
}