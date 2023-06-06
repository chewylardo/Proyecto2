
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <queue>
#include <limits>
#include <unordered_map>
#include <string>
using namespace std;


int main()
{   
    fstream newfile;
    cout << "Hello World!\n";
    cout << "proyecto envio\n";

   newfile.open("Guardans.txt",ios::in); 
   if (newfile.is_open()){ 
      string tp;
      while(getline(newfile, tp)){ 
         cout << tp << "\n"; 
      }
      newfile.close(); 
   }

}


