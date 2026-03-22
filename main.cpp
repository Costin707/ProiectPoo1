#include <iostream>
#include <string.h>
#include <vector>

class User {
    const int id;
    std::string name;
    static long noUsers;
    float height;
    float weight;
    char gender;
    double BMI;
    void copyName(const char* src);
public:
    User();
    User(std::string name, float height, float weight, char gender);
    void setHeight(float);
    void setWeight(float);
    void calculateBMI();
};

long User::noUsers = 0;



User::User() : id(++noUsers) {
    name = "N/A";
    height = 0;
    weight = 0;
    gender = 'N';
    BMI = 0;
}
void User::calculateBMI() {
    if (height > 0 && weight > 0  )
        BMI = weight / (height * height);
    else
        BMI = 0;
}
void User::setWeight(float weight) {
    this->weight = weight;
    calculateBMI();
}

void User::setHeight(float height) {
    this->weight = height;
    calculateBMI();
}
