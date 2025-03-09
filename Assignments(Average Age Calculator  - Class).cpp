#include <iostream>
#include <string>
using namespace std;


class AgeCalculator 
{
private:
    string names[10];
    int ages[10];

public:
    AgeCalculator() 
    {
        names[0] = "Person1";
        ages[0] = 33;
        names[1] = "Person2";
        ages[1] = 21;
        names[2] = "Person3"; 
        ages[2] = 22;
        names[3] = "Person4"; 
        ages[3] = 12;
        names[4] = "Person5"; 
        ages[4] = 24;
        names[5] = "Person6"; 
        ages[5] = 44;
        names[6] = "Person7"; 
        ages[6] = 64;
        names[7] = "Person8"; 
        ages[7] = 56;
        names[8] = "Person9"; 
        ages[8] = 19;
        names[9] = "Person10"; 
        ages[9] = 29;
    }
    
    double x = sizeof(ages)/sizeof(ages[0]);

    double averageAge() const 
    {
        int sum = 0;
        for (int age : ages) 
        {
            sum += age;
        }
        return sum / x;
    }
};

int main() 
{
    AgeCalculator calculator; 
    double average = calculator.averageAge(); 
    cout << "Average Age: " << average << endl;
    return 0;
}