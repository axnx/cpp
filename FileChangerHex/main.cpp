#include <iostream>
#include <fstream>
#include "md5.h"

//http://www.zedwood.com/article/cpp-md5-function

using namespace std;
//using std::cout;
//using std::endl;

int fileSize(const char *add){
  ifstream mySource;
  mySource.open(add, ios_base::binary);
  mySource.seekg(0,ios_base::end);
  int size = mySource.tellg();
  mySource.close();
  return size;
}

void logo(){
  cout << endl;
  cout << " 1" << endl;
  cout << " 2" << endl;
  cout << " 3" << endl;
  cout << " 4" << endl;
  cout << " 5" << endl;
  cout << " 6" << endl;
  cout << " 7" << endl;
  cout << " 8" << endl;
  cout << "" << endl;
}

int prog ()
{
  const char pos = 0xA;
  const char newValue = 0xCC;
  //data = new char [size];
  //data[pos] = data;
  //char data[size];
  //myFile.write(&data, 1);
  //stream.seekg (0, ios::beg);
  //stream.read(data, size);
}

int md5FromFile(char* filename)
{
  fstream stream;
  stream.open (filename, ios::out | ios::in |ios::binary);
  if (!stream)
  {
    cout << "Couldn't open " << endl;
    return(1);
  }
  cout << "File: " << filename << endl;

  long bpos, epos, size, length;

  bpos = stream.tellg();
  stream.seekg (0, ios::end);
  epos = stream.tellg();
  //cout << "epos: " << epos << " bpos: " << bpos << endl;
  size = epos - bpos;
  cout << "Size: " << size << endl;

  // allocate memory:
  char *buffer = new char [length-1];
  // read data as a block:
  stream.seekg (0, ios::beg);
  stream.read (buffer,length);
  stream.close();
  cout << "MD5: " << md5(buffer) << endl;

  return 0;
}


int readFileIntoBuffer(char* filename, char *buffer)
{
  fstream stream;
  stream.open (filename, ios::out | ios::in |ios::binary);
  if (!stream)
  {
    cout << "Couldn't open " << endl;
    return(1);
  }
  cout << "File: " << filename << endl;

  long bpos, epos, size, length;

  bpos = stream.tellg();
  stream.seekg (0, ios::end);
  epos = stream.tellg();
  //cout << "epos: " << epos << " bpos: " << bpos << endl;
  size = epos - bpos;
  cout << "Size: " << size << endl;

  // allocate memory:
  char *buffernew = new char [size-1];
  //*buffer = buffernew;
  // read data as a block:
  stream.seekg (0, ios::beg);
  stream.read (buffernew,length);
  stream.close();

  buffer = buffernew;

  return 0;
}


int main()
{
  logo();
  //prog();
  //md5FromFile ("c:/test3/file.hex");
  char *buffer;
  char buffernew = new char [256];

  buffer = *buffernew;
  //readFileIntoBuffer ("c:/test3/file.hex", buffer);

  int size = (sizeof(*buffer) / sizeof(char));
  cout << "size of buffer:" << size << endl;
  return 0;
}
