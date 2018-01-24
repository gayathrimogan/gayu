
import java.io.*;
 
public class Test
{
    public static void main(String[] args) throws IOException
    {
        File file = new File("C:\\Users\\Mayank\\Desktop\\1.txt");
        FileInputStream fileStream = new FileInputStream(file);
        InputStreamReader input = new InputStreamReader(fileStream);
        BufferedReader reader = new BufferedReader(input);
         
        String line;
         
       
        int ctWord = 0;
        int sentenceCt = 0;
        int characterCt = 0;
        int paragraphCt = 1;
        int whitespaceCt = 0;
        while((line = reader.readLine()) != null)
        {
            if(line.equals(""))
            {
                paragraphCount++;
            }
            if(!(line.equals("")))
            {
                 
                characterCt += line.length();
                 
                
                String[] wordList = line.split("\\s+");
                 
                ctWord += wordList.length;
                whitespaceCount += ctWord -1;
                 
              
                String[] sentenceList = line.split("[!?.:]+");
                 
                sentenceCount += sentenceList.length;
            }
        }
         
        System.out.println("Total word ct = " + ctWord);
        System.out.println("Total number of sentences = " + sentenceCt);
        System.out.println("Total number of characters = " + characterCt);
        System.out.println("Number of paragraph = " + paragraphCt);
        System.out.println("Total number of whitespace = " + whitespaceCt);
    }
}

