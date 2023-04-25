package practice1;

public class splitStringleet {
	public String truncateSentence(String s, int k)
    {
        String s1[]=s.split(" ");
        StringBuilder sb=new StringBuilder();
        for (int i=0;i<k;i++)
        {
           sb.append(s1[i]).append(" ") ;
        }
        sb.setLength(sb.length()-1);
        return sb.toString();
    }
}
