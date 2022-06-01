#include<iostream>
using namespace std;

class MATRIX
{
private:
	int M[10][10];

public:

	void getData();
	void displayMATRIX();
	MATRIX operator +(MATRIX x1);
};

void MATRIX::getData()
{
	int r, c;
	cout << "Enter rows1:";
	cin >> r;
	cout << "Enter columns1:";
	cin >> c;
	int i, j;
	cout << endl << "Enter elements of 1st matrix: " << endl;
	for (i = 0; i < r; ++i)
	{
		for (j = 0; j < c; ++j)
		{
			cout << "Enter element a" << i + 1 << j + 1 << " : ";
			cin >> M[i][j];
		}
	}
	for (i = 0; i < r; ++i)
	{
		for (j = 0; j < c; ++j)
		{
			cout << M[i][j] << "  ";

		}
		cout << endl;
	}

}

void MATRIX::displayMATRIX()
{
	int i, j;
	int r, c;
	cout << "Enter rows2:";
	cin >> r;
	cout << "Enter columns2:";
	cin >> c;
	for (i = 0; i < r; ++i)
	{
		for (j = 0; j < c; ++j)
		{
			cout << M[i][j] << "  ";

		}
		cout << endl;
	}
}

MATRIX MATRIX::operator +(MATRIX x1)
{
	int i, j, r, c;
	cout << "Enter rows3:";
	cin >> r;
	cout << "Enter columns3:";
	cin >> c;

	MATRIX resualt;
	for (i = 0; i < r; ++i)
	{
		for (j = 0; j < c; ++j)
		{
			resualt.M[i][j] = M[i][j] + x1.M[i][j];
		}
	}
	return resualt;
}

int main()
{
	MATRIX a, b, d;
	a.getData();
	a.displayMATRIX();
	b.getData();
	b.displayMATRIX();
	d = a + b;
	d.displayMATRIX();
	return 0;
}
