import java.util.*;

public class mohit_sharma{
	public static void main(String[] args){
		TreeMap<Integer,Integer> test = new TreeMap<>();
		Scanner mohit = new Scanner(System.in);
		int test_cases;
		test_cases =mohit.nextInt();
		
		for(int i=0; i< test_cases;i++){
			test.put(mohit.nextInt(), i+1);
		}
		
		for(int key: test.keySet())
            System.out.print(test.get(key)+" ");
	}
}