#include <iostream>
#include <string>
#include <windows.h>

void print(const std::string& text) 
{
	std::cout << text << "\n";
}

std::string input(const std::string& output_text = "")
{
	std::string text;
    {
        std::string text;
        if (output_text.empty()) {
            std::getline(std::cin, text);
        }
        else
        {
            std::cout << output_text;
            std::getline(std::cin, text);
        }
        return text;
    }
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string a;

	a = input("¬ведите текст: ");
	print(a);
    print(input("123: "));
    
}