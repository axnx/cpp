#include <iostream>

using namespace std;

int main()
{
  enum Farbe {ROT, GELB, GRUEN, BLAU};

  Farbe Ampel;
  Ampel = BLAU;

  cout << Ampel << endl;
  return 0;
}
