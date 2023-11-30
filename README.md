# AdvancedProgramming_Inheritance

On this repository you will find 5 codes about inheritance on C++, each code has a different use of inheritance.

There are 5 codes, from 1 to 5 and from less to more especifilly taking about inheritance:
1. Minimal use of inheritance:
   - Defines a class `MadridFood` with a method to display a message about a typical Madrid dish.
   - Creates a class `AguascalientesFood` that inherits from `MadridFood` but doesn't add any additional functionality.
   - In `main()`, creates an object of `AguascalientesFood` and calls the display method.

2. Inheritance with an additional method:
   - Similar to the first example, but the derived class `AguascalientesFood` adds a new method to display a message about a typical dish from Aguascalientes.
   - In `main()`, creates an object of `AguascalientesFood` and calls both display methods.

3. Inheritance with method overloading:
   - Introduces method overloading in the derived class `AguascalientesFood` by providing an additional version of `displayDescription` that takes a spice level parameter.
   - In `main()`, creates an object of `AguascalientesFood` and calls both overloaded display methods.

4. Inheritance with override and new features:
   - Adds the concept of virtual methods and overrides in the base class `MadridFood` and the derived class `AguascalientesFood`.
   - Introduces a new feature (`newCharacteristic()`) in the derived class.
   - In `main()`, creates an object of `AguascalientesFood` and calls the overridden method and the new feature.

5. Inheritance with polymorphism:
   - Illustrates polymorphism using a vector of pointers to the base class `MadridFood`.
   - Creates two derived classes (`AguascalientesFood1` and `AguascalientesFood2`) and stores pointers to them in the vector.
   - Iterates through the vector, calling the overridden method for each object.

Code number 1 represents one of the simplest uses that we can obtain through inheritance, and as you advance in the codes, each time you will add uses that require a little more knowledge on the subject. We have done it this way, so that your knowledge grows in order in case you don't have it and it is much easier to learn.
