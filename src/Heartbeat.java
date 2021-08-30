
public class Heartbeat 
{
	public static void main(String[] args)
	{
		int n = 0;
		
		while(true)
		{
			try
			{
				Thread.sleep(1000);
				n++;
				System.out.println("Heartbeat: " + n);
			}
			catch(InterruptedException e)
			{
				System.out.println("Heart attack: " + e);
			}
		}
	}
}
