#include <iostream>
#include <string>
#include <cmath>
using namespace std;
struct Point
{ int x;
 
int y;
 
 
friend ostream & operator << (ostream & os, const Point p)
 
{ os << p.x << "," << p.y;
 
return os;
 
}
};
Point ortanokta (const Point& a, const Point& b)
{ Point vec;
 
vec.x = (a.x + b.x) / 2;
 
vec.y = (a.y + b.y) / 2;
 
return vec;
}
int karsilastir (int a,int b,int c,int d)
{
 
if(a==c && b==d)
 
{
 
cout<<"Aynidir"<<endl;
 
}
 
else
 
{
 
cout<<"Farklidir"<<endl;
 
}
}
int mesafe(int a,int b,int c,int d)
{
 
float uzak=sqrt(pow(a-c,2)+pow(b-c,2));
 
cout<<"Aralarindaki uzaklik="<<uzak<<endl;
 
}
int main()
{ Point p1, p2, p3;
 
Point vec;
 
int n;
 
 
cout << "1.noktayi giriniz(x,y): ";
 
cin >> p1.x >> p1.y; 
 
cout << "2.noktayi giriniz(x,y)=";
 
cin >> p2.x >> p2.y; 
 
cout << "3.noktayi giriniz(x,y)=";
 
cin >> p3.x >> p3.y; 
 
vec = ortanokta (p1, p2); 
 
cout << "1 ve 2 noktalarinin orta noktasi="<< vec << endl; 
 
vec = ortanokta(p1, p3);
 
cout << "1 ve 3 noktalarinin orta noktasi="<< vec << endl; 
 
vec =ortanokta(p2,p3);
 
cout <<"2 ve 3 noktalarinin orta noktasi="<<vec <<endl;
 
 
karsilastir(p1.x,p1.y,p2.x,p2.y);
 
karsilastir(p1.x,p1.y,p3.x,p3.y);
 
karsilastir(p2.x,p2.y,p3.x,p3.y);
 
 
mesafe(p1.x,p1.y,p2.x,p2.y);
 
mesafe(p1.x,p1.y,p3.x,p3.y);
 
mesafe(p2.x,p2.y,p3.x,p3.y);
 
 
 
return 0;
}