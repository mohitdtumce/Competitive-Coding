import java.util.*;
public class testfile {

	public static void main(String[] args) {
		Scanner mohit = new Scanner(System.in);
		// declaring
		String s = new String();
		int[] alp = new int[26];
		int k,max=0;
		long sum=0;
		
		//input
		s = mohit.next();
		k = mohit.nextInt();
		for(int i=0;i<26;i++){
			alp[i] = mohit.nextInt();
			if(max < (alp[i])){
				max = (alp[i]); 
			}
		}
		
		for(int i=0;i< s.length()+k;i++){
			
			if(i < s.length()){
				sum += (i+1)*(alp[(s.charAt(i)-'a')]); 
			}else{
				sum += (max)*(i+1);
			}
		}	
		System.out.println(sum);
		mohit.close();
	}

}