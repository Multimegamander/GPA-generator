//By Multimegamander 0w0

#include <iostream>

//Define the classes and gpa
double class1; 
double class2; 
double class3;
double class4;
double class5;
double class6;
double gpa;

int main()
{
  //Ask the grade of your classes
  int class1;
  std::cout << "What's your grade of class 1?" <<"\n";
  std::cin >> class1;

  int class2;
  std::cout << "What's your grade of class 2?" <<"\n";
  std::cin >> class2;
  
  int class3;
  std::cout << "What's your grade of class 3?" <<"\n";
  std::cin >> class3;
  
  int class4;
  std::cout << "What's your grade of class 4?" <<"\n";
  std:: cin >> class4;
  
  int class5;
  std::cout << "What's your grade of class 5?" <<"\n";
  std::cin >> class5;
  
  int class6;
  std::cout << "What'd your grade of class 6?" <<"\n";
  std::cin >> class6;
  
  gpa = class1 + class2 + class3 + class4 + class5 + class6 /6 *2;
  
  std::cout << "Your GPA is " << gpa << "\n"; 
}
