#include <iostream>
#include <cstdlib>

int next_collatz_term(int n); // gives the next collatz term in a sequence

int maximum_collatz(int n0); // computes the full collatz sequence starting from n0 and returns the maximum term

int main(int argc, char **argv)
{
int N = std::atoi(argv[1]);
std::cout << maximum_collatz(N) << "\n";
}

int next_collatz_term(int n)
{
if (n == 1) return 1;
if (n%2 == 0) return n/2;
else return 3*n + 1;
}

int maximum_collatz(int n0)
{
  int m=n0, x=1;
while(m!=1)
{
if(m>=x){
  x=m;
}
m=next_collatz_term(m);
}
return x;
}