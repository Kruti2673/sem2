#include<iostream>

using namespace std;

class MATRIX
{
public:
	int M[10][10], m, n;
	void getdata()
	{
		int i, j;
		cout << "Enter order of matrix:" << endl;;
		cin >> m;
		cin >> n;
		cout << "Enter matrix elements:" << endl;
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				cout << "Enter element a" << i + 1 << j + 1 << " : ";
				cin >> M[i][j];
			}
		}
	}
	void displaydata()
	{
		int i, j;
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				cout << M[i][j] << "";
				cout << endl;
			}
		}
	}
};

class MAT:public MATRIX
{
public:
	void get()
	{
		int i, j;
		cout << "Enter order of matrix:" << endl;;
		cin >> m;
		cin >> n;
		cout << "Enter matrix elements:" << endl;
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				cout << "Enter element a" << i + 1 << j + 1 << " : ";
				cin >> M[i][j];
			}
		}
	}
	void display()
	{
		int i, j;
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				cout << M[i][j] << " ";
			}
		}
	}
	MAT operator+(MATRIX x1)
	{
		int i, j;
		MAT res;
		for (i = 0; i < m; ++i)
		{
			for (j = 0; j < n; ++j)
			{
				res.M[i][j] = M[i][j] + x1.M[i][j];
			}
		}
		return res;
	}
};
int main()
{
	MATRIX m,c;
	m.getdata();
	m.displaydata();
	MAT n;
	n.get();
	n.display();
	c = m*n;
	c.displaydata();
	return 0;
}
