#include <iostream>
using namespace std;

enum DishType {
    PIZZA,
    PASTA,
    SUSHI,
    BURGER,
    SALAD
};

enum CuisineType {
    ITALIAN,
    JAPANESE,
    AMERICAN,
    OTHER
};

struct Food {
    string name;
    DishType dishType;
    CuisineType cuisine;
    double price;
    int calories;
};

int main() {

    Food food_info;

        
        cout << "Введіть назву їжі: ";
        cin >> food_info.name;
   

        cout << "Введіть тип страви (0 - PIZZA, 1 - PASTA, 2 - SUSHI, 3 - BURGER, 4 - SALAD): ";
        int dishType;
        cin >> dishType;
        food_info.dishType = static_cast<DishType>(dishType);

        cout << "Введіть кухню (0 - ITALIAN, 1 - JAPANESE, 2 - AMERICAN, 3 - OTHER): ";
        int cuisineType;
        cin >> cuisineType;
        food_info.cuisine = static_cast<CuisineType>(cuisineType);

        cout << "Введіть ціну: $";
        cin >> food_info.price;

        cout << "Введіть кількість калорій: ";
        cin >> food_info.calories;

    cout << "Інформація про їжу:" << endl;
     cout << "Ім'я: " << food_info.name << endl;

     cout << "Тип страви: ";
     switch (food_info.dishType) {
         case PIZZA: cout << "Pizza";
             break;
         case PASTA: cout << "Pasta";
             break;
         case SUSHI: cout << "Sushi";
             break;
         case BURGER: cout << "Burger";
             break;
         case SALAD: cout << "Salad";
             break;
         default: cout << "Unknown type";
     }
     cout << endl;

     cout << "Кухня: ";
     switch (food_info.cuisine) {
         case ITALIAN: cout << "Italian";
             break;
         case JAPANESE: cout << "Japanese";
             break;
         case AMERICAN: cout << "American";
             break;
         case OTHER: cout << "Other";
             break;
         default: cout << "Unknown cuisine";
     }
     cout << endl;
    cout << "Ціна: $" << food_info.price << endl;
    cout << "Кількість калорій: " << food_info.calories << endl;
    
    
    return 0;
}
