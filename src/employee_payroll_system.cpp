#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Employee {
private:
string name;
int id;
double hourlyRate;
double hoursWorked;
public:
Employee(string n, int i, double hr) : name(n), id(i), hourlyRate(hr),
hoursWorked(0) {}
void setHoursWorked(double hours) {
hoursWorked = hours;
}
double calculatePay() const {
return hourlyRate * hoursWorked;
}
void displayInfo() const {
cout << "Employee ID: " << id << endl;
cout << "Name: " << name << endl;
cout << "Hourly Rate: $" << hourlyRate << endl;
cout << "Hours Worked: " << hoursWorked << endl;
}
string getName() const {
return name;
}
};
int main() {
vector<Employee> employees;
employees.push_back(Employee("John Doe", 1001, 15.50));
employees.push_back(Employee("Jane Smith", 1002, 17.75));
for (auto& emp : employees) {
double hours;
cout << "Enter hours worked for " << emp.getName() << ": ";
cin >> hours;
emp.setHoursWorked(hours);
}
cout << "\nPayroll:" << endl;
cout << "========" << endl;
for (const auto& emp : employees) {
emp.displayInfo();
cout << "Weekly Pay: $" << emp.calculatePay() << endl;
cout << endl;
}
return 0;
}
