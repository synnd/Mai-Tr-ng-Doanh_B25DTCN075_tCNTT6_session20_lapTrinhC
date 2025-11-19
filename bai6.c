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
    int len=0;
	for (int i=0;i<50;i++){
		if (sv[i].id!=0) {
			len++; 
		}
	} 
	if (len>50){
		printf ("Danh sach da day!") ;
		return ; 
	} 
	printf ("----Them sinh vien---\n");
	sv[len].id = sv[len - 1].id + 1;
	fflush(stdin); 
	printf ("Name: ");
	fgets(sv[len].name,sizeof(sv[len].name),stdin);
	sv[len].name[strcspn(sv[len].name,"\n")]='\0';
	
	printf ("AGE: ");
	scanf ("%d",&sv[len].age);
	
	fflush(stdin); 
	printf ("SDT: "); 
	fgets(sv[len].phoneNumber,sizeof(sv[len].phoneNumber),stdin);
	sv[len].phoneNumber[strcspn(sv[len].phoneNumber,"\n")]='\0';
	len ++; 
	printf ("\nThong tin sinh vien\n") ;
	printf ("\n%-3s|%-25s | %-5s | %-15s |\n","ID","NAME","AGE","SDT");

	for (int i=0;i<len;i++){
	    printf ("\n%-3d|%-25s | %-5d | %-15s |\n",sv[i].id,sv[i].name,sv[i].age,sv[i].phoneNumber); 
	} 

	
}
