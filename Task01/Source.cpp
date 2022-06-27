#include <iostream>
#include<ctime>

using namespace std;



int delay(int milliseconds) {
	clock_t goal = milliseconds + clock();
	while (goal > clock());
	return 1;
}



void draw(int r, int s, int r1, int s1) {


	int line = 20;
	int column = 40;

	for (int i = 1; i <= line; i++)
	{

		for (int j = 1; j <= column; j++)
		{

			if (j == s and i == r)
			{
				cout << "A";
			}
			else if (j == s1 and i == r1)
			{
				cout << "B";
			}

			else
			{
				cout << "-";
			}




		}cout << endl;

	}

}

void check(int& r, int& s, int& r1, int& s1) {


	if ((s - s1) < 0)
	{
		s++;
	}


	else if ((s - s1) > 0)
	{
		s--;
	}


	else  if ((r - r1) < 0)
	{
		r++;
	}

	else if ((r - r1) > 0)
	{
		r--;
	}


}

void draw_again(int& r, int& s, int& r1, int& s1, int& r2, int& s2) {
	check(r, s, r1, s1);

	int line = 20;
	int column = 40;

	for (int i = 1; i <= line; i++)
	{

		for (int j = 1; j <= column; j++)
		{


			if (j == s2 and i == r2)
			{
				cout << "A";
			}
			else if (j == s and i == r)
			{
				cout << "X";
			}
			else if (j == s1 and i == r1)
			{
				cout << "B";
			}


			else
			{
				cout << "-";
			}

		}cout << endl;

	}
}

int main() {

	int  c, l, c1, l1;

	cout << "Uneste redak a: " << endl;
	cin >> l;
	cout << "Uneste stupac a: " << endl;
	cin >> c;
	cout << "Uneste redak b: " << endl;
	cin >> l1;
	cout << "Uneste stupac b: " << endl;
	cin >> c1;

	int s2 = c;
	int r2 = l;

	draw(l, c, l1, c1);
	do
	{
		system("CLS");
		draw_again(l, c, l1, c1, r2, s2);
		delay(100);

	} while (!(c == c1 && l == l1));



	return 0;
}