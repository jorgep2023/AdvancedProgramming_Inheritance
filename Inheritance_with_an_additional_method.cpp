#include <iostream>

class MadridFood {
public:
    // Display message about typical Madrid dish.
    void displayDescription() {
        std::cout << "Typical dish from Madrid.\n";
    }
};

class AguascalientesFood : public MadridFood {
public:
    // Display message about typical dish from Aguascalientes.
    void displayLocalDescription() {
        std::cout << "Typical dish from Aguascalientes.\n";
    }
};

int main() {
    AguascalientesFood dish;
    dish.displayDescription();
    dish.displayLocalDescription();
    return 0;
}
