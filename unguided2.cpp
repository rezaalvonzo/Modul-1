    #include <iostream>
    class Mahasiswa {
    public:
    std::string nama;
    int umur;
    void displayInfo() {
    std::cout << "Nama: " << nama << std::endl;
    std::cout << "Umur: " << umur << std::endl;
    }
    };
    struct Point {
    int x;
    int y;
    void displayCoordinates() {
    std::cout << "X: " << x << std::endl;
    std::cout << "Y: " << y << std::endl;
    }
    };
    int main() {
    Mahasiswa mhs;
    mhs.nama = "Jane Doe";
    mhs.umur = 22;
    mhs.displayInfo();
    Point p;
    p.x = 3;
    p.y = 7;
    p.displayCoordinates();
    return 0;
    }