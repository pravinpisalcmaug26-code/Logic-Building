import java.util.Scanner;
import java.util.Arrays;
public class Average {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the size of array");
		
		int n=sc.nextInt();
		
		int arr[]=new int[n];
		 int sum=0;
		
		System.out.println("enter "+ n + "elements");
		
		for(int itmp=0;itmp<n;itmp++)
		{
			arr[itmp]=sc.nextInt();
			sum=sum+arr[itmp];
			}
		double average = (double) sum / n;
		System.out.println(average);
		
         
	}

}
