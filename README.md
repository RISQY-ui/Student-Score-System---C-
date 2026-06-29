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
#include <iomanip>
```

· iostream : Untuk melakukan input (cin) dan output (cout) ke layar.
· vector  : Untuk membuat array dinamis yang ukurannya bisa berubah sesuai jumlah nilai yang dimasukkan.
· iomanip : Untuk mengatur format desimal (misalnya membatasi angka di belakang koma).

2. Fungsi tampilkanNilai()

```cpp
void tampilkanNilai(vector<int> nilai) {
    for(int i = 0; i < nilai.size(); i++) {
        cout << "Nilai ke-" << i + 1 << " : " << nilai[i] << endl;
    }
}
```

Penjelasan: Fungsi ini menerima vector nilai, lalu melakukan perulangan sebanyak ukuran vector (nilai.size()). Setiap elemen ditampilkan beserta nomor urutnya.

3. Fungsi tampilkanTotal()

```cpp
int tampilkanTotal(vector<int> nilai) {
    int total = 0;
    for(int i = 0; i < nilai.size(); i++) {
        total += nilai[i];
    }
    return total;
}
```

Penjelasan: Fungsi ini menjumlahkan seluruh elemen di dalam vector menggunakan perulangan, lalu mengembalikan hasil penjumlahannya.

4. Fungsi tampilkanTinggi() dan tampilkanRendah()

```cpp
int tampilkanTinggi(vector<int> nilai) {
    int max = nilai[0]; // Anggap nilai pertama adalah yang tertinggi
    for(int i = 1; i < nilai.size(); i++) {
        if(nilai[i] > max) {
            max = nilai[i]; // Update jika ada nilai yang lebih tinggi
        }
    }
    return max;
}
```

```cpp
int tampilkanRendah(vector<int> nilai) {
    int min = nilai[0]; // Anggap nilai pertama adalah yang terendah
    for(int i = 1; i < nilai.size(); i++) {
        if(nilai[i] < min) {
            min = nilai[i]; // Update jika ada nilai yang lebih rendah
        }
    }
    return min;
}
```

Penjelasan: Kedua fungsi ini mencari nilai maksimum dan minimum dengan cara membandingkan setiap elemen vector satu per satu. Nilai awal diambil dari elemen pertama (nilai[0]).

5. Fungsi main()

```cpp
int main() {
    string nama;
    int jumlah;
    vector<int> nilai;

    cout << "Masukkan nama anda  : ";
    cin >> nama;

    cout << "Jumlah nilai        : ";
    cin >> jumlah;

    for(int i = 0; i < jumlah; i++) {
        int n;
        cout << "Nilai ke-" << i + 1 << "     : ";
        cin >> n;
        nilai.push_back(n); // Memasukkan nilai ke dalam vector
    }

    // Memanggil fungsi-fungsi yang sudah dibuat
    tampilkanNilai(nilai);

    int total = tampilkanTotal(nilai);
    double rata = (double)total / nilai.size();

    // Menampilkan hasil akhir
    cout << "\nNama siswa        : " << nama << endl;
    cout << "Total nilai       : " << total << endl;
    cout << "Rata-rata         : " << fixed << setprecision(2) << rata << endl;
    cout << "Nilai tertinggi   : " << tampilkanTinggi(nilai) << endl;
    cout << "Nilai terendah    : " << tampilkanRendah(nilai) << endl;
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
=== PROGRAM NILAI SISWA ===
===========================
Masukkan nama anda  : Faris
Jumlah nilai        : 5
Nilai ke-1     : 80
Nilai ke-2     : 90
Nilai ke-3     : 75
Nilai ke-4     : 85
Nilai ke-5     : 95

=== Daftar Nilai ===
Nilai ke-1 : 80
Nilai ke-2 : 90
Nilai ke-3 : 75
Nilai ke-4 : 85
Nilai ke-5 : 95

===========================
Nama siswa        : Faris
Total nilai       : 425
Rata-rata         : 85.00
Nilai tertinggi   : 95
Nilai terendah    : 75
===========================
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
