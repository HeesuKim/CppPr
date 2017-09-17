#include<iostream>
using namespace std;

class Point
{
	int x;
	int y;

public:
	Point()
	{
		cout << "Point() Call!\n";
		x = y = 0;
	}
	Point(int _x, int _y)
	{
		x = _x;
		y = _y;
	}

	int GetX() { return x; }
	int GetY() { return y; }
	void SetX(int _x) { x = _x; }
	void SetY(int _y) { y = _y; }
};

int main()
{
	Point* arr[5];

	for (int i = 0; i < 5; i++)
		arr[i] = new Point(i * 2, i * 3);

	for (int i = 0; i < 5; i++)
	{
		cout << "x : " << arr[i]->GetX << " ";
		cout << "y : " << arr[i]->GetY << "\n";
	}

	for (int i = 0; i < 5; i++)
		delete arr[i];

	return 0;
}