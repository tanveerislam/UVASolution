/*#11152 - Colourful Flowers
Solved By:	wesley
Theory Difficulty:	easy
Coding Difficulty:	trivial
Algorithms Used:	2D geometry
Solution Description: 	There are three pertinent geometry theorems for this problem:

Heron's Formula:
Let s = (a+b+c)/2. The area of the triangle, A, is sqrt(s(s-a)(s-b)(s-c)).

Circumradius:
The radius of the circumscribed (outside) circle is (a*b*c)/(4*A).

Inradius:
The radius of the inscribed (inside) circle is A / s.

From these, it should be pretty simple to find the areas of the three pieces*/
#include<stdio.h>
#include<math.h>
#define pi 2*acos(0)
int main()
{
    double a,b,c,s,r,R,A,A1,A2,A3;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3&&a&&b&&c)
    {
        s=(a+b+c)/2;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        R=(a*b*c)/(4*A);
        A1=(pi*R*R)-A;
        r=A/s;
        A3=pi*r*r;
        A2=A-A3;
        printf("%.4lf %.4lf %.4lf\n",A1,A2,A3);
    }
    return 0;
}
