package Unit1;
import java.io.File;
import java.io.IOException;

public class DemoFileHandling {
    public static void main(String[] args) {
        try {
            File f1 = new File("csit.txt");

            if(!f1.exists()) {
                f1.createNewFile();
            } else {
                System.out.println("FILE ALREADY EXISTS");
            }

            System.out.println("Name of file is: " + f1.getName());
            System.out.println("Path of file is: " + f1.getPath());
            System.out.println("Absolute path is: " + f1.getAbsolutePath());
            System.out.println("Size of file is: " + f1.getTotalSpace());
        } catch (IOException ioe) {
            System.out.println("ERROR: " + ioe);
        }
    }
}
