import java.util.Scanner;

public class coin {

	public static void main(String[] args) {
		int insert,price,charge;
		Scanner sc=new Scanner(System.in);
		
		int []coin= {1000,500,100};
		int []coin_count=new int[coin.length];
		
		System.out.print("insert coin:");
		insert=sc.nextInt();
		System.out.print("product price:");
		price=sc.nextInt();
		charge=insert-price;
		System.out.print("charge:"+charge+"won");
		System.out.println();
		for(int i=0;i<coin.length;i++)
		{
			coin_count[i]=charge/coin[i]; 
			charge=charge%coin[i];      
			System.out.println(coin[i]+":"+coin_count[i]);
		}
		
	}

}
