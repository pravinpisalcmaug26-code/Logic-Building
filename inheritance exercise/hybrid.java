class Shape{
	void print() {
		System.out.println("this is a shape");
	}
}
	
class Rectangle extends Shape{
	void recprint() {
		System.out.println("this is a rectangle");
	}
}

class Circle extends Shape{
	void cirprint() {
		System.out.println("this is a circle");
	}
}

class Square extends  Rectangle{
	void sqaprint() {
		System.out.println("square is a rectangle");
	}
	
}
public class hybrid {

	public static void main(String[] args) {
		Square s=new Square();
		s.recprint();
		s.print();
		

	}

}
