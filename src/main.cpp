/* Caswell King
 * COP3330
 * Assignment 1: Return number of instances the most common char appears
 */

#include<iostream>
#include<string>
using namespace std;

// Returns the number of times the most frequently occurring character appears in str
int get_max_count(string str)
{	
	// Holds the char at each index of str, starts at 0
	char c = str[0];
	// Stores the largest number of occurrences
	int count = 0;
	// Stores a temp count of occurrences
	int temp_count = 0;
	
	// Loop to progress through each character in str
	for(int i = 0; i < str.length(); i++)
	{
		// c changes to different char as str is progressed through
		c = str[i];
		// Reset temp_count
		temp_count = 0;
		// Loop counts number of times c occurs in str
		for(int j = 0; j < str.length(); j++)
		{
			// If char appears, increment temp_count
			if(str[i] == str[j])
				temp_count++;
		}
		// If temp count is greater than current greatest occurrences
		if(temp_count > count)
			count = temp_count;
	}

	return count;
}

int main()
{
        // Stores input string
        string instr;
        
        cout<<"Input String:"<<endl;
        // Takes user input and stores inside instr
        getline(cin, instr);
        
        // Call get_max_count and store value
        int count = get_max_count(instr);
        
        cout<<"Occurrences of most frequently occurring character: ";
        cout<<count<<endl;
	return 0;
        }
