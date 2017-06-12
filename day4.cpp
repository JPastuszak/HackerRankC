using namespace std;

#include <iostream>

class Person{
public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearsPasses();
};

    Person::Person(int initialAge){

        if(initialAge<0){
            cout << "Age is not valid, setting age to 0." << endl;
            Person::age=0;
        }else{
            Person::age = initialAge;

        }

    }

    void Person::amIOld(){

        int agepass = Person::age;

        if(agepass<13){
            cout << "You are young." << endl;
        }else if(agepass>=13 && agepass<18) {
             cout << "You are a teenager." << endl;
        }else{

            cout << "You are old." << endl;
        }
    }

    void Person::yearsPasses(){

        ++Person::age;
    }

int main(){
    int t;
    int age;

    cout << "Entre nr pessoas" << endl;
    do{
        cin >> t;
    }while(t<1 || t>4);

    for(int i=0;i < t;i++){

       cout << "Entre com a idade do T.... : " << i << endl;

       do{
            cin >> age;

       }while(age<=-5 || age>=30);



       Person p(age);
       p.amIOld();
       for(int j=0;j < 3; j++){
        p.yearsPasses();
       }
       p.amIOld();

       cout << '\n';

    }

    return 0;
}
