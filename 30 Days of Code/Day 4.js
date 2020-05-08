

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        if (initialAge>0)
            age=initialAge;
        else
            {
                age=0;
                cout<<"Age is not valid, setting age to 0.\n";
            }

    }

    void Person::amIOld(){
        if (age<13)
        {
            cout<<"You are young.\n";
        }
        if (age>=13 && age<18)
            cout<<"You are a teenager.\n";
            if (age>=18)
            cout<<"You are old.\n";
        // Do some computations in here and print out the correct statement to the console 

    }

    void Person::yearPasses(){
        age+=1;
        // Increment the age of the person in here

    }

