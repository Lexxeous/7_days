#include <iostream>

using namespace std;

int main()
{
	int desired_lvl;
	double next_xp;
	double add_xp = 8000;
	double prev_xp = 8000;
	double perc_mult = 1.0142;

	cout << "Input level you tryna get: ";
	cin >> desired_lvl;

	for(int i = 1; i <= desired_lvl; i++)
	{
		if (desired_lvl > 1)
		{
			next_xp = prev_xp * perc_mult;
			add_xp = next_xp + add_xp;
			prev_xp = next_xp;
		}
		else
		{
			cout << endl;
			cout << prev_xp;
			return 0;
		}
	}
	cout << endl;
	cout << add_xp;
	return 0;
}