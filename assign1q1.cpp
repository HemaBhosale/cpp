#include<iostream>

using namespace std;

	class Area
	{
		public:
		float radius;
		float base;
		float height;
		float side;	
		
		float areaCircle(int radius)
		{
			cout<<"\n Area of the circle is: "<<3.14*radius*radius;
		}	
		float areaTriangle(float base,float height )
		{
			cout<<"\n Area of the Triangle is: "<<0.5*base*height;
		}
		float areaSqaure(float side)
		{
			cout<<"\n Area of the Triangle is: "<<side*side;
		}
	};
int main()
{
   Area a1, a2, a3;
   
   a1.areaCircle(10);
   a2.areaTriangle(20,10);
   a3.areaSqaure(40);
	
	return 0;
}
