#include <iostream>
int tambah(int a, int b) {
 return a + b;
}
double kalikan(double x, double y) {
 return x * y;
}
int main() {
 int angka1 = 5;
 int angka2 = 3;
 double desimal1 = 2.0;
 double desimal2 = 5.0;
 std::cout << "Hasil penjumlahan: " << tambah(angka1, angka2)
<< std::endl;
 std::cout << "Hasil perkalian: " << kalikan(desimal1,
desimal2) << std::endl;
 return 0;
}