import java.util.Scanner;
import java.util.Arrays;
public class Sortarray {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the size of array");
		int n=sc.nextInt();
		
		
		int arr[]=new int[n];
		
		System.out.println("enter"+n+"elements");
		
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
			
		}
		
		Arrays.sort(arr);
		
		System.out.println("sorrted array");
		
		for(int i=0;i<n;i++)
		{
			System.out.println(arr[i]+" ");
		}

	}

}
