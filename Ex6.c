#include<stdio.h>
#include<string.h>

struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct Student use[50] = {
        {1, "Nguyen Xuan Bach", 20, "0325915238"},
        {2, "Tran Thi Mai", 22, "0345678901"},
        {3, "Le Minh Tuan", 21, "0367890123"},
        {4, "Pham Thu Lan", 19, "0398765432"},
        {5, "Hoang Hoa Nam", 23, "0312345678"}
    };

    int n = 5;

    printf("Nhap thong tin sinh vien moi can them:\n");

    use[n].id = n + 1;

    printf("Nhap ho va ten sinh vien: ");
    getchar();
    fgets(use[n].name, sizeof(use[n].name), stdin);
    use[n].name[strcspn(use[n].name, "\n")] = '\0';

    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &use[n].age);

    printf("Nhap so dien thoai sinh vien: ");
    getchar();
    fgets(use[n].phoneNumber, sizeof(use[n].phoneNumber), stdin);
    use[n].phoneNumber[strcspn(use[n].phoneNumber, "\n")] = '\0';

    n++;

    printf("\nThong tin sinh vien sau khi them moi:\n");
    for (int i = 0; i < n; i++) {
        printf("\nSinh vien %d:\n", use[i].id);
        printf("ID: %d\n", use[i].id);
        printf("Ho va ten: %s\n", use[i].name);
        printf("Tuoi: %d\n", use[i].age);
        printf("So dien thoai: %s\n", use[i].phoneNumber);
    }

    return 0;
}

