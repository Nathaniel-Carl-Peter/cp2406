import <iostream>;
import <string>;
import <format>;
import <vector>;

using namespace std

int main() // No semicolon.
{
	vector<double> values; // A vector to store all values.
	double value; // Better to declare once, not many times.

	// Ask the user to enter values until 0 is entered.
	cout << "Input values, one at a time followed by Enter:" << endl;
	cin >> value;
	while(value != 0.0) // Bad practice to use "while true" + break.
	{ 
	    values.push_back(value);
		cin >> value; // Get the next value.
	} // End while. 

	// Format the values in a table with a couple of columns.
	for(auto value : values) // No semicolon.
    {
		cout << format("{0:16e} | {0:12f} | {0:<12g} | {0:#>+12g}", value) << endl;
	}
} // End of main().
