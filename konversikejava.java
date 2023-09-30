import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Variabel dan tipe data
        int nilai = 12;
        float desimal = 3.14f;
        char huruf = 'Z';

        // Penggunaan if else
        int usia = 18;

        if (usia >= 18) {
            System.out.println("\nAnda bisa memiliki KTP.");
        } else {
            System.out.println("\nAnda belum bisa.");
        }

        // Penggunaan while
        int hitung = 0;
        while (hitung < 3) {
            System.out.println("\nHitungan: " + hitung);
            hitung++;
        }

        // Penggunaan do while
        int angka = 1;
        do {
            System.out.println("Angka: " + angka);
            angka++;
        } while (angka <= 5);

        // Array satu dimensi
        int[] arraySatuD = {101, 201, 301, 401};

        System.out.println("\nArray Satu Dimensi:");
        for (int i = 0; i < 4; i++) {
            System.out.println("Elemen ke-" + i + ": " + arraySatuD[i]);
        }

        // Array multidimensi dan loop for bersarang
        int[][] arrayDuaD = {{5, 6}, {7, 8}, {9, 10}};

        System.out.println("\nArray Multidimensi:");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 2; j++) {
                System.out.println("Elemen " + i + "," + j + ": " + arrayDuaD[i][j]);
            }
        }

        // Input
        Scanner scanner = new Scanner(System.in);
        System.out.print("\nMasukkan sebuah nilai: ");
        int inputNilai = scanner.nextInt();
        System.out.println("Anda memasukkan: " + inputNilai);

        // Menampilkan output
        System.out.println("Variabel dan Tipe Data:");
        System.out.println("Nilai: " + nilai);
        System.out.println("Desimal: " + desimal);
        System.out.println("Huruf: " + huruf);

        // Komentar
        // Ini adalah komentar saya
    }
}
