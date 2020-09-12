# include <iostream>
# include <cstdlib>
int number_of_divisors(int n); // counts the number of divisors of a given number
int main(int argc, char **argv)
{
const int NDMAX = std::atoi(argv[1]);
int sum = 0;
for (int ii = 1; number_of_divisors(sum)<NDMAX;++ii ) {
sum+=ii;
}
std::cout << sum << " -> " << number_of_divisors(sum) << "\n";
return 0;
}

int number_of_divisors(int n)
{
  int num=0;
for(int ii=1; ii<=n; ++ii)
{
  if(n%ii==0)
  {
    ++num;
  }
}
return num;
}