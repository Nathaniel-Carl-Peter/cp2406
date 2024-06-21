
#include <iostream>

using namespace std;


// Question: Why the following line is here?
string findAndReplace(string haystack, string needle, string replaceWith);
// 'findAndReplace' was not declared in this scope


int main()
{

	string haystack {"aaabbbcojncuicb[u2b3]"};
	string needle {"["};
	string replaceWith {"???"};

	string result = findAndReplace(haystack, needle, replaceWith);
    cout << result;

}

string findAndReplace(string haystack, string needle, string replaceWith) {
	auto result {haystack};
	return result;
}