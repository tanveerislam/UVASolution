#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <fstream>
#include <iostream>
#include<stdio.h>
#include<stdlib.h>
 using namespace std;
 int main()
 {
     long long n,p,c;
     while(scanf("%lld",&n)==1)
     {
         p=1;
         c=1;
         while(true)
         {
             if(c%2) p*=9;
             else p*=2;
             if(p>=n) break;
             c++;
         }
         if(c%2) printf("Stan wins.\n");
         else printf("Ollie wins.\n");
     }
     return 0;
 }
