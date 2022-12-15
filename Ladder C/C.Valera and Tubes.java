import java.util.*;

public class ValeraTubes{
     static class Pair{
		 int a;
		 int b;
		 Pair(){

		 }
		   Pair(int a,int b){
			this.a = a;
			this.b=b;
		}
	}
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int m = sc.nextInt();
		int k = sc.nextInt();
		 int i=1;
		 int j=1;
		boolean flag=true;
		List<Pair> list = new ArrayList<>();
		while(i<=n){
			if(flag){
				while(flag && j<=m){
					Pair p = new Pair(i,j);
					list.add(p);
					if(j==m){
						break;
					}
					j++;
				}	
				flag=false;
				
			}
			else{
				while(flag==false && j>=1){
                    Pair p = new Pair(i,j);
					list.add(p);
					if(j==1){
						break;
					}
					j--;
				}
				flag=true;
			}
			
			i++;
		}
		int z=0;
		while(k-->1){
			Pair p = list.get(z);
			System.out.print(2+" "+p.a+" "+p.b);
			++z;
			Pair p2 = list.get(z);
			System.out.print(" "+p2.a+" "+p2.b);
			System.out.println();
			++z;
		}
		
			int count = list.size()-z;
			System.out.print(count);
			for(int u=z;u<list.size();u++){
				Pair p = list.get(u);
				System.out.print(" "+p.a+" "+p.b);
			}
		
	}
}