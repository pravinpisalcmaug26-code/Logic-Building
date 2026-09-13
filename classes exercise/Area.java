class Triangle{
int a;
int b;
int c;

Triangle(int x,int y,int z){
    a=x;
    b=y;
    c=z;

}

void calculate()
{
    int perimeter=a+b+c;
    double s=perimeter/2.0;
    double area =Math.sqrt(s*(s-a)*(s-b)*(s-c));

    System.out.println("Area="+area);
    System.out.println("perimeter="+perimeter);

}
}



public class Area {
    public static void main(String args[]){
        Triangle t=new Triangle(3,4,5);
        t.calculate();
    }

}
