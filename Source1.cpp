include <iostream>
using namespace std;
class Rectangle
{
	// Data members
   private:
	double width, height;
   public:
	Rectangle()
	{
	width = 1;
	}
	// Constructor
	Rectangle(double newWidth, double newHeight)
	{
	width = newWidth;
	height = newHeight;
	}
	double getWidth()
	{
	return width;
	}
	double getHeight()
	{
	return height;
	}
	double getArea()
	{
	return width * height;
	}
	double getPerimeter()
	{
	return 2 * (width + height);
	}
};
int main() {
	Rectangle myRectangle(4, 40);
	cout << "The area of a rectangle with width " <<
		myRectangle.getWidth() << " and height " <<
		myRectangle.getHeight() << " is " <<
		myRectangle.getArea() << " and perimeter is " <<
		myRectangle.getPerimeter() << endl;
	Rectangle yourRectangle(3.5, 35.9);
	cout << "The area of a rectangle with width " <<
		yourRectangle.getWidth() << " and height " <<
		yourRectangle.getHeight() << " is " <<
		yourRectangle.getArea() << " and perimeter is " <<
		yourRectangle.getPerimeter() << endl;
	return 0;
}