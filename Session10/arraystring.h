void nhapstring(char s[]){
	printf("Nhap chuoi:");
	scanf("%s",s);
}
void nhapmangstring(char arrs[][50],int n){
	for(int i=0;i<n;i++){
		nhapstring(arrs[i]);
	}
}
void sapxepalphabe(char arrs[][50],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			// kiem tra 2 phan tu arrs[j] va arrs[j+1]
			if(strcmp(arrs[j],arrs[j+1]) >0){
				// swap 2 phan tu cho nhau
				char tmp[50];
				strcpy(tmp,arrs[j]);
				strcpy(arrs[j],arrs[j+1]);
				strcpy(arrs[j+1],tmp);
			}
		}
	}
}
void inmangstring(char arrs[][50],int n){
	for(int i=0;i<n;i++){
		printf("%s\n",arrs[i]);
	
	}
}
