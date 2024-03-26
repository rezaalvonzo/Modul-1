#include <iostream>
#include <map>
int main() {
 std::map<int, std::string> dataMahasiswa;
 dataMahasiswa[101] = "John Doe";
 dataMahasiswa[102] = "Jane Smith";
 dataMahasiswa[103] = "Alice Johnson";
 std::cout << "Data Mahasiswa:" << std::endl;
 for (const auto& pair : dataMahasiswa) {
 std::cout << "NIM: " << pair.first << ", Nama: " <<
pair.second << std::endl;
 }
 return 0;
}