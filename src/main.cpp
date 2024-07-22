#include <unistd.h>
#include <iostream>
#include <string>
#include <filesystem>

namespace fs = std::filesystem;

int main(int argc, char *argv[]) {

    std::string path = "";
    for (int i = 0; i < argc; i++) {
        if (fs::is_directory(argv[i])) {
            path = argv[i];
            break;
        }
    }

    int c;
    while ((c = getopt(argc, argv, "alhtrSCm")) != -1) {
        switch (c) {
            case 'a':
                break;
            case 'l':
                break;
            case 'h':
                break;
            case 't':
                break;
            case 'r':
                break;
            case 'S':
                break;
            case 'C':
                break;
            case 'm':
                break;
            //case '?':
                //std::cerr << "Invalid Option: -" << char(optopt) << '\n';
              //  return -1;
            default:
                return -1;
        }
    }
    if (path.size() == 0) {
        std::cout << "path not given" << '\n';
        return 0;
    }
    std::cout << "the path is : " << path << '\n';
    return 0;
}
