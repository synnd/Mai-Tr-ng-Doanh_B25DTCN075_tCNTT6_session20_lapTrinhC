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
    printf  ("Nhap id sinh vien can chinh sua: ");
    scanf ("%d",&id); 
	fflush(stdin);
	for (int i=0;i<len;i++){
		if (sv[i].id==id){
			flag=i ;
			break; 
		} 
	} 
	if (flag==-1){
		printf ("Khong tim thay sinh vien co id la %d\n",id); 
	} else {
		printf ("--Chinh sua thong tin sinh vien--\n ");
		
        printf("Nhap ten moi: ");
        fgets(sv[flag].name, sizeof(sv[flag].name), stdin);
        sv[flag].name[strcspn(sv[flag].name, "\n")] = 0;  // xóa \n

        printf("Nhap tuoi moi: ");
        scanf("%d", &sv[flag].age);

        printf("\n>> Da cap nhat thong tin thanh cong!\n");
     
	} 
	
	printf ("\nThong tin sinh vien\n") ;
	printf ("\n%-3s|%-25s | %-5s | %-15s |\n","ID","NAME","AGE","SDT");

	for (int i=0;i<5;i++){
	    printf ("\n%-3d|%-25s | %-5d | %-15s |\n",sv[i].id,sv[i].name,sv[i].age,sv[i].phoneNumber); 
	} 
	
} 
