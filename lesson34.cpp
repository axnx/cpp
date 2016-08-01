#include <iostream>

using namespace std;

int main (){

  const char table[] = {
    	'0','1','2','3','4','5','6','7','8','9',
			'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
			'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'
			};

	int nummer = 0;

	cout << "Nummer eingeben: ";
	cin >> nummer ;
  cout << endl;
  int stellen = 0;

  for(int i=0; i<nummer;i++){
    if (table[i] == 'Z'){
      nummer = 0;
    }
    cout << table[i] << endl;
  }

  return 0;
}
