#include<stdio.h>
#include<math.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;

Fraction input_fraction()
{
Fraction f;
  printf("enter the number\n");
  scanf("%d %d",&f.num,&f.den);
 }
Fraction smallest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  int x=f1.den * f2.den * f3.den;
  f1.num=f1.num*(x/f1.den);
  f2.num=f2.num*(x/f2.den);
  f3.num=f3.num*(x/f3.den);
  if(f1.num<f2.num && f1.num<f3.num)
    return f1.num;
  else if(f2.num<f3.num)
    return f2.num;
      else
    return f3.num;
  }
void output(Fraction f1, Fraction f2, Fraction f3, Fraction smallest)
{
  if(smallest==f1.num)
  printf("%f is smallest fraction\n",f1);
else if(smallest==f2.num)
{
  printf("%f is smallest fraction\n",f2);
  }
  else
  printf("%f is smallest fraction\n",f3);
  }
int main()
{
  Fraction smallest,f1,f2,f3;
  f1=input_fraction();
  f2=input_fraction();
  f3=input_fraction();
  smallest= smallest_fraction(f1,f2,f3);
  output(f1,f2,f3,smallest);
  return 0;
  
}