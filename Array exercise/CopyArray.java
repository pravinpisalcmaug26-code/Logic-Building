import java.util.Scanner;

public class CopyArray {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.println("enter the size of array ");
		
		int n=sc.nextInt();
		
		int arr1[]=new int[n];
		int arr2[]=new int[n];
		
		for(int itmp=0;itmp<n;itmp++) {
			arr1[itmp]=sc.nextInt();
		}
         
		
		for(int itmp=0;itmp<n;itmp++) {
			arr2[itmp]=sc.nextInt();
		}
		
		System.out.println("copied array");
		
		for(int itmp=0;itmp<n;itmp++) {
			System.out.println(arr2[itmp]+" ");
		}
		
	}

}
