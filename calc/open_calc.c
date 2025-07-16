#include <stdlib.h>

int main()
{
  // Linux (Debian, Ubuntu)
  system("xdg-open calculator.html");

  // If you're on Windows, use:
  // system("start calculator.html");

  // For macOS:
  // system("open calculator.html");

  return 0;
}
