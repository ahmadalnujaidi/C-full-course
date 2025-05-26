// #include <iostream>
//
// int main() {
//     std::cout << "Hello World!" <<std::endl; // end line or \n
//     std::cout << "its really working";
//     return 0;
// } INTRODUCTION

// #include <iostream>
// int main() {
//     int x; // declaration
//     x = 5; // assignment
//     int y = 6; // both dec and assn
//     int sum = x + y;
//     std::cout << x << std::endl;
//     std::cout << y << '\n';
//     std::cout << sum << std::endl;
//     int age = 22;
//
//     double price = 3.99;
//     double gpa = 3.01;
//     double temp = 25.1;
//     std::cout << price << std::endl;
//
//     char grade = 'A';
//     char initial = 'I';
//     std::cout << grade << std::endl;
//
//     bool isStudent = true;
//     bool power = false;
//
//     std::string name = "Ahmad";
//     std::cout << name << std::endl;
//     std::cout << "Hello " << name << std::endl;
//     std::cout << "You are " << age << " years old";
//     return 0;
// } VARIABLES AND BASIC DATA TYPES

// #include <iostream>
// int main () {
//     const double PI = 3.14159; // unchangeable
//     double radius = 10;
//     double circumference = 2 * PI * radius;
//     std::cout << circumference << "cm";
//     const int LIGHT_SPEED = 299792458;
//     const int WIDTH = 1920;
//     const int HEIGHT = 1080; // SOME EXAMPLES
//
//     return 0;
// } CONST

// #include <iostream>
// namespace first {
//     int x = 1;
// }
// namespace second {
//     int x = 2;
// }
// int main() {
//     // int x = 0;
//     // std::cout << second::x << std::endl;
//     using namespace first;
//     std::cout << x << std::endl;
//     using std::cout;
//     using std::string;
//     string name = "ahmad";
//     cout << name << std::endl;
//
//     return 0;
// } NAMESPACES

// #include <iostream>
// #include <vector>
// // typedef std::vector<std::pair<std::string, int>> pairlist_t;
// // typedef std::string text_t;
// // typedef int number_t;
// using text_t = std::string;
// using number_t = int;
// int main() {
//     // pairlist_t pairlist;
//     text_t name = "ahmad";
//     std::cout << name << std::endl;
//     number_t age = 22;
//     std::cout << age << std::endl;
//
//
//
//     return 0;
// } TYPEDEF AND TYPE ALIASES

// #include <iostream>
// int main() {
//     int students = 20;
//     // students = students + 1;
//     // students += 2;
//     // students++;
//     // students = students - 1;
//     // students -= 2;
//     // students --;
//     // students = students * 2;
//     // students *= 2;
//     // students /= 2;
//     // students /= 3;
//     // int remainder = students%3;
//     // std::cout << students << std::endl;
//     // std::cout << remainder << std::endl;
//     // PEMDAS
//     int students2 = 6 - 5 + 4 * 3 / 2;
//     std::cout << students2 << std::endl;
//
//     return 0;
// } ARITHMETIC OPERATORS

// #include <iostream>
// int main() {
//     // double x = (int)3.14;
//     // char x = 100;
//
//     std::cout << (char)100 << std::endl;
//     int correct = 8;
//     int questions = 10;
//     double score = correct/(double)questions * 100;
//     std::cout << score << "%" << std::endl;
//
//
//     return 0;
// } TYPE CONVERSION

// #include <iostream>
// int main() {
//     // cout << (insertion operator)
//     // cin >> (extraction operator)
//
//     std::string name;
//     std::cout << "whats ur name?: ";
//     std::cin >> name;
//     std::cout << "Hello, " << name << std::endl;
//
//     std::string full_name;
//     std::cout << "Enter your full name: ";
//     std::getline(std::cin >> std::ws, full_name);
//     std::cout << "Hello, " << full_name << std::endl;
//
//     int age;
//     std::cout << "Enter your age: ";
//     std::cin >> age;
//     std::cout << "your are " << age << " old";
//
//     return 0;
// } USER INPUT

// #include <iostream>
// #include <cmath>
// int main() {
//     double x = 3.14;
//     double y = 4;
//     double z;
//     // z = std::max(x,y);
//     // z = std::min(x, y);
//     // z = pow(2,4);
//     // z = sqrt(9);
//     // z = abs(-7);
//     // z = round(x);
//     // z = ceil(x);
//     z = floor(x);
//     std::cout << z << std::endl;
//
//     return 0;
// } USEFUL MATH RELATED FUNCTIONS

// #include <iostream>
// #include <cmath>
// int main() {
//     double a;
//     double b;
//     double c;
//     std::cout << "Enter a number for side A: ";
//     std::cin >> a;
//     std::cout << "Enter a number for side B: ";
//     std::cin >> b;
//     // a = pow(a, 2);
//     // b = pow(b, 2);
//     c = sqrt(pow(a, 2) + pow(b, 2));
//     std::cout << "side C: " << c << std::endl;
//
//     return 0;
// } HYPOTENUSE CALCULATOR PRACTICE PROGRAM

// #include <iostream>
// int main() {
//     int age;
//     std::cout << "Enter your age: ";
//     std::cin >> age;
//     if (age >= 18 && age < 100) {
//         std::cout << "welcome to the site!";
//     }
//     else if (age < 0) {
//         std::cout << "you havent been born";
//     }
//     else if (age >= 100) {
//         std::cout << "you are too old";
//     }
//     else {
//         std::cout << "you arent old enough";
//     }
//
//     return 0;
// } IF STATEMENTS