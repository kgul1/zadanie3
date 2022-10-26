#include <iostream>

using namespace std;

int main(void)
{
  float a, wynik;
  cout << "podaj liczbe a: ";
  cin >> a;
  if (a >= 10)
  {
    wynik = a * 2;
    cout << "liczba a wynosi: " << wynik;
  }
  else
  {
    cout << "za mala liczba: ";
  }
  return 0;
}