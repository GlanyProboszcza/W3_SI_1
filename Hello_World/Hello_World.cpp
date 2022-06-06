#include <iostream>
#include <cstring>


int main(int argc, char* argv[]) 
/* alternatywny zapis
 * int main(int argc, char** argv, char** envp)
 * Gdzie envp jest tablicą na zmienne środowiskowe
*/
{
    std::cout << "Argument Count (argc) = " << argc << std::endl;
    std::cout << "Let's see what are the arguments (argv)\n";

    for (int i = 0; i < argc; ++i) {
        std::cout << "Argument number " << i+1 << ": " << argv[i] << std::endl;
    }
    return 0;
}
