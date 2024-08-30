// The whole point of this is not to include any libraries but it was just impractical writing replacement for cstdio: you need header files!
// You need them at least to use functionality in the standard library:
#include <cstdio> // for using C-style I/O functions

namespace std {

    // Forward declaration of ostream and istream
    class ostream;
    class istream;

    // Define the manipulator endl
    ostream& endl(ostream& os);

    class ostream {
    public:
        // Overload for printing C-style strings
        ostream& operator<<(const char* str) {
            printf("%s", str);
            return *this;
        }

        // Overload for printing integers
        ostream& operator<<(int num) {
            printf("%d", num);
            return *this;
        }

        // Overload for handling the endl manipulator
        ostream& operator<<(ostream& (*manip)(ostream&)) {
            return manip(*this);
        }
    };

    class istream {
    public:
        // Overload for reading integers
        istream& operator>>(int& num) {
            scanf("%d", &num);
            return *this;
        }

        // Overload for reading C-style strings
        istream& operator>>(char* str) {
            scanf("%s", str);
            return *this;
        }
    };

    // Define the standard output and input stream objects
    ostream cout;
    istream cin;

    // Define the endl manipulator
    ostream& endl(ostream& os) {
        // Insert a newline and flush the output stream
        printf("\n");
        fflush(stdout);
        return os;
    }

} // namespace std

int main() {
    int number;
    char name[100];

    std::cout << "Enter a number: ";
    std::cin >> number; // We are using a new functionality here: this is to allow you to do input: very cool:

    std::cout << "Enter your name: ";
    std::cin >> name;

    std::cout << "Hello, " << name << "! You entered number " << number << std::endl;

    return 0;
}
