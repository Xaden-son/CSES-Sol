#include <iostream>
#include <string>
using namespace std;

int	is_dna_char(string str)
{
	int i;

	i = 0;
	while (str[i])
	{
	if (!((str[i] == 'A') || (str[i] == 'C') || (str[i] == 'G') || (str[i] == 'T')))
			return (0);
		i++;
	}
	return (1);
}

int	calculate_longest_rep(string str)
{
	int i;
	int current_rep;
	int longest_rep;

	current_rep = 0;
	longest_rep	= 1;
	i = 0;
	while (str[i])
	{
		if (i == 0)
			current_rep++;
		else if ((str[i] == 'A') && (str[i - 1] == 'A'))
			current_rep++;
		else if ((str[i] == 'C') && (str[i - 1]) == 'C')
			current_rep++;
		else if ((str[i] == 'G') && (str[i - 1] == 'G'))
			current_rep++;
		else if ((str[i] == 'T') && (str[i - 1] == 'T'))
			current_rep++;
		else
			current_rep = 1;	
		
		if (longest_rep < current_rep)
			longest_rep = current_rep;
		i++;
		}
	return (longest_rep);
}

int main(void)
{
	string str;
	int longest_rep;

	getline(cin, str);
		if (is_dna_char(str))
		{
			longest_rep = calculate_longest_rep(str);
			cout << longest_rep << endl;
		}
	return (0);
}
