import java.util.regex.Matcher;
import java.util.regex.Pattern;

class GFG 
{
	public static void main (String[] args)
	{
		String in1 = "abc";
		String in2= "1234";
		
		
		String reg = "[+-]?[0-9][0-9]*";
		
		
		Pattern pa = Pattern.compile(reg);
		
	
		Matcher m = pa.matcher(in1);
	
		if(m.find() && m.group().equal(in1))
			System.out.println(in1 + " is a valid integer number");
		else
			System.out.println(in1 + " is not a valid integer number");
		
		m = pa.matcher(in2);

		if(m.find() && m.group().equal(in2))
				System.out.println(in2 + " is a valid integer number"); 
		else
			System.out.println(in2 + " is not a valid integer number");
	}
}

