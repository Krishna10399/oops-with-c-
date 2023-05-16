#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  ofstream MyFile("demo.txt");

  // Write to the file
  MyFile << "welcome to learning path......";

  // Close the file
  MyFile.close();
}