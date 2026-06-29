# project-nilai-siswa-

# 📚 Program Nilai Siswa (C++)

Program ini adalah aplikasi C++ sederhana untuk menghitung nilai siswa. Program ini menggunakan **Vector** (array dinamis) untuk menyimpan data nilai secara fleksibel, serta menggunakan beberapa fungsi khusus untuk menghitung total, rata-rata, nilai tertinggi, dan nilai terendah.

---

## 📖 Fitur Program

- Meminta input **Nama Siswa**.
- Meminta input **Jumlah Nilai** yang akan dimasukkan.
- Memasukkan nilai-nilai siswa secara berulang menggunakan perulangan `for`.
- Menampilkan **Daftar Nilai** yang sudah dimasukkan.
- Menghitung dan menampilkan:
  - **Total Nilai**
  - **Rata-rata Nilai**
  - **Nilai Tertinggi**
  - **Nilai Terendah**

---

## 🧠 Penjelasan Logika Kode

Berikut adalah penjelasan detail bagaimana kode ini bekerja:

### 1. Header dan Vector
```cpp
#include <iostream>
#include <vector>
using namespace std;
```

· iostream : Untuk melakukan input (cin) dan output (cout) ke layar.
· vector  : Untuk membuat array dinamis yang ukurannya bisa berubah sesuai jumlah nilai yang dimasukkan.

2. Fungsi tampilkanNilai()

```cpp
void tampilkanNilai(vector<int>nilai){
     cout << "\nDaftar Nilai\n";
     for(int i = 0; i < nilai.size(); i++){
     cout << "nilai ke-" << i+1 << ":" << nilai[i] << endl;
    }
}
```

Penjelasan: Fungsi ini menerima vector nilai, lalu melakukan perulangan sebanyak ukuran vector (nilai.size()). Setiap elemen ditampilkan beserta nomor urutnya.

3. Fungsi tampilkanTotal()

```cpp
int tampilkanTotal(vector<int>nilai){
       int total = 0;
      for(int i = 0; i < nilai.size(); i++){
       total += nilai[i];
    }
 return total;
}
```

Penjelasan: Fungsi ini menjumlahkan seluruh elemen di dalam vector menggunakan perulangan, lalu mengembalikan hasil penjumlahannya.

4. Fungsi tampilkanTinggi() dan tampilkanRendah()

```cpp
int tampilkanTinggi(vector<int>nilai){
      int max = nilai[0];
    for(int i = 1; i < nilai.size(); i++){
       if(nilai[i] > max){
        max = nilai[i];
   }
}
return max;
}
```

```cpp
int tampilkanRendah(vector<int>nilai){
      int min = nilai[0];
    for(int i = 1; i < nilai.size(); i++){
       if(nilai[i] < min){
        min = nilai[i];
   }
}
return min;
}
```

Penjelasan: Kedua fungsi ini mencari nilai maksimum dan minimum dengan cara membandingkan setiap elemen vector satu per satu. Nilai awal diambil dari elemen pertama (nilai[0]).

5. Fungsi main()

```cpp
int main(){
  string nama;
  int jumlah;
  vector<int>nilai;
      
        cout << "===nilai sekolah===\n\n";
         cout<< "masukan nama anda :";
        cin >> nama;

          cout<< "jumlah nilai : ";
           cin >> jumlah;
  
    for(int i = 0; i < jumlah; i++){
    int n;
     
      cout << "nilai ke-" << i + 1 << ":";
     cin >> n;
    
     nilai.push_back(n);
    }
       tampilkanNilai(nilai);

int total = tampilkanTotal(nilai);

  double rata = (double)total / nilai.size();
  cout << "\n======================\n" << endl;
  cout << "Nama  : " << nama << endl;
  cout << "Total      : "<< total << endl;
  cout <<"Rata-rata    :  "<< rata << endl;
  cout << "Nilai tinggi   : "<< tampilkanTinggi(nilai) << endl;
  cout <<"Nilai rendah   : " << tampilkanRendah(nilai) << endl;
  
 return 0;
}
```

Penjelasan: Inilah bagian utama program. Program meminta input nama dan jumlah nilai. Lalu menggunakan perulangan for untuk memasukkan nilai satu per satu ke dalam vector menggunakan perintah push_back(). Setelah semua nilai masuk, program memanggil fungsi-fungsi yang sudah dibuat untuk menghitung dan menampilkan hasilnya.

---

💻 Cara Menggunakan

1. Jalankan program.
2. Masukkan nama anda.
3. Masukkan jumlah nilai yang ingin diinput.
4. Masukkan nilai satu per satu.
5. Program akan secara otomatis menampilkan hasil perhitungan.

---

📝 Contoh Output Program

```text
===nilai sekolah===

masukan nama anda :Faris
jumlah nilai : 5
nilai ke-1:80
nilai ke-2:90
nilai ke-3:75
nilai ke-4:85
nilai ke-5:95

Daftar Nilai
nilai ke-1:80
nilai ke-2:90
nilai ke-3:75
nilai ke-4:85
nilai ke-5:95

======================

Nama  : Faris
Total      : 425
Rata-rata    :  85
Nilai tinggi   : 95
Nilai rendah   : 75
```

---

⚙️ Cara Kompilasi dan Menjalankan

Menggunakan Compiler Online (Replit, Programiz, dll):

· Copy kode, paste, lalu klik tombol Run.

Menggunakan Terminal (Command Prompt / Linux / Mac):

1. Buka terminal di folder tempat file project_nilai_siswa.cpp disimpan.
2. Ketik perintah kompilasi:
   ```bash
   g++ project_nilai_siswa.cpp -o project_nilai_siswa
   ```
3. Jalankan program dengan perintah:
   ```bash
   ./project_nilai_siswa   # (Mac/Linux)
   project_nilai_siswa.exe # (Windows)
   ```

---

📌 Kesimpulan

Program ini adalah latihan yang sangat baik untuk memahami konsep-konsep dasar pemrograman C++:

· Vector (Array Dinamis)
· Fungsi (Modularisasi kode)
· Perulangan (for loop)
· Percabangan (if statement untuk mencari nilai max/min)
· Pass by Value (Parameter function)
