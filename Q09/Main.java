import java.util.Scanner;

public class Main {
    static boolean palindromeCheck(String str,int start,int end){
        if(start>=end)
            return true;
        if(str.charAt(start)!=str.charAt(end))
            return false;
        return palindromeCheck(str,start+1,end-1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String  str = sc.next();
        
        if(palindromeCheck(str,0,str.length()-1))
            System.out.println("palindrome");
        else    
            System.out.println("Not Palindrome");
    }    
}
