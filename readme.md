# Tugas Matematika Diskrit: Pemrograman Rekursi

```yaml
Nama: "Muhammad Hidayat"
NRP: 05111940000131
Kelas: "C"
```

Soal yang diberikan diambil dari buku "Discrete Mathematics and Its Applications"
oleh Kenneth H. Rosen. Berikut diberikan penjelasan terkait soal-soal tersebut.
Kode sumber untuk tiap soal terlampir dalam arsip (folder/zip/git repo) ini.

## 10. Max of an array

> Give a recursive algorithm for finding the maximum of a
> finite set of integers, making use of the fact that the maximum
> of n integers is the larger of the last integer in the
> list and the maximum of the first n − 1 integers in the list.

Nilai maksimum dari `n` buah bilangan bulat adalah:

- Satu-satunya elemen tersebut jika hanya tersisa satu elemen (`n == 1`) (basis)
- Nilai maksimum dari `n - 1` buah bilangan bulat pertama dan elemen terakhirnya.

Secara efektif, rekursi ini akan membaca satu persatu elemen dari awal hingga
akhir dan membandingkan elemen maksimal saat ini dengan yang sedang dibaca.

Kode sumber dapat dilihat [di sini](10-max-arrays.c).

## 14. Mode of an array

> Give a recursive algorithm for finding a mode of a list of
> integers. (A mode is an element in the list that occurs at
> least as often as every other element.)

Modus (dalam ilmu statistika) adalah elemen yang paling sering muncul dalam
serangkaian masukan data. Dalam menentukan modus, tiap elemen harus dihitung
jumlah kemunculannya dan harus ditampung dalam suatu bentuk, dapat berupa
daftar frekuensi atau modus tertinggi.

Apabila diminta menggunakan metode rekursi, maka penggunaan daftar frekuensi
tidak memungkinkan karena harus diteruskan ke dalam tiap fungsi. Oleh karena itu,
modus tertinggi merupakan satu-satunya metode yang paling memungkinkan. Metode
ini menyimpan 4 informasi:

- Elemen modus `mode_n`
- Frekuensi elemen modus `mode_c`
- Elemen terakhir `cur_n`
- Frekuensi elemen terakhir `cur_c`

Langkah pertama adalah mengurutkan daftar (menaik atau menurun tidak masalah).
Langkah ini diperlukan untuk mempermudah proses pemilahan nilai untuk penentuan
modus pada posisi elemen tertentu. Kemudian cari modus secara rekursif.

Proses rekursi membaca satu persatu elemen dari awal hingga akhir
([lihat topik sebelumnya](#10-max-of-an-array)). Basis rekursi ialah jika elemen
hanya ada satu (`n == 1`). Pada posisi ini, `mode_n` dan `cur_n` adalah
satu-satunya elemen itu dan `mode_c` dan `cur_c` bernilai 1.

Selanjutnya, jika elemen saat ini `n_val` sama dengan `cur_n` maka `cur_c` naik
sebanyak satu. Jika ternyata nilai ini melampaui frekuensi modus saat ini, maka
modus akan digantikan dengan elemen tersebut. Sebaliknya, jika `n_val` berbeda
dengan `cur_n`, maka mulai mencatat frekuensi baru dari 1 untuk elemen tersebut.

Kode sumber dapat dilihat [di sini](14-mode.cpp).

## 15. Greatest Common Divisor

> Devise a recursive algorithm for computing the greatest
> common divisor of two nonnegative integers a and b with
> a &lt; b using the fact that `gcd(a, b) = gcd(a, b − a)`.

Faktor persekutuan terbesar (GCD) didefinisikan untuk dua bilangan a dan b
dimana a lebih kecil dari b sebagai GCD dari a dan b - a.

Terdapat tiga kasus di sini:

1. Ketika `b == 0` maka selesai. Nilai GCD adalah `a`.
2. Ketika `a > b` maka tukar kedua bilangan sehingga `a < b`.
3. Kurangkan `a` dari `b` (`b = b - a`) hingga terpenuhi kasus 1 atau 2.

8 dan 20 (GCD = 4)

| a   | b   |
| --- | --- |
| 8   | 20  |
| 8   | 12  |
| 8   | 4   |
| 4   | 8   |
| 4   | 4   |
| 4   | 0   |

4 dan 7 (GCD = 1)

| a   | b   |
| --- | --- |
| 4   | 7   |
| 4   | 3   |
| 3   | 4   |
| 3   | 1   |
| 1   | 3   |
| ... | ... |
| 1   | 0   |

Kode sumber dapat dilihat [di sini](15-gcd.c).
