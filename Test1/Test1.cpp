#include <iostream>
#include <string>
using namespace std;
//   {}
class Point
{
private:

	int x;
	int y;

public:
	int  GetX()
	{
		return x;
	}

	void SetX(int valueX)
	{
		x = valueX;
	}

	void Print()
	{
		cout << "X = " << x << "\nY = " << y << endl;
	}
};

class Human
{

};




int main()
{

	Point a;
	a.Print();



	return 0;
}

