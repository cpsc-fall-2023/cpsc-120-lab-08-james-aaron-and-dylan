// Le, James
// lejames11367@csu.fullerton.edu
// @lejames11367
// Partners: @Flimmmzy, @dylanslong

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() < 2) {
    std::cout << "error: you must supply at least one number \n";
    return 1;
  }
  bool flag = true;
  double sum{0.0};
  for (std::string& argument : arguments) {
    if (flag == true) {
      flag = false;
    } else {
      sum = sum + std::stod(argument);
    }
  }
  double average{sum / (static_cast<int>(arguments.size()) - 1)};
  std::cout << "average = " << average << "\n";

  return 0;
}