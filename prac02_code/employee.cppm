// #include <string>

namespace employee
{
	enum titles
	{
		Manager,
		SeniorEngineer,
		Engineer
	};

	struct Employee 
	{
		char firstInitial;
		char lastInitial;
		int  employeeNumber;
		int  salary;
		titles title;
	};
}