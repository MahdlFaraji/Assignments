#include <iostream>

using namespace std;


        //Average
/*
double AverageCalculator(int array[], int size);

int main()
{

    int RandomList[] = {4, 10, 400, 2000, 0};

    int ListSize = sizeof(RandomList)/sizeof(RandomList[0]);

    double ListAverage = AverageCalculator(RandomList, ListSize) / ListSize;

    cout << "the average of the list shown above is: " << ListAverage << ".\n";
    return 0;
}

double AverageCalculator(int array[], int size)

{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {

        sum = sum + array[i];
    }
    return sum;
}
*/

/*

struct PersonalInformation
{
    string FirstName;
    string LastName;
    int Age;
};

int AverageAgeCalculator(int array[], int size);

int main()
{

    PersonalInformation Person1;
    Person1.FirstName = "Mahdi";
    Person1.LastName = "Faraji";
    Person1.Age = 20;
    PersonalInformation Person2;
    Person2.FirstName = "Zahra";
    Person2.LastName = "Heydari";
    Person2.Age = 27;
    PersonalInformation Person3;
    Person3.FirstName = "Ali";
    Person3.LastName = "Asgari";
    Person3.Age = 20;
    PersonalInformation Person4;
    Person4.FirstName = "Shayan";
    Person4.LastName = "Ghadimi";
    Person4.Age = 20;
    PersonalInformation Person5;
    Person5.FirstName = "Arash";
    Person5.LastName = "Talebi";
    Person5.Age = 21;
    PersonalInformation Person6;
    Person6.FirstName = "Neda";
    Person6.LastName = "Rezaii";
    Person6.Age = 40;
    PersonalInformation Person7;
    Person7.FirstName = "Ailin";
    Person7.LastName = "Haji Mohammadi";
    Person7.Age = 18;    
    PersonalInformation Person8;
    Person8.FirstName = "Arian";
    Person8.LastName = "Haji";
    Person8.Age = 21;
    PersonalInformation Person9;
    Person9.FirstName = "Foad";
    Person9.LastName = "Moradi";
    Person9.Age = 22;    
    PersonalInformation Person10;
    Person10.FirstName = "Rozhina";
    Person10.LastName = "Khaniche";
    Person10.Age = 21;

    int AgeList[] = {Person1.Age, Person2.Age, Person3.Age, Person4.Age, Person5.Age, Person6.Age, Person7.Age, Person8.Age, Person9.Age, Person10.Age};

    int AgeListSize = sizeof(AgeList)/sizeof(AgeList[0]);

    int AverageOfAges = AverageAgeCalculator(AgeList,AgeListSize);

    cout << "the average age of the people written above is: " << AverageOfAges << " Years Old! \n";

    return 0;
}

int AverageAgeCalculator(int array[], int size)
{
    int sum;
    for(int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }
    return sum / size;
}

*/


//Min Max
/*
void BigNumberFinder(int array[], int size);
void SmallNumberFinder(int array[], int size);


int main()
{
    int RandomNumbers[] = {44, 55, 68, 298, 43, 10, 2};


    int ListSize = sizeof(RandomNumbers)/sizeof(RandomNumbers[0]);

    BigNumberFinder(RandomNumbers, ListSize);
    SmallNumberFinder(RandomNumbers, ListSize);



    return 0;
}

void BigNumberFinder(int array[], int size)
{
    int BiggestNumber = 0;

    for(int i = 0; i < size; i++)
    {
        BiggestNumber = max(BiggestNumber, array[i]); 
    }

    cout << "the Biggest number between those you have entered above is: " << BiggestNumber << "! \n";
}

void SmallNumberFinder(int array[], int size)
{
    int SmallestNumber = 0;

    for(int i = 0; i < size; i++)
    {
        SmallestNumber = min(SmallestNumber, array[i]); 
    }

    cout << "the Smallest number between those you have entered above is: " << SmallestNumber << "! \n";
}

*/

//Mod

double mod(int A, int B);

int main()
{
    int A;
    int B;
    cout << "Enter two numbers\n";
    cin >> A;
    cin >> B;

    cout << "The modulus of" <<  A << " / " << B << " is equal to: " << mod(A, B) << "!\n";
}

double mod(int A, int B)
{
    return A % B;
}