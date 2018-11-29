import java.util.*;
import java.lang.* ;
public class Set{
	public static void main(String[] args){
		
		String test1,test2,test3;
		Scanner input = new Scanner(System.in);
		test1 = input.next();
		test2 = input.next();
		test3 = input.next();
		if(test1.length() + test2.length() != test3.length()){
			System.out.println("NO");
			return;
		}else{
			test1 = test1 + test2;
			char test1toarray[] = test1.toCharArray();
			char test3toarray[] = test3.toCharArray();
			Arrays.sort(test3toarray);
			Arrays.sort(test1toarray);
			
			for(int i=0; i< test1toarray.length;i++){
				if(test1toarray[i] != test3toarray[i]){
					System.out.println("NO");
					return;
				}
			}
			System.out.println("YES");
		}
	}
}