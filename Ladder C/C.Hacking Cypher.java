import java.util.*;
public class HackingCypher{
        public static long get_rem(long x,long y,long b){
                long rem=1;
                while(y>0){
                        if((y&1)!=0){
                                rem = (rem*x)%b;
                        }
                        x=(x*x)%b;
                        y=(y>>1);
                }
            // System.out.println(rem%b);
                return rem%b;
        }
        public static boolean find(List<Integer> l,long tar){
                int s=0;
                int e=l.size()-1;
                while(s<=e){
                        int mid = s+(e-s)/2;
                    // System.out.println(mid);
                        if(l.get(mid)>tar){
                                e=mid-1;
                        }
                        else if(l.get(mid)<tar){
                                s=mid+1;
                        }
                        else{
                                return true;
                        }
                }
                return false;
        }
	public static void main(String[] args){
                List<Integer> l1 = new ArrayList<>();
                List<Integer> l2 = new ArrayList<>();
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
                 long a = sc.nextInt();
                long b = sc.nextInt();
                long val =0;
                for(int i=0;i<s.length()-1;i++){
                    val*=10;
                    val+=(long)(s.charAt(i)-48);
                    val = val%a;
                    if(val==0){
                        if(s.charAt(i+1)-48!=0){
                                l1.add(i);
                        }
                    }
                }
                long var=0;
                for(int i=s.length()-1;i>=0;i--){
                         long rem = get_rem(10, s.length()-1-i, b);
                        rem=(rem*(s.charAt(i)-48))%b;
                        var= (var+rem)%b;
                        if(var==0){
                                l2.add(i);
                        }
                }
                Collections.sort(l2);
        // System.out.println(l1+" "+l2);
        if(l1.size()==0 || l2.size()==0){
            System.out.println("NO");
            return;
        }
                for(int i=0;i<l1.size();i++){
                        long tar = l1.get(i)+1;
                    // System.out.println("tar"+" "+tar);
                        boolean found = find(l2,tar);
                        if(found){
                                System.out.println("YES");
                            
                                System.out.println(s.substring(0,l1.get(i)+1));
                                System.out.println(s.substring(l1.get(i)+1));
                            return;
                        }
                }
                System.out.println("NO");
	}
}