import java.util.Scanner;

public class MinMaxArray {

	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		
		System.out.println("enter the size of array");
		int n=sc.nextInt();
		
		int arr[]=new int[n];
		
		System.out.println("enter"+n+"elements");
		
		for(int itmp=0;itmp<n;itmp++) {
			arr[itmp]=sc.nextInt();
		}
	
     
		int max= arr[0];
		int min=arr[0];
		
		for(int itmp=1;itmp<n;itmp++)
		{
			if(arr[itmp]>max)
			{
				max=arr[itmp];
				
			}
			
			if(arr[itmp]<min) {
				min=arr[itmp];
				
			}
		}
			
			System.out.println("maxmimum="+max);
			System.out.println("minimum="+min);
				
		}
		
	}


