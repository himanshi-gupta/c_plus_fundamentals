/*Print "lowercase" if user enters a character between 'a-z' , Print "UPPERCASE" is character lies between 'A-Z' and print "Invalid" for all other characters like $,.^# etc.

Input Format
Single Character .

Constraints
-

Output Format
lowercase UPPERCASE Invalid

Sample Input
$
Sample Output
Invalid
*/

#include<iostream>
using namespace std;
int main() 
{
	char s;
	cin>>s;
	if(islower(s))
	{
		cout<<"lowercase";
	}
	else if(isupper(s))
	{
		cout<<"UPPERCASE";
	}
	else
	{
		cout<<"Invalid";
	}
	return 0;
}