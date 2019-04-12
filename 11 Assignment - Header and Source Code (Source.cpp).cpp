#include <iostream>
#include <string>
#include "PayRollActions.h"

using namespace std;

// A double cast *pointer* GetWeeklyHours function definition (ASSIGNED THE ADDRESS FOR GetWeeklyHours).
double &GetWeeklyHours()
{
	// int data type scope for workHours.
	int workHours;
	// cout statement asking user how many hours they worked during the week.
	cout << "How many hours did you work this week: ";
	// cin collecting the user input (GATHERING VALUE FOR INT workHours).
	cin >> workHours;
	// The variable double cast h is equal to the hours working in a week.
	double h = workHours;
	// Double cast *pointer* hours variable initialized and is equal to h (ASSIGNED THE ADDRESS FOR THE VARIABLE hours TO VARIABLE h).
	double &hours = h;
	// Return the value of hours.
	return hours;
}

// A doubled cast *pointer* GetSalary function definition (POINTER INITIALIZED).
double *GetSalary()
{
	// int data type scope for money.
	int money;
	// cout statement asking user how much money they get paid per the hour.
	cout << "How much money do you get paid per the hour: ";
	// cin collecting the user input (GATHERING VALUE FOR INT money).
	cin >> money;
	// The double cast variable salary is equal to the money being paid per hour.
	double salary = money;
	// The double cast *pointer* variable HourlySalary is equal to salary (ASSIGNED THE ADDRESS FOR THE VARIABLE salary to POINTER VARIABLE HourlySalary).
	double *HourlySalary = &salary;
	// Return the value of HourlySalary.
	return HourlySalary;
}

int main()
{
	// Changes the title of the program to Dystopian Company Work Pay Part 2.
	system("title Dystopian Company Work Pay Part 2");
	// Changes the background to black and the font color green.
	system("color 0A");

	// A cout statement for a display title.
	cout << "\n\n \t Welcome to Dystopian Incorporated \n \n";

	// Double cast hours is equal to the function GetWeeklyHours.
	double hours = GetWeeklyHours(); //FUNCTION CALL.
	// Double cast salary is equal to the function GetSalary (POINTER DEREFERENCE).
	double salary = *GetSalary(); //FUNCTION CALL.
	// Double cast WeeklySalary is equal to the variables hours multiplied by salary.
	double WeeklySalary = hours * salary;
	// Double cast MonthlySalary is equal to WeeklySalary multiplied by 4.
	double MonthlySalary = WeeklySalary * 4;
	// Double cast YearlySalary is equal to WeeklySalary multiplied by 52.
	double YearlySalary = WeeklySalary * 52;

	// cout statement telling the user their weekly hours.
	cout << "Weekly Hours:  " << hours << endl;
	// cout statement telling the user their hourly hours.
	cout << "Hourly Salary: " << salary << endl;
	// cout statement telling the user their weekly salary.
	cout << "Weekly Salary: " << WeeklySalary << endl;
	// cout statement telling the user their monthly salary.
	cout << "Monthly Salary: " << MonthlySalary << endl;
	// cout statement telling the user their yearly salary.
	cout << "Yearly Salary: " << YearlySalary << endl;

	// Function in charge of formatting the screen.
	ScreenFormat(); // FUNCTION CALL.

	// cout statement telling user for thanking them for there input and they can now collect their items.
	cout << "Thank you for your input, you may now collect the following items.\n";

	// A string vector that obtains all string elements.
	vector<string> inventory;
	// Add the element "wallet" to the end.
	inventory.push_back("- wallet");
	// Add the element "phone" to the end.
	inventory.push_back("- phone");
	// Add the element "keys" to the end.
	inventory.push_back("- keys");

	// Function in charge of displaying the inventory items on the screen (PARAMETER AT THE POINTER ADDRESS inventory).
	display(&inventory); // FUNCTION CALL

	// cout statement thanking user input and  reminding them to not go to work with any distractions or they'll get punished.
	cout << "Remember to always come back to work without any distractions, or you will be punished.\n";
	// cout statement stating that the company is always watching their workers to make sure there not working with distractions.
	cout << "WE ARE ALWAYS WATCHING!\n";
	// cout statement telling the user to have a nice day.
	cout << "Have a nice day.\n";

	// Function in charge of formatting the screen.
	ScreenFormat(); // FUNCTION CALL.

	// A cout statement stating that the user has had enough of the company protocol.
	cout << "\n\n \t You've had enough of this company, and you've decided to take revenge by hacking their account... \n \n";

	// Integer value of CompanyAccount.
	int companyAccount = 500000000;
	// Integer value of employeeHackerAccount.
	int employeeHackerAccount = 0;
	// cout statement for the original value of the Dystopia Incorporated account (companyAccount).
	cout << "Dystopia Incorporated Account: " << companyAccount << "\n";
	// cout statement for the original value of the employee hacker account (employeeHackerAccount).
	cout << "Employee Hacker Account: " << employeeHackerAccount << "\n";
	// Function in charge of formatting the screen.
	ScreenFormat(); // FUNCTION CALL.

	// cout statement stating that the employee hacker and company account are switching all transactions.
	cout << "Switching all transactions between employee hacker and Dystopia Incorporated...\n";
	// cout statement stating that transaction between the employee hacker and company is complete.
	cout << "Money transaction between employee hacker and Dystopia Incorporated complete.\n";
	// Skull ASCII.
	cout << "\t\t\t													\n\n";
	cout << "\t\t\t                 uu$$$$$$$$$$$uu                 \n\n";
	cout << "\t\t\t              uu$$$$$$$$$$$$$$$$$uu              \n\n";
	cout << "\t\t\t             u$$$$$$$$$$$$$$$$$$$$$u             \n\n";
	cout << "\t\t\t            u$$$$$$$$$$$$$$$$$$$$$$$u            \n\n";
	cout << "\t\t\t           u$$$$$$$$$$$$$$$$$$$$$$$$$u           \n\n";
	cout << "\t\t\t           u$$$$$$$$$$$$$$$$$$$$$$$$$u           \n\n";
	cout << "\t\t\t           u$$$$$$"   "$$$"   "$$$$$$u           \n\n";
	cout << "\t\t\t           $$$$        u$u        $$$$           \n\n";
	cout << "\t\t\t            $$$u       u$u       u$$$            \n\n";
	cout << "\t\t\t            $$$u      u$$$u      u$$$            \n\n";
	cout << "\t\t\t              $$$$uu$$$   $$$uu$$$$              \n\n";
	cout << "\t\t\t               $$$$$$$     $$$$$$$               \n\n";
	cout << "\t\t\t                u$$$$$$$u$$$$$$$u                \n\n";
	cout << "\t\t\t                 u$ $ $ $ $ $ $u                 \n\n";
	cout << "\t\t\t      uuu        $$u$ $ $ $ $u$$       uuu       \n\n";
	cout << "\t\t\t     u$$$$        $$$$$u$u$u$$$       u$$$$      \n\n";
	cout << "\t\t\t      $$$$$uu       $$$$$$$$$      uu$$$$$$      \n\n";
	cout << "\t\t\t    u$$$$$$$$$$$uu           uuuu$$$$$$$$$$      \n\n";
	cout << "\t\t\t    $$$$$$$$$$$$$$$$$uuu   uu$$$$$$$$$$$$$$      \n\n";
	cout << "\t\t\t                $$$$$$$$$$$uu$$$$                \n\n";
	cout << "\t\t\t               uuuu$$$$$$$$$$$$$uuu              \n\n";
	cout << "\t\t\t      u$$$uuu$$$$$$$$$uu   $$$$$$$$$$$uuu$$$     \n\n";
	cout << "\t\t\t      $$$$$$$$$$                 $$$$$$$$$$$     \n\n";
	cout << "\t\t\t        $$$$$                         $$$$       \n\n";
	cout << "\t\t\t         $$$                          $$$$       \n\n";
	// Function in charge of the hacked transaction (hackedTransaction).
	hackedTransaction(companyAccount, employeeHackerAccount); // FUNCTION CALL.
	// cout statement for the value of the company account (companyAccount) when the hacked transaction occurs.
	cout << "Dystopia Incorporated Account: " << companyAccount << "\n";
	// cout statement for the value of employee hacker account (employeeAccount) when the hacked transaction occurs.
	cout << "Employee Hacker Account: " << employeeHackerAccount << "\n";
	// Function in charge of formatting the screen.
	ScreenFormat(); // FUNCTION CALL.

	// Prevents the program from just running and not showing the user the console box.
	system("pause");
	// A exit number for the program. If zero is returned at the of the program, then the program ran successfully.
	return 0;
}