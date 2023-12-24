#include <cstdlib>

int main() {
    // Execute the "logcat" command and redirect output to a file in /cache
    std::system("logcat > /cache/logcat_output.txt");

    return 0;
}
