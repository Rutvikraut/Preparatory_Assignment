import java.util.Scanner;

public class assignment14 {

    public static String reverseString(String s) {

        char chr[] = s.toCharArray();
        int len = chr.length;
        char temp;
        for (int i = 0; i < len / 2; i++) {
            temp = chr[i];
            chr[i] = chr[len - i - 1];
            chr[len - i - 1] = temp;
        }
        return new String(chr);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str, rev;
        System.out.print("Enter a string: ");
        str = sc.next();
        rev = reverseString(str);

        if (str.equals(rev))
            System.out.println(str + " is pallindrome.");
        else
            System.out.println(str + " is not pallindrome.");

        sc.close();
    }
}
