import java.io.*;

public class renameFiles {
    public static void main(String[] args) throws IOException {
        String path = "/home/mohitsharma/Desktop/Relive/Codeforces-CodeChef-Hackerearth/Codeforces";
        File myfolder = new File(path);
        File[] fileArray = myfolder.listFiles();
        File tempFileName = null;
        for (int i = 0; i < fileArray.length; i++) {
            if (fileArray[i].isFile()) {
                tempFileName = new File(path + "\\" + fileArray[i].getName());
                System.out.println(tempFileName.getName());
                String newName = "C" + fileArray[i].getName() + ".cpp";
                tempFileName.renameTo(new File(path + "\\" + newName));
                System.out.println(tempFileName.getName());
            }
        }

    }
}