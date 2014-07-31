#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>

struct students{
    string fname, lname;
    int year;
    int active;
    int class1, class2, class3, class4;
    string grade1, grade2, grade3, grade4;
}sdatabase[10];
struct teachers{
    string fname, lname;
    string class1, class2, class3, class4;
}tdatabase[10];

sdatabase[0].fname = "Jared";
sdatabase[0].lname = "Stoker";
sdatabase[0].year = 3;
sdatabase[0].class1 = 1;
sdatabase[0].class2 = 2;
sdatabase[0].class3 = 3;
sdatabase[0].class4 = 4;
sdatabase[1].fname = "Kirby";
sdatabase[1].lname = "Wood";
sdatabase[1].year = 3;
sdatabase[1].class1 = 1;
sdatabase[1].class2 = 2;
sdatabase[1].class3 = 3;
sdatabase[1].class4 = 4;
sdatabase[2].fname = "Chanh";
sdatabase[2].lname = "Lam";
sdatabase[2].year = 3;
sdatabase[2].class1 = 1;
sdatabase[2].class2 = 2;
sdatabase[2].class3 = 3;
sdatabase[2].class4 = 4;
sdatabase[3].fname = "Sachith";
sdatabase[3].lname = "Abayakoon";
sdatabase[3].year = 3;
sdatabase[3].class1 = 1;
sdatabase[3].class2 = 2;
sdatabase[3].class3 = 3;
sdatabase[3].class4 = 4;


using namespace std;
void studentMenu();
void adminMenu();
void defaultMenu();
void teacherMenu();

void teacherMenu()
{
    {
        char selection;

           do
           {//menu
               cout << "  Teacher Menu - Choose your role:\n";
               cout << "  ====================================\n";
               cout << "  1.  View Class Schedule\n";
               cout << "  2.  View Student Schedule\n";
               cout << "  3.  Assign Grades\n";
               cout << "  4.  Back to Main Menu\n";
               cout << "\n";
               cout << "  5.  Exit\n";
               cout << "  ====================================\n";
               cout << "  Enter your selection: ";
               cin >> selection;
               cout << endl;

               switch (selection)
               {
                   case '1':
                       //View Class Schedule
                       studentMenu();
                       break;

                   case '2':
                       //View Student Schedule
                       teacherMenu();
                       break;
                   case '3':
                       //Assign Grades
                       adminMenu();
                       break;
                   case '4':
                       defaultMenu();
                       break;
                   case '5':
                       cout << "Goodbye.\n";
                       selection = 0;
                       break;

                   default: cout <<selection << "is not a valid menu item.\n";
                   cout << endl;
               }
           }while (selection != 0 );
    }
}

void studentMenu()
{
    {
        char selection;

           do
           {//menu
               cout << "  Student Menu:\n";
               cout << "  ====================================\n";
               cout << "  1.  Register\n";
               cout << "  2.  Add/Remove Classes\n";
               cout << "  3.  View Class Schedule\n";
               cout << "  4.  View Grades\n";
               cout << "  5.  Back to Main Menu\n";
               cout << "\n";
               cout << "  6.  Exit\n";
               cout << "  ====================================\n";
               cout << "  Enter your selection: ";
               cin >> selection;
               cout << endl;

               switch (selection)
               {
                   case '1':
                       //Register
                       studentMenu();
                       break;

                   case '2':
                       //Add/Remove Classes
                       teacherMenu();
                       break;
                   case '3':
                       //View Class Schedule
                       adminMenu();
                       break;
                   case '4':
                       //View Grades
                       adminMenu();
                       break;
                   case '5':
                       defaultMenu();
                       break;
                   case '6':
                       cout << "Goodbye.\n";
                       selection = 0;
                       break;

                   default: cout <<selection << "is not a valid menu item.\n";
                   cout << endl;
               }
           }while (selection != 0 );
    }
}

void adminMenu()
{
    {
        char selection;

           do
           {//menu
               cout << "  Admin Menu:\n";
               cout << "  ====================================\n";
               cout << "  1.  Add/Remove Students\n";
               cout << "  2.  Add/Remove Teachers\n";
               cout << "  3.  Approve/Reject Students\n";
               cout << "  4.  Back to Main Menu\n";
               cout << "\n";
               cout << "  5.  Exit\n";
               cout << "  ====================================\n";
               cout << "  Enter your selection: ";
               cin >> selection;
               cout << endl;

               switch (selection)
               {
                   case '1':
                       //Add/Remove Students
                       studentMenu();
                       break;

                   case '2':
                       //Add/Remove Teachers
                       teacherMenu();
                       break;
                   case '3':
                       //Approve/Reject Students
                       adminMenu();
                       break;
                   case '4':
                       defaultMenu();
                       break;
                   case '5':
                       cout << "Goodbye.\n";
                       selection = 0;
                       break;

                   default: cout <<selection << "is not a valid menu item.\n";
                   cout << endl;
               }
           }while (selection != 0 );
    }
}

void defaultMenu()
{
    {
        char selection;

           do
           {//menu
               cout << "  Main Menu - Choose your role:\n";
               cout << "  ====================================\n";
               cout << "  1.  Student.\n";
               cout << "  2.  Teacher\n";
               cout << "  3.  Admin\n";
               cout << "\n";
               cout << "  4.  Exit\n";
               cout << "  ====================================\n";
               cout << "  Enter your selection: ";
               cin >> selection;
               cout << endl;

               switch (selection)
               {
                   case '1':
                       //Student
                       studentMenu();
                       break;

                   case '2':
                       //Teacher
                       teacherMenu();
                       break;
                   case '3':
                       //Admin
                       adminMenu();
                       break;
                   case '4':
                       cout << "Goodbye.\n";
                       selection = 0;
                       break;

                   default: cout <<selection << "is not a valid menu item.\n";
                   cout << endl;
               }
           }while (selection != 0 );
    }
}
int main()
{
   defaultMenu();
}

