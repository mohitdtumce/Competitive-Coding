import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class C461A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        long [] arr = new long[n];
        long sum = 0;
        for(int i=0;i<n;i++){
        	arr[i] = input.nextLong();
        	sum += arr[i];
        }
        Arrays.sort(arr);
        System.out.print(function(arr,0,n-1,sum));
        }
    public static long function(long arr[],int start,int end,long sum){
    	if(start==end){
    		return sum;
    	}else{
    		return sum+function(arr,start,start,arr[start])+function(arr,start+1,end,sum-arr[start]);
    	}
    }
}