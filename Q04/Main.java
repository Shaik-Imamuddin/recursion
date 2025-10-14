import java.util.Scanner;

public class Main {
    static int sumofDigits(int n){
        if(n==0)
            return 0;
        return n%10+sumofDigits(n/10);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.println(sumofDigits(n));
    }
}