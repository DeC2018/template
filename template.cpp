#include <iostream>
#include <string>

void read() {}

template <typename T, typename... Args>
void read(T& value_, Args& ...args_) {
    std::cin >> value_;
    read(args_...);
}

int main() {
    int a, b;
    double c, d;
    std::string s1, s2;
    read(a, b, c, d, s1, s2);
    //~ std::cin >> a >> b >> c >> d >> d >> s1 >> s2
    std::cout << "a = " << a << '\n'
        << "b = " << b << '\n'
        << "c = " << c << '\n'
        << "d = " << d << '\n'
        << "s1 = " << s1 << '\n'
        << "s2 = " << s2 << '\n';
    int g;
    double f;
    read(f, g);
    std::cout << "f = " << f << '\n'
        << "g = " << g << '\n';
}
