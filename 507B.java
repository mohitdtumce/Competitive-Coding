import java.util.*;
public class testfile {

	public static void main(String[] args) {
		Scanner mohit = new Scanner(System.in);
		// declaring
		double r,x1,y1,x2,y2,d;
		int count=0;
		//input
		r = (double)mohit.nextInt();
		x1 = (double)mohit.nextInt();
		y1 = (double)mohit.nextInt();
		x2 = (double)mohit.nextInt();
		y2 = (double)mohit.nextInt();
		d = Math.sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		
		count = (int)(d/(2*r));
		d = (d/(2*r))-count;
		if(d==0){
			System.out.print(count);
		}else{
			System.out.print(count+1);
		}
		mohit.close();
	}

}