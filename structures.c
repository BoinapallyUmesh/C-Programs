/*#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float marks;
};
int main()
{
    struct student s[4];
    printf("enter the details\n");
    for(int i=0;i<4;i++)
    {
            scanf("%d%s%f",&s[i].roll_no,s[i].name,&s[i].marks);
    }
    printf("Printing the deatils of students\n");
    for(int i=0;i<4;i++)
    {
        printf("Roll_no: %d \nName:%s\nMarks: %.2f\n\n",s[i].roll_no,s[i].name,s[i].marks);
    }
   return 0;
}*/


/*#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float marks;
};
int main()
{
    struct student s = {101,"Umesh",98.76};
     struct student *p;
     p=&s;
     printf("Rollno: %d\nName:%s\nMarks: %f\n",p->roll_no,p->name,p->marks);
     return 0;
}*/

/*#include<stdio.h>
struct DOJ
{
    int day;
    int month;
    int year ;
};

    struct employee
    {
        int emp_id;
        char name[20];
        s#truct DOJ d;
    };
    int main()
    {
     struct employee e ={991234,"Umesh",20,9,2023};
     printf("Emp.id: %d\nEmp.Name:%s\nDOJ: %d%d%d\n",e.emp_id,e.name,e.d.day,e.d.month,e.d.year);
     return 0;
    }*/

#include<stdio.h>
int main()
{
    char a[40];
    printf("Enter the string\n");
    //scanf("%s",a);
    gets(a);
    printf("%s",a);
}


