import java.util.Scanner;
public class Set{
	public static void main(String[] args){
		int n;
		String test1,test2;
		Scanner input = new Scanner(System.in);
		n = input.nextInt();
		test1 = input.next();
		test2 = input.next();
		int count=0;
		for(int i=0; i< n;i++){
			if(Math.abs(test1.charAt(i) - test2.charAt(i)) <=5){
				count += Math.abs(test1.charAt(i) - test2.charAt(i));
			}else{
				count += (10 - Math.abs(test1.charAt(i) - test2.charAt(i)));
			}
		}
		
		System.out.print(count);
	}
}