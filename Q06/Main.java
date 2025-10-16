import java.util.Scanner;

public class Main {
    static int reverseNum(int n, int rev){
        if(n==0) return rev;
        return reverseNum(n/10, rev*10 + n%10);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(reverseNum(n, 0));
    }
}
