import java.util.Scanner;

public class bubble_sort {
	
	public static void main(String[] args)
	{
		Scanner s = new Scanner(System.in);
		int list[] = new int[5];
		System.out.println("Enter the array elements : ");
		for(int i = 0; i < list.length; i++)
		{
			list[i] = s.nextInt();
		}
		bubble_sort(list,list.length);
		System.out.println("Array elemnts are after Bubble Sort: ");
		for(int i = 0; i < list.length; i++)
		{
			System.out.print(list[i] + " ");
		}
	}

	private static void bubble_sort(int[] list, int length) {
		// TODO Auto-generated method stub
		int temp = 0;
		for(int i = 0; i < length-1; i++)
		{
			for(int j = i+1; j < length; j++)
			{
				if(list[i] > list[j])
				{
					temp = list[i];
					list[i] = list[j];
					list[j] = temp;
				}
					
			}
		}
		
	}

}
