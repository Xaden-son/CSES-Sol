#include <iostream>
#include <string>
using namespace std;

int calculate_max_repetition(string str)
{
	int i, current_rep, longest_rep;

	current_rep = 0;
	longest_rep = 1;
	i = 0;
	while (str[i])
	{
		if (i == 0)
			current_rep++;
		else if (str[i] == str[i - 1])
			current_rep++;
		else
			current_rep = 1;		
		i++;
		if (longest_rep < current_rep)
			longest_rep = current_rep;
	}
	return (longest_rep);
}

int main(void)
{
	string dna;

	cin >> dna;
	cout << calculate_max_repetition(dna);
	return (0);
}