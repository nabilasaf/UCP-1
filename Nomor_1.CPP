void insertionsort() {
    int i,j,n, temp; //memasukkan i,j,n, dan temp
    for (i = 1; i <= n -1; i++) { // step 1 
    temp = arr[i]; //temp merupakan  
    j = i - 1; //jumlah j merupakan hasil dari i - 1
    while (j >=0 && arr[j] > temp) // ketika j lebih besar sama dengan 0 dan dan array j lebih besar temp
    {
        arr[j + 1] = arr[j]; // memindahkan angka yang ada di array[j+1] kedalam array[j]
        j= j-1; // jadi j = j-1
    } 
    arr[j + 1] = temp; // memindahkan angka di arr[j + 1] ke dalam temp
    }
}