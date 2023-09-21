package Unit1;
import java.io.*;
/*
    - Character stream can read and write through string
    - use two classes:
    - FileReader: to read data from file
    - FileWriter: to write data into file
 */
public class DemoCharacterStream {
    public static void main(String[] args) {
        try {
            FileWriter fw = new FileWriter("csit.txt");
            String data = "Hello world!";
            fw.write(data);
            System.out.println("Content has been written to the file.");
            fw.close();

            // read
            FileReader fr = new FileReader("csit.txt");
            int res;
            while((res = fr.read()) != -1) {
                System.out.println((char) res);
            }
            fr.close();
        } catch (IOException ioe) {
            System.out.println("ERROR: " + ioe);
        }
    }
}
