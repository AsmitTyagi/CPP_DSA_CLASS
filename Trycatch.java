import java.util.Scanner;
import java.io.FileInputstream;
public class Trycatch{
    public static void main(String[] args) {
         Try{
            int a=100, b=0, c;
            c=a/b;
            System.out.println(c);

         }
         catch(Exception e ){
            System.out.println(e);

         }
         System.out.println("heyyy");
         
    }
}