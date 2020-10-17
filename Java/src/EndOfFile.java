import java.util.Scanner;

public class EndOfFile {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String line, text = "";
        int i = 1;

        while( in.hasNextLine() != false){
            line = in.nextLine();
            text = text + Integer.toString(i) + " " + line +"\n";
            i++;
        }
        System.out.println(text);
    }
}
