
public class EmployeeTest {
    public static void main(String[] args) {
        Employee empOne = new Employee("James Smith");
        Employee empTwo = new Employee("Mary Anne");

        empOne.empAge(26);
        empOne.empDesignation("Senior Software Engineer");
        empOne.empSalary(1000);
        empOne.printEmployee();

        empTwo.empAge(26);
        empTwo.empDesignation("Senior Software Engineer");
        empTwo.empSalary(1000);
        empTwo.printEmployee();
    }
}