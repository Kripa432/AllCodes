import java.lang.*;
import java.util.*;
import java.io.*;

class physics{
	public static void main(String [] args){
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		//int [] arr=new int[1001];
		//int [] brr= new int[1001];
		while(t>0){
			t--;
			Set<Integer> set = new HashSet<Integer>();
			Set<Integer> set1 = new HashSet<Integer>();
			
			System.out.println(sc.next().split(" "));
			String [] str=sc.next().split(" ");
			
			
			int len=str.length;
			for(int i=0;i<len;i++)
				set.add(Integer.parseInt(str[i]));
				
			String [] str1=sc.next().split(" ");
			int leng=str1.length;
			for(int i=0;i<leng;i++)
				set1.add(Integer.parseInt(str1[i]));
			
			System.out.println(set);
			System.out.println(set1);
			Set<Integer> union = new HashSet<Integer>(set);
				union.addAll(set1);
			Set<Integer> intersection = new HashSet<Integer>(set);
				intersection.retainAll(set1);
			Set<Integer> difference = new HashSet<Integer>(set);
				difference.removeAll(set1);

			System.out.println(union);
			System.out.println(intersection);
			System.out.println(difference);

		}

	}	
}