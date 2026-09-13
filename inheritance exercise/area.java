
class Rectangle{
	int length;
	int breadth;
	
	Rectangle(int length,int breadth)
	{
		this.length=length;
		this.breadth=breadth;
	}
	void area() {
		System.out.println("area of rectangle="+length*breadth);
		
	}
	void perimeter() {
		System.out.println("area of perimeter="+(2*(length+breadth)));
	}
	
}

class Square extends Rectangle{
	int side;
	
	Square(int side){
		super(side,side);
	}
		
		void areaofsquare() {
			System.out.println("area of square="+length*breadth);
			
		}
		void areaofperimeter() {
			System.out.println("area of perimeter of square="+(2*(length+breadth)));
		}
	}

public class area {

	public static void main(String[] args) {
		Rectangle rec=new Rectangle(10,5);
		rec.area();
		rec.perimeter();
		
		Square sq=new Square(5);
		sq.areaofsquare();
		sq.areaofperimeter();
		

	}

}
