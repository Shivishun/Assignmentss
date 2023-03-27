1) #include <stdio.h>
struct person
{
   int age;
   float weight;
};

int main()
{
    struct person *personPtr, person1;
    personPtr = &person1;   

    printf("Enter age: ");
    scanf("%d", &personPtr->age);

    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);

    printf("Age: %d\n", personPtr->age);
    printf("weight: %f", personPtr->weight);

    return 0;
}



2) The output is:
Error



3)  The output is:
Error




4)#include<stdio.h>
int main(){
	int a = 130;
	char *ptr;
	ptr = (char *)&a;
	printf("%d ",*ptr);
	return 0;
}

/*Output:
-126
*/




5)#include<stdio.h>
#include<string.h>
int main(){
	char *ptr = "hello";
	char a[22];
	strcpy(a, "world");
	printf("\n%s %s",ptr, a);
	return 0;
}
/*Output:
hello world
*/




6)#include <stdio.h>

struct employee {
    int emp_no;
    char name[50];
    float salary;
};

int main() {
    int n, i, max_index;
    float max_salary = 0.0;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct employee employees[n];

    for (i = 0; i < n; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Employee number: ");
        scanf("%d", &employees[i].emp_no);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        
        if (employees[i].salary > max_salary) {
            max_salary = employees[i].salary;
            max_index = i;
        }
    }

    printf("\nDetails of employee with highest salary:\n");
    printf("Employee number: %d\n", employees[max_index].emp_no);
    printf("Name: %s\n", employees[max_index].name);
    printf("Salary: %.2f\n", employees[max_index].salary);
}





7)#include <stdio.h>
struct person
{
   int age;
   float weight;
};

int main()
{
    struct person *personPtr, person1;
    personPtr = &person1;   

    printf("Enter age: ");
    scanf("%d", &personPtr->age);

    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);

    printf("Age: %d\n", personPtr->age);
    printf("weight: %f", personPtr->weight);

    return 0;
}




8)#include <stdio.h>

struct student {
    int student_number;
    int grade;
};

int main() {
    int n, i, a_count = 0, b_count = 0, c_count = 0, d_count = 0, f_count = 0;
    struct student s;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter the student number and grade for student %d: ", i+1);
        scanf("%d %d", &s.student_number, &s.grade);

        if (s.grade >= 90) {
            a_count++;
        } else if (s.grade >= 78) {
            b_count++;
        } else if (s.grade >= 65) {
            c_count++;
        } else if (s.grade >= 50) {
            d_count++;
        } else {
            f_count++;
        }

        printf("Student %d: Number %d, Grade %d\n", i+1, s.student_number, s.grade);
    }

    printf("Total number of As: %d\n", a_count);
    printf("Total number of Bs: %d\n", b_count);
    printf("Total number of Cs: %d\n", c_count);
    printf("Total number of Ds: %d\n", d_count);
    printf("Total number of Fs: %d\n", f_count);

    return 0;
}




9)#include <stdio.h>

int findHCF(int num1, int num2);

int main() {
    int num1, num2, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    hcf = findHCF(num1, num2);

    printf("The HCF of %d and %d is %d.\n", num1, num2, hcf);

    return 0;
}

int findHCF(int num1, int num2) {
    int i, hcf;

    for (i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    return hcf;
}





10)#include<stdio.h>
#include<ctype.h>

int main()

{
    char a,b;
    printf("enter a lowercase letter: ");
    scanf("%c",&a);
    b = toupper(a);
    printf("\nThe character you entered is %c",b);
}

