class Employee {
    String name;
    int year;
    int salary;
    String address;

    Employee(String name, int year, int salary, String address) {
        this.name = name;
        this.year = year;
        this.salary = salary;
        this.address = address;
    }

    void display() {
        System.out.printf("%-15s %-18d %-20s%n", name, year, address);
    }

    public static void main(String[] args) {
        Employee e1 = new Employee("Robert", 1994, 0, "64C- WallStreet");
        Employee e2 = new Employee("Sam", 2000, 0, "68D- WallStreet");
        Employee e3 = new Employee("John", 1999, 0, "26B- WallStreet");

        System.out.printf("%-15s %-18s %-20s%n", "Name", "Year of joining", "Address");

        e1.display();
        e2.display();
        e3.display();
    }
}