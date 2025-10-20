import java.util.Scanner;

public class Main {
    static String removeChar(String str,char ch,int index){
        if(index==str.length())
            return "";
        if(str.charAt(index)==ch)
            return removeChar(str,ch,index+1);
        else
            return str.charAt(index)+removeChar(str,ch,index+1);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str=sc.nextLine();
        char ch = sc.next().charAt(0);
        String res=removeChar(str,ch,0);
        System.out.println(res);
    }    
}