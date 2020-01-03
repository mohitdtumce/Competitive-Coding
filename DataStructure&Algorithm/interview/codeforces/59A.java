import java.util.Scanner;
public class Set{
	public static void main(String[] args){
		
		String test1;
		Scanner input = new Scanner(System.in);
		test1 = input.next();
		int count=0;
		for(int i=0; i< test1.length();i++){
			
			if(test1.charAt(i) >= 65 && test1.charAt(i) <= 90){
				count ++;
			}
		}

		if(2*count <= test1.length() ){
			test1 = test1.toLowerCase();
			System.out.println(test1);
		}else if(2*count > test1.length() ){
			test1 = test1.toUpperCase();
			System.out.print(test1);
		}
	}
}