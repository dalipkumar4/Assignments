// Question1: Using Structures write an interactive program in C language to create an application program
// for a small training company to maintain the Trainer’s database. This application should have
// menu options like2
// • Creating a New Record
// • Reading/Listing of Records
// • Modify the record
// • Delete the record
// Each Trainer record should have Trainer Name, Trainer ID, Department Name, Salary,
// Position, Date of Joining, etc.). The application should be designed user-friendly.

#include <stdio.h>
#include <string.h>

int RecordCount = 2;

struct TrainerDatabase
{
    char name[50];
    char department[50];
    char position[50];
    char DateofJoining[10];
    float salary;
    int Id;

} typedef TD;

int menu();

void CreateRecord(struct TrainerDatabase trainee[RecordCount]);
void ListRecords(struct TrainerDatabase trainee[RecordCount]);

int main()
{
    struct TrainerDatabase Trainers[RecordCount];

    CreateRecord(Trainers);

    // menu();
    return 0;
}

void CreateRecord(struct TrainerDatabase trainee[RecordCount])
{
    printf("Enter the Trainer Name: ");
    scanf("%s", &trainee->name);
    printf("Enter the Trainer ID: ");
    scanf("%d", &trainee->Id);
    printf("Enter the Department: ");
    scanf("%s", &trainee->department);
    printf("Enter the Salary: ");
    scanf("%f", &trainee->salary);
    printf("Enter the Position: ");
    scanf("%s", &trainee->position);

    ListRecords(trainee);
};

void ListRecords(struct TrainerDatabase trainee[RecordCount])
{
    for (int i = 0; i < RecordCount; i++)
    {
        printf("\nName: %s\n", trainee[i].name);
        printf("Department: %s\n", trainee[i].department);
        printf("Position: %s\n", trainee[i].position);
        printf("ID: %d\n", trainee[i].Id);
        printf("Salary: %0.2f\n", trainee[i].salary);
    }
}

int menu()
{
    int user;
    printf("Welcome to Trainer Menu\n");
    printf("\n(1) Create New Record");
    printf("\n(2) Read/List Records");
    printf("\n(3) Modify a Record");
    printf("\n(4) Delete a Record");
    printf("\n(5) Exit\n");
    printf("Enter Option number: ");
    scanf("%d", &user);
    switch (user)
    {
    case 1:
        // CreateNewRecord();
        printf("case1");
        break;
    case 2:
        printf("case2");
        // ListRecords();
        break;
    case 3:
        printf("case3");
        // ModifyRecord();
        break;
    case 4:
        printf("case4");
        // DeleteRecord();
        break;
    case 5:
        printf("Exiting...");
        return 0;
        break;
    default:
        printf("Invalid option");
        break;
    }
}
