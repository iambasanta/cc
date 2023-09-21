package Unit1;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
/*
    - Stream is a sequence of data in java input output is done through stream
    - ByteStream: read and write data through sequence of byte, two classes are used
    - FileInputStream: to read data from file through byte stream
    - FileOutputStream: to write data into file through byte stream
*/
public class DemoByteStream {
    public static void main(String[] args) {
        // writing into file through byte stream
        try {
            FileOutputStream fos = new FileOutputStream("csit.txt");
            String data = "Java is hawaa.";
            // converting into byte
            byte []b1 = data.getBytes();
            fos.write(b1);
            System.out.println("Data has been written to the file.");

            // reading data from file
            FileInputStream fis = new FileInputStream("csit.txt");
            int res;
            while ((res = fis.read()) != -1) {
                System.out.println((char) res);
            }
        } catch (IOException ioe) {
            System.out.println("ERROR: " + ioe);
        }
    }
}
