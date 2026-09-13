class Employee1{
    int salary;
    int hours;

    void getInfo(int salary, int hours) {
        this.salary = salary;
        this.hours = hours;
    }

    void addSal() {
        if (salary < 500) {
            salary = salary + 10;
        }
    }

    void addWork() {
        if (hours > 6) {
            salary = salary + 5;
        }
    }

    void display() {
        System.out.println("Final Salary = $" + salary);
    }

    public static void main(String[] args) {
        Employee1 e = new Employee1();

        e.getInfo(400, 8);
        e.addSal();
        e.addWork();
        e.display();
    }
}
