#include <iostream>

class MadridFood {
public:
    // Virtual method to display message about typical Madrid dish.
    virtual void displayDescription() {
        std::cout << "Typical dish from Madrid.\n";
    }
};

class AguascalientesFood : public MadridFood {
public:
    // Override method to display message about typical dish from Aguascalientes.
    void displayDescription() override {
        std::cout << "Typical dish from Aguascalientes.\n";
    }

    // New feature added to the dish from Aguascalientes.
    void newCharacteristic() {
        std::cout << "New characteristic in the dish from Aguascalientes.\n";
    }
};

int main() {
    AguascalientesFood dish;
    dish.displayDescription();
    dish.newCharacteristic();
    return 0;
}
