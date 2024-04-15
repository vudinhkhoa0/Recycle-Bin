#include <iostream>
#include "homePage.h";
using namespace std;
int main() {
    auto ui = homePage::create();
    ui->global<statistical_data>().on_statistical_getSLINT_data([&] (slint::SharedString a, int b) {
        std::string ID_PLANE (a);
        int ID_SORT (b);
        cout << ID_SORT << " " << ID_PLANE << endl;
    });
    ui->run();
    return 0;
}