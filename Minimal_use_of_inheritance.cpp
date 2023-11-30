#include <iostream>

class MadridFood {
public:
    // Display message about typical Madrid dish.
    void displayDescription() {
        std::cout << "Typical dish from Madrid.\n";
    }
};

class AguascalientesFood : public MadridFood {
};

int main() {
    AguascalientesFood dish;
    dish.displayDescription();
    return 0;
}
