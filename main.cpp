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
}