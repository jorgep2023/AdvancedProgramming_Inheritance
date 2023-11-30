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
    // Inheriting the displayDescription signature from MadridFood
    using MadridFood::displayDescription;

    // Overloaded method to display typical dish from Aguascalientes with spice level.
    void displayDescription(int spiceLevel) {
        std::cout << "Typical dish from Aguascalientes with spice level: " << spiceLevel << "\n";
    }
};

int main() {
    AguascalientesFood dish;
    dish.displayDescription(); // Now it should work correctly
    dish.displayDescription(5);
    return 0;
}

