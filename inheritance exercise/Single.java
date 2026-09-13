
class parent{
	
	void parent() {
		System.out.println("this is parent class");
	}
	
	
}
class child extends parent
{
	
	void child() {
		System.out.println("this is child class");
	}
}


public class Single {

	public static void main(String[] args) {
	
         parent p=new parent();
         p.parent();
         child c=new child();
         c.child();
         c.parent();
         
         
	}

}
