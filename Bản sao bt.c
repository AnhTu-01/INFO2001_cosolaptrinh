#include <stdio.h>
#include <stdlib.h>

// Định nghĩa cấu trúc Book
typedef struct {
    char ten[50];
    char tacGia[50];
    float gia;
} Book;

int main() {
    int n; // Số lượng sách
    printf("Nhap so luong sach: ");
    scanf("%d", &n);
    
    // Cấp phát động mảng books với kích thước n
    Book* books = (Book*) malloc(n * sizeof(Book));
    
    // Nhập thông tin cho từng sách
    for (int i = 0; i < n; i++) {
        printf("Nhap ten sach thu %d: ", i + 1);
        scanf("%s", books[i].ten);
        printf("Nhap tac gia cua sach thu %d: ", i + 1);
        scanf("%s", books[i].tacGia);
        printf("Nhap gia cua sach thu %d: ", i + 1);
        scanf("%f", &books[i].gia);
    }
    
    // Hiển thị thông tin sách
    printf("\nThong tin cac sach:\n");
    for (int i = 0; i < n; i++) {
        printf("Sach thu %d:\n", i + 1);
        printf("Ten: %s\n", books[i].ten);
        printf("Tac gia: %s\n", books[i].tacGia);
        printf("Gia: %.2f\n", books[i].gia);
        printf("\n");
    }
    
    // Giải phóng bộ nhớ 
    free(books);
    
    return 0;
}