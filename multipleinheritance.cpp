#include <iostream.h>
#include <conio.h>
#include <string.h>

class PersonalDetails {
protected:
    char name[20];
    int age;
public:
    void setPersonalDetails(const char *n, int a) {
        strcpy(name, n);
        age = a;
    }
};

protected:
    int empID;
    char position[20];
public:
    void setProfessionalDetails(int id, const char *p) {
        empID = id;
        strcpy(position, p);
    }
};

public:
    void displayEmployeeDetails() {
        cout<<"Employee Name: \n"<<name<<endl;
        cout<<"Age: \n"<<age<<endl;
        cout<<"Employee ID: \n"<<empID<<endl;
        cout<<"Position: \n"<<position<<endl;
    }
};

void main() {
    Employee emp;
    emp.setPersonalDetails("Alice Johnson", 28);
    emp.setProfessionalDetails(1024, "Project Manager");
    emp.displayEmployeeDetails();

    getch();
}
