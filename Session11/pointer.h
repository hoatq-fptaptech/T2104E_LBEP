void nhapmang(int *p,int from,int to){
	for(int i=from;i<to;i++){
		printf("Nhap pt thu %d: ",i);
		scanf("%d",p+i);
	}
}
int timMax(int *p,int n){
	int max = *p;// max = p[0]
	for(int i=0;i<n;i++){
		// tim so lon nhat
		if(max < *(p+i)){
			max = *(p+i);
		}
	}
	return max;
}
void sapxep(int *p,int n){
	for(int i=0;i<n-1;i++){	
		for(int j=0;j<n-i-1;j++){
			if(*(p+j) > *(p+j+1)){
				int tmp = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = tmp;
			}
		}
	}
}

void inmang(int *p,int n){
	for(int i=0;i<n;i++){
		printf("%5d",*(p+i));
	}
}
