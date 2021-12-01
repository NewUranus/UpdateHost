#include <iostream>

using namespace std;

int main()
{
    ShellExecute(NULL, "runas", "cmd", "/c ipconfig flushdns", NULL, SW_HIDE);
    return 0;
}
