#include <iostream>
class GoodbyeMoon
{
public:
    void printText()
    {
        std::cout << "Goodbye Moon!";
    }
};
// Das mit Klassen verwenden hätte man mir letztes mal auch sagen können
int main()
{
    GoodbyeMoon gm = GoodbyeMoon();
    gm.printText();
}
