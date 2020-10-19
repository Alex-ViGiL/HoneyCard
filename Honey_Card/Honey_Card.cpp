#include <iostream>
#include <string>
#include<cmath>

using namespace std;

class Patient {

private:

    string name;
    string last_name;
    string middle_name;
    string text;

    int height;
    int weight;
    int age;

   

public:

    void set_name(string patient_name) {
        name = patient_name;
    }

    string get_name() {
        return name;
    }

    void set_last_name(string patient_last_name) {
        last_name = patient_last_name;
    }

    string get_last_name() {
        return last_name;
    }

    void set_middle_name(string patient_middle_name) {
        middle_name = patient_middle_name;
    }

    string get_middle_name() {
        return middle_name;
    }

    void set_height(int patient_height) {
        height = patient_height;
    }

    int get_height() {
        return height;
    }

    void set_weight(int patient_weight) {
        weight = patient_weight;
    }

    int get_weight() {
        return weight;
    }

    void set_age(int set_age) {
        age = set_age;
    }

    int get_age() {

        return age;
    }

    int index = weight / (pow((height / 100), 2));
    
   string set_index() {

        

        if (index < 18) {
            text = "Ниже нормального веса";
        }
        else if (index >= 18 && index < 25) {
            text = "Нормальный вес";
        }
        else if (index >= 25 && index < 30) {
            text = "Избыточный вес";
        }
        else if (index >= 30 && index < 35) {
            text = " Ожирение I степени ";
        }
        else if (index >= 35 && index < 40) {
            text = "Ожирение II степени";
        }
        else if (index >= 40) {
            text = "Ожирение III степени";
        };

        return text;
       
    }
    

   // string get_index() {
       // return text;
    //}
    
};



    int main() {

        setlocale(LC_ALL, "rus");
        Patient patient;

        string name;
        string last_name;
        string middle_name;
        string text;

        int height;
        int weight;
        int age;
        
        //Ввод данных об пациенте
        cout << "Name : ";
        getline(cin, name);
        patient.set_name(name);

        cout << "Last name : ";
        getline(cin, last_name);
        patient.set_last_name(last_name);

        cout << "Middle name : ";
        getline(cin, middle_name);
        patient.set_middle_name(middle_name);

        cout << "Height : ";
        cin >> height;
        patient.set_height(height);

        cout << "Weight : ";
        cin >> weight;
        patient.set_weight(weight);

        cout << "Age : ";
        cin >> age;
        patient.set_age(age);

        //patient.set_index();


        //Очистка вводимых данных
        system("cls");

        //Вывод информации 
        cout << endl << "Patient information" << endl <<
            "Name : " << patient.get_name() << endl <<
            "Last name : " << patient.get_last_name() << endl <<
            "Middle name : " << patient.get_middle_name() << endl <<
            "Weight : " << patient.get_weight() << endl <<""<< 
            "Height : " << patient.get_height() << endl << " "<< patient.set_index()<<endl<<
            "Age : " << patient.get_age();
    }

     