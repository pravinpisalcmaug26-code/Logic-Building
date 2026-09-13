import java.util.Scanner;

public class ReverseArray {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the size of array");
		
		int n=sc.nextInt();
		
		int arr[]=new int[n];
		
		System.out.println("enter"+n+"elements");
		for(int itmp=0;itmp<n;itmp++) {
			arr[itmp]=sc.nextInt();
			
		}
    
		System.out.println("reverse array=");
		for(int itmp=n-1;itmp>=0;itmp--)
		{
			System.out.println(arr[itmp]+" ");
		}
	}

}
