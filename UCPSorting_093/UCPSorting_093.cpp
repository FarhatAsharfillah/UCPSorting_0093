// 1. dengan membandingkam index index yang bersebelahan dimulai dari index 0 dan index 1
//    kemudian jika elemen dalam index memiliki urutan yang belum tepat maka index ditukar atau diswap 
//    setelah ditukar maka elemen dalam index akan beraturan dan pengulangan perbandingan dilakukan 
//    sampai index terakhir
// 2. melakukan pengurutan index secara bertahap menggunakan insertion sort dengan jarak tertentu atau dengan interval
//    dengan langkah pemindahan langsung index ke tempat seharusnya agar berurutan menggunakan interval tersebut maka akan 
//    lebih cepat dan lebih efisien menyelesaikan index yang belum berurutan
// 3. shell sort, karena dalam algoritma sortir kita bisa memindahkan sebuah index langsung ke tempat dimana semestinya
//    tanpa perlu scanning mulai dari index 0 sampai index terakhir atau tanpa perlu memindahkan index satu per satu seperti 
//    algoritma sortir lainnya dengan begini juga penyelesaian lebih cepat, lebih efisien dan effort lebih minim
// 4.

#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& farhat) {
    int n = farhat.size();
    for (int i = 0; i < n - 1; ++i) {
        // Find the minimum element in unsorted array
        int min_index = i;
        for (int j = i + 1; j < n; ++j) {
            if (farhat[j] < farhat[min_index]) {
                min_index = j;
            }
        }
        // Swap the found minimum element with the first element
        swap(farhat[i], farhat[min_index]);
    }
}

int main() {
    vector<int> farhat = { 93, 25, 12, 22, 11 };

    cout << "Original array: ";
    for (int num : farhat) {
        cout << num << " ";
    }
    cout << endl;

    selectionSort(farhat);

    cout << "Sorted array: ";
    for (int num : farhat) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
