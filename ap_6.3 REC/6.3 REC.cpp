#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;
void Print(int* mas, const int n, int i);

void Suma(int* mas, const int n, const int i = 0)
{
	int S = 0;
	if (i < n)
	{
		if (mas[i] % 2 != 0)
			S += mas[i];
	}
}

template <typename T>
T Sum(T* mas, T n, T i)
{
	if (i < n)
	{
		if (mas[i] % 2 != 0)
			return mas[i] + Sum(mas, n, i + 1);
		else
			return Sum(mas, n, i + 1);
	}
	else
		return 0;
}
void Create(int* a, const int n, int i)
{
	a[i] = rand() % 10 + 5;
	if (i < n - 1)
		Create(a, n, i + 1);
}
template <typename A>
void Create(A* mas, const int n, const int i = 0)
{
	if (i < n)
	{
		mas[i] = rand() % 85 + 5;
	}
}
int main()
{
	srand((unsigned)time(NULL));
	const int a = 10;
	int A[a];
	cout << "A={"; Create(A, a, 0);
	Print(A, a, 0);
	cout << "Suma = " << Sum(A, a, 0) << endl;
	return 0;
};
void Print(int* mas, const int n, int i)
{
	cout << setw(3) << mas[i] << ",";
	if (i < n - 1)
		Print(mas, n, i + 1);
	else
		cout << "}" << endl;
}
template <typename B>
void Print(B* mas, const int n, const int i = 0)
{
	cout << "A{";
	if (i < n)
		cout << " " << mas[i] << ",";
	cout << "}";
	cout << endl;
}