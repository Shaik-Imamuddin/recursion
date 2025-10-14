import java.util.Scanner;

public class Main{
    static int countDigits(int n){
        if (n==0)
            return 0;
        return 1 + countDigits(n/10);
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        if(n==0)
            System.out.println(1);
        else
            System.out.println(countDigits(n));
    }
}