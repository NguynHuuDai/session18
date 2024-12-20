#include<stdio.h>
#include<string.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {

    struct Student use01;

    printf("Nhap thong tin sinh vien:\n");

    printf("Nhap ho va ten sinh vien: ");
    fgets(use01.name, sizeof(use01.name), stdin);
    use01.name[strcspn(use01.name, "\n")] = '\0';

    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &use01.age);
    
    getchar();

    
    printf("Nhap so dien thoai sinh vien: ");
    fgets(use01.phoneNumber, sizeof(use01.phoneNumber), stdin);
    use01.phoneNumber[strcspn(use01.phoneNumber, "\n")] = '\0';

    printf("\nThong tin sinh vien vua nhap:\n");
    printf("Ho va ten: %s\n", use01.name);
    printf("Tuoi: %d\n", use01.age);
    printf("So dien thoai: %s\n", use01.phoneNumber);

    return 0;
}

