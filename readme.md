# Tugas Matematika Diskrit: Pemrograman Rekursi

```yaml
Nama: "Muhammad Hidayat"
NRP: 05111940000131
Kelas: "C"
```

Soal yang diberikan diambil dari buku "Discrete Mathematics and Its Applications"
oleh Kenneth H. Rosen. Berikut diberikan penjelasan terkait soal-soal tersebut.
Kode sumber untuk tiap soal terlampir dalam arsip (folder/zip/git repo) ini.

## 10. Max of an arrays

> Give a recursive algorithm for finding the maximum of a
> finite set of integers, making use of the fact that the maximum
> of n integers is the larger of the last integer in the
> list and the maximum of the first n − 1 integers in the list.

Nilai maksimum dari `n` buah bilangan bulat adalah:

- Satu-satunya elemen tersebut jika hanya tersisa satu elemen (`n == 1`) (basis)
- Nilai maksimum dari `n - 1` buah bilangan bulat pertama dan elemen terakhirnya.

Kode sumber dapat dilihat [di sini](./10-max-arrays.c)

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
modus tertinggi merupakan satu-satunya metode yang paling menungkinkan. Langkah
pertama adalah mengurutkan daftar (menaik atau menurun tidak masalah).

## 15. Greatest Common Divisor

> Devise a recursive algorithm for computing the greatest
> common divisor of two nonnegative integers a and b with
> a &lt; b using the fact that gcd(a, b) = gcd(a, b − a).
