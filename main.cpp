<<<<<<< HEAD
# include <iostream>
# include <cstdlib>

int next_collatz_term(int n); // gives the next collatz term in a sequence

int maximum_collatz(int n0); // computes the full collatz sequence starting from n0 and returns the maximum term

int main(int argc, char **argv)
{
int N = std::atoi(argv[1]);
int maxval = -1, n0max = -1;
for (int ii = 1; ii <= N; ++ii) 
{
if(maximum_collatz(ii)>=maxval)
{
  maxval=maximum_collatz(ii);
  n0max=ii;
}
}
std::cout << n0max << " -> " << maxval << "\n";
return 0;
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
=======
#include <iostream>

int is_prime (int a);
int all_prime (int a, int b);

int main() {
  int a, b;
std::cout << "Imprime la cantidad de números primos desde \n";
std::cin >> a;
std::cout << "hasta \n";
std::cin >> b;
all_prime(a, b);
}

int is_prime (int a)
{
  int b=1, ii;
  if(a==2)
  {
    return b;
  }
  else 
  {
for(ii=2; ii<a; ++ii)
{
  if(a%ii==0)
  {
    b=0;
    break;
  }
}
return b;
  }
}

int all_prime (int a, int b)
{
int ii, p, su=0;
for(ii=a; ii<=b; ++ii)
{
 p = is_prime(ii);
 if(p==1)
 {
  ++su;
 }
}
std::cout << su << "\n";
>>>>>>> b2b6fa061c78652544fc2f94ca94c2d3960520ac
}