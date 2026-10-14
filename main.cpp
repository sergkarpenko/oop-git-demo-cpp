#include <iostream>
#include <string>
#ifdef _WIN32
#include <windows.h>
#endif

class ClickCounter {
public:
    explicit ClickCounter(std::string name) : name_(std::move(name)) {}
    void click() { ++count_; }
    void print() const
    {
        std::cout << name_ << ": " << count_ << " натискання\n";
    }

private:
    std::string name_;
    int count_ = 0;
};

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
    ClickCounter counter("Кнопка");
    counter.click();
    counter.click();
    counter.print();
    return 0;
}
