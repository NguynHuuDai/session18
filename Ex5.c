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
        {1, "Tran Duc Bo", 20, "19001019"},
        {2, "Trinh Thi Mai", 22, "8167825823"},
        {3, "Dang Van Truong", 21, "976827482"},
        {4, "Pham Thu Lan", 19, "0398765432"},
        {5, "Nguyen Huu Dai", 18, "0987654321"}
    };

    int Search;
    
    printf("Nhap id sinh vien can sua: ");
    scanf("%d", &Search);

    for(int i = 0; i < 5; i++) {
        if(use[i].id == Search) {

            printf("Sinh vien tim thay:\n");
            printf("ID: %d\n", use[i].id);
            printf("Ho va ten: %s\n", use[i].name);
            printf("Tuoi: %d\n", use[i].age);
            printf("So dien thoai: %s\n", use[i].phoneNumber);

            printf("\nNhap ten moi sinh vien: ");
            getchar();  
            fgets(use[i].name, sizeof(use[i].name), stdin);
            use[i].name[strcspn(use[i].name, "\n")] = '\0'; 

            printf("Nhap tuoi moi sinh vien: ");
            scanf("%d", &use[i].age);

            printf("\nThong tin sinh vien sau khi sua:\n");
            printf("ID: %d\n", use[i].id);
            printf("Ho va ten: %s\n", use[i].name);
            printf("Tuoi: %d\n", use[i].age);
            printf("So dien thoai: %s\n", use[i].phoneNumber);
            break;  
        }
    }

    if (Search != use[0].id && Search != use[1].id && Search != use[2].id &&
        Search != use[3].id && Search != use[4].id) {
        printf("Khong tim thay sinh vien co id = %d\n", Search);
    }

    printf("\nThong tin tat ca sinh vien sau khi chinh sua:\n");
    for(int i = 0; i < 5; i++) {
        printf("\nSinh vien %d:\n", use[i].id);
        printf("ID: %d\n", use[i].id);
        printf("Ho va ten: %s\n", use[i].name);
        printf("Tuoi: %d\n", use[i].age);
        printf("So dien thoai: %s\n", use[i].phoneNumber);
    }

    return 0;
}

