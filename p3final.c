#include<stdio.h>
int input_n_and_r(int *n, int *r) 
{
  printf("Enter n : ");
  scanf("%d", n);
  printf("Enter r : ");
  scanf("%d", r);
}
int ncr(int n, int r) 
{
  int ans, num = 1, den = 1;

  for (int i=1; i<=(n-r); i++) 
    {
    den = den*i;
    }
  for (int i=1; i<=n; i++)
    {
    num = num*i;
    }
  ans = num/den;
  return ans;
}
void output(int n, int r, int result) 
{
  printf("%dC%d = %d\n", n, r, result);
} 
int main() {
  int n, r, ans;
  input_n_and_r(&n, &r);
  ans = ncr(n, r);
  output(n, r, ans);
  return 0;
}