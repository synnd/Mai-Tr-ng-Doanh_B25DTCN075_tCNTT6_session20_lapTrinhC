# include <stdio.h>
#include <string.h> 

struct Student {
	int id; 
	char name[50];
	int age ;
	char phoneNumber[15]; 
}; 
	 
int main (){
	struct Student sv[50]={
	{1, "Nguyen Van A", 20, "0123456789"},
    {2, "Le Thi B",     21, "0987654321"},
    {3, "Tran Van C",   19, "0934567890"},
    {4, "Pham Thi D",   22, "0912345678"},
    {5, "Hoang Van E",  20, "0909090909"},		
	};
    int id;
    int flag=-1; 
    int len=0;
	for (int i=0;i<50;i++){
		if (sv[i].id!=0) {
			len++; 
		}
	} 
	//printf ("len=%d",len) ;
    printf  ("Nhap id sinh vien can them: ");
    scanf ("%d",&id); 
    if (id<0||id>50){
    	printf ("Vi tri them khong hop le");
		return 0; 
	} 
    
	fflush(stdin);
	for (int i=0;i<len;i++){
		if (sv[i].id==id){
			flag=i ;
			break; 
		} 
	} 
	if (len>=50){
		printf ("Mang day!!"); 
	} else {
		printf ("--Them thong tin sinh vien--\n ");
    	struct Student newSv;
        fflush(stdin);
        printf("Nhap ten: ");
        fgets(newSv.name, sizeof(newSv.name), stdin);
        newSv.name[strcspn(newSv.name, "\n")] = 0;
        
        printf("Nhap tuoi: ");
        scanf("%d", &newSv.age);

        fflush(stdin);
        printf("Nhap so dien thoai: ");
        fgets(newSv.phoneNumber, sizeof(newSv.phoneNumber), stdin);
        newSv.phoneNumber[strcspn(newSv.phoneNumber, "\n")] = 0;

        for (int i=len;i>flag;i--) {
           sv[i] = sv[i - 1];
    }
    sv[flag]=newSv ;
    len++; 
        printf("\n>> Da cap nhat thong tin thanh cong!\n");
     
	} 
	
	printf ("\nThong tin sinh vien\n") ;
	printf ("\n%-3s|%-25s | %-5s | %-15s |\n","ID","NAME","AGE","SDT");

	for (int i=0;i<len;i++){
	    printf ("\n%-3d|%-25s | %-5d | %-15s |\n",sv[i].id,sv[i].name,sv[i].age,sv[i].phoneNumber); 
	} 
	
} 
