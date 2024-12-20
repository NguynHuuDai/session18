#include<stdio.h>

	struct moiNguoi{
		
		char name[50];
		int age;
		char phoneNumber[20];
	};
  

int main(){
	
	struct moiNguoi use01 = {"Nguyen Huu Dai", 18, "0325915238"	};
		
	printf("Thong tin sinh vien\n");
	printf("Ho va ten sinh vien : %s\n", use01.name);
	printf("Tuoi %d\n", use01.age);
	printf("number %s\n", use01.phoneNumber);
	
	
	return 0;
}
