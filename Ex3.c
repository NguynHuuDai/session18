#include<stdio.h>
#include<string.h>

struct Student {
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {

    struct Student use[5];
    
	    for(int i = 0; i < 5; i++){
		
	
		    printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
		
		    printf("Nhap ho va ten sinh vien: ");
		    fgets(use[i].name, sizeof(use[i].name), stdin);
		    use[i].name[strcspn(use[i].name, "\n")] = '\0';
		
		    printf("Nhap tuoi sinh vien: ");
		    scanf("%d", &use[i].age);
		    
		    getchar();
		
		    
		    printf("Nhap so dien thoai sinh vien: ");
		    fgets(use[i].phoneNumber, sizeof(use[i].phoneNumber), stdin);
		    use[i].phoneNumber[strcspn(use[i].phoneNumber, "\n")] = '\0';
	    
		}
  	for(int i = 0; i < 5; i++){
    	printf("\nThong tin sinh vien thu %d:\n", i + 1);
    	printf("Ho va ten: %s\n", use[i].name);
    	printf("Tuoi: %d\n", use[i].age);
    	printf("So dien thoai: %s\n", use[i].phoneNumber);
	}
    return 0;
}
