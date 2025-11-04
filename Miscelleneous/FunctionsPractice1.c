#include <stdio.h>
void AddStudent(int ID[], int assignmarks[], int quizymarks[],int finalmarks[], int *count, char name[][50]);
void details(int IDs[], int assignmarks[], int quizymarks[], int finalmarks[], char name[][50], int *count);
void update(int IDs[], int assignmarks[], int quizymarks[], int finalmarks[], int *count);
void report(int IDs[], int assignmarks[], int quizymarks[], int final[], char name[][50], int *count);
int main()
{
    int studentIDs[60]={0}, assignmentMarks[60]={0}, quizmarks[60]={0}, finalexammarks[60]={0};
    char studentname[60][50];
    int studentcount=0, choice;
    do
    {
        printf("\n1. Add new Student.\n2. Find Student Details.\n3. Update Student Marks.\n4. Generate Student Grade Report.\n5. Exit.\n");
        printf("Enter your choice.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            AddStudent(studentIDs, assignmentMarks, quizmarks, finalexammarks, &studentcount, studentname);
            break;
        case 2:
            details(studentIDs, assignmentMarks, quizmarks, finalexammarks, studentname, &studentcount);
            break;
        case 3:
            update(studentIDs, assignmentMarks, quizmarks, finalexammarks, &studentcount);
            break;
        case 4:
            report(studentIDs, assignmentMarks, quizmarks, finalexammarks, studentname, &studentcount);
            break;
        case 5:
            break;
        default:
        printf("Invalid choice, please try again.\n");
            break;
        }
    } while (choice!=5);

}

int search(int studentIDs[60], int *studentcount, int searchID)
{
    for (int i = 0; i < (*studentcount); i++)
    {
        if (studentIDs[i]==searchID)
        {
            return i;
            break;
        }
        else if (i==(*studentcount)-1 && studentIDs==0)
        {
            return -1;
            break;
        }
    }
}

void AddStudent(int ID[], int assignmarks[], int quizymarks[],int finalmarks[], int *count, char name[][50])
{
    int tempID;
    printf("\nEnter Student ID.\n");
    scanf("%d", &tempID);
    if (search(ID, &count, tempID)!=-1)
    {
        printf("\nThe input student already exists on the Database.\n");
    }
    else
    {
        printf("Enter Student Name.\n");
        getchar();
        fgets(name[*count], sizeof(name), stdin);
        printf("\nEnter Assignment Marks.\n");
        scanf("%d", &assignmarks[*count]);
        printf("\nEnter Quiz Marks.\n");
        scanf("%d", &quizymarks[*count]);
        printf("\nEnter Final Exam marks.\n");
        scanf("%d", &finalmarks[*count]);
        printf("The student has been successfully added.\n");
        (*count++);
    } 
}

void details(int IDs[], int assignmarks[], int quizymarks[], int finalmarks[], char name[][50], int *count)
{
    int tempID, index;
    printf("\nEnter Student ID.\n");
    scanf("%d", &tempID);
    index=search(IDs, &count, tempID);
    if (index==-1)
    {
        printf("\nStudent not found.\n");
    }
    else
    {
        printf("Student ID: %d\n", IDs[index]);
        printf("Student Name: %s\n", name[index]);
        printf("Assignment Marks: %d\n", assignmarks[index]);
        printf("Quiz Marks: %d\n", quizymarks[index]);
        printf("Final Exam Marks: %d\n", finalmarks[index]);
    }
}

void update(int IDs[], int assignmarks[], int quizymarks[], int finalmarks[], int *count)
{
    int tempID, index, choice;
    printf("\nEnter Student ID,\n");
    scanf("%d", &tempID);
    index = search(IDs, &count, tempID);
    if (index!=-1)
    {
        printf("\n1. Assignment.\n");
        printf("\n2. Quiz.");
        printf("\n3. Final.");
        printf("\nEnter your choice.\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nEnter the new marks.\n");
            scanf("%d", &assignmarks[index]);
            break;
        case 2:
            printf("\nEnter the new marks.\n");
            scanf("%d", &quizymarks[index]);
            break;
        case 3:
            printf("\nEnter the new marks.\n");
            scanf("%d", &finalmarks[index]);
            break;
        default:
            printf("Invalid Choice.\n");
            break;
        }
    }
    else
    {
        printf("\nError, this ID doesnt exist in the databse.\n");
    }  
}

void report(int IDs[], int assignmarks[], int quizymarks[], int final[], char name[][50], int *count)
{
    int total;
    char grade;
    for (int i = 0; i < (*count); i++)
    {
        total = assignmarks[i]+quizymarks[i]+final[i];
        if (total>=85 && total<=100)
            grade='A';
        else if (total>=70 && total<85)
            grade='B';
        else if (total>=55 && total<70)
            grade='C';
        else if (total<55)
            grade='F';
        printf("\nStudent ID: %d\tStudent Name: %s\tTotal Marks: %d\tGrade: %c", IDs[i], name[i], total, grade);
    }
    
}