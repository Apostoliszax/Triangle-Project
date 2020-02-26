    
#include <iostream>
#include <string>
#include <math.h>
# define M_PI           3.14159265358979323846
using namespace std;


struct Point
{
	float x;
	float y;

}name;

double distance(Point a,Point b)
{
	float distance;
	distance = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
	return distance;
}


int main()
{
	cout << "This program is supposed to analyse any triangle,we need you to enter the three points of the triangle. " << endl;
	string answer1;

	Point p1, p2, p3;
	float dist1, dist2, dist3, perimeter, t, area, angle1, angle2, angle3;

	do
	{
		cout << "Enter 1st Point(x,y): " << endl;
		cin >> p1.x >> p1.y;

		cout << "Enter 2nd Point(x,y): " << endl;
		cin >> p2.x >> p2.y;

		cout << "Enter 3rd Point(x,y): " << endl;
		cin >> p3.x >> p3.y;

		cout << "So your points are: " << endl;
		cout << "Point1:(" << p1.x << "," << p1.y << ")" << " Point2:(" << p2.x << "," << p2.y << ")" << " Point3:(" << p3.x << "," << p3.y << ")" << endl;
		cout << "Is that true? (Yes or No)" << endl;
		cin >> answer1;
	
	} while (answer1 != "Yes");

	dist1 = distance(p1, p2);
	cout << "The distance between point p1 and point p2 is: " << dist1 << endl;
	dist2 = distance(p1, p3);
	cout << "The distance between point p1 and point p3 is: " << dist2 << endl;
	dist3 = distance(p2, p3);
	cout << "The distance between point p2 and point p3 is: " << dist3 << endl;
	
	perimeter = dist1 + dist2 + dist3;
	cout << "The Perimeter of the triangle is: " << perimeter << endl;

	t = perimeter / 2;
	area = t * (t - dist1) * (t - dist2) * (t - dist3);
	cout << "The Area of the Triangle is: " << area << endl;

 

	
	angle1= acosl((dist2 * dist2 + dist3 * dist3 - dist1 * dist1) / (2 * dist2 * dist3));
	angle2 = acosl((dist3 * dist3 + dist1 * dist1 - dist2 * dist2) / (2 * dist1 * dist3));
	angle3 = acosl((dist1 * dist1 + dist2 * dist2 - dist3 * dist3) / (2 * dist1 * dist2));
	
	cout << "First angle is: " << (angle1 * 180) / M_PI << endl;
	cout << "Second angle is: " << (angle2 * 180) / M_PI << endl;
	cout << "Third angle is: " << (angle3 * 180) / M_PI << endl;

	cout << endl;

	if ((dist1 == dist2) && (dist2 == dist3))
	{
		cout << "The type of triangle is Equilateral" << endl;
	}	
	else if ((dist1 == dist2) || (dist2 == dist3))
	{
		cout << "The type of triangle is Isosceles" << endl;
	}
	else if ((angle1 == 90) ||	 (angle2 == 90) || (angle3 == 90))
	{
		cout << "The type of triangle is Right-angled" << endl;
	}
	else if ((angle1 >  90) || (angle2 > 90) || (angle3 > 90))
	{
		cout << "The type of triangle is Obtuse-angled" << endl;
	}
	else if ((angle1 < 90) && (angle2 < 90) && (angle3 < 90))
	{
		cout << "The type of triangle is Scalene" << endl;
	}












	return 0;
}




