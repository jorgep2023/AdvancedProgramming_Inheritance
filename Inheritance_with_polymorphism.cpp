#include <iostream>
#include <vector>

class MadridFood {
public:
    // Virtual method to display message about typical Madrid dish.
    virtual void displayDescription() {
        std::cout << "Typical dish from Madrid.\n";
    }
};

class AguascalientesFood1 : public MadridFood {
public:
    // Override method for a variant of the dish from Aguascalientes.
    void displayDescription() override {
        std::cout << "Typical dish from Aguascalientes (Variant 1).\n";
    }
};

class AguascalientesFood2 : public MadridFood {
public:
    // Override method for another variant of the dish from Aguascalientes.
    void displayDescription() override {
        std::cout << "Typical dish from Aguascalientes (Variant 2).\n";
    }
};

int main() {
    std::vector<MadridFood*> dishes;
    dishes.push_back(new AguascalientesFood1());
    dishes.push_back(new AguascalientesFood2());

    for (MadridFood* dish : dishes) {
        dish->displayDescription();
        delete dish;
    }

    return 0;
}
