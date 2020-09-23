#include <stdio.h>
#include <string.h>
int main() 
{
	char info[100];
	
	printf("Masukan Biodata : ");
	printf("\n");
	
	strcpy(info,"Nama : ");
	printf(info);
	scanf("%s", info);
	printf("\n");
	
	strcpy(info,"NPM : ");
	printf(info);
	scanf("%s", info);
	printf("\n");
	
	strcpy(info,"Alamat : ");
	printf(info);
	scanf("%s", info);
	printf("\n");
	
	strcpy(info,"Tempat Lahir : ");
	printf(info);
	scanf("%s", info);
	printf("\n");
	
	strcpy(info,"Tanggal Lahir : ");
	printf(info);
	scanf("%s", info);
	printf("\n");
	
	strcpy(info, "Universitas : ");
	printf(info);
	scanf("%s", info);
	printf("\n");
	
	strcpy(info,"Jurusan : ");
	printf(info);
	scanf("%s", info);
	printf("\n");
	
	system("PAUSE");	
	return 0;
}
