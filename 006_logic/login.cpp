#include <iostream>
#include <string>

int main(){
    const std::string login {"user_123"};
    const std::string password {"123456"};

    std::string userLogin{}, userPassword{};
    std::cout << "Введите имя пользователя: ";
    std::cin >> userLogin;

    if(userLogin == login){
        std::cout << "Введите пароль: ";
        std::cin >> userPassword;

        if (userPassword == password) {
            std::cout << "Вход разрешен! " << std::endl;
        } else {
            std::cout << "Пароль неверен!" << std::endl;      
        }

    } else {
        std::cout << "Неверное имя пользователя! Доступ запрещен." << std::endl;
    }
}

