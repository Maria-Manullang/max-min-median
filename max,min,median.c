#include <stdio.h>
void satu(int x,int a[]);
void dua(int x,int a[]);
void max(int x,int a[]);
void min(int x,int a[]);
void median(int x,int a[]);

int main(){
	int n;
	printf("Masukkan banyak data:");
	scanf("%d",&n);
	int a[n];
	satu(n,a);
	dua(n,a);
	max(n,a);
	min(n,a);
	median(n,a);
	return 0;
}

void satu(int x,int a[]){
	int i;
	for(i=0;i<x;i++){
        printf("angka ke-%d ",(i+1));
		scanf("%d",&a[i]);
	}
}
void dua(int x,int a[]){
	int j, i,akhir;
	printf("Urutan ascending = ");
	for(j=0;j<x;j++){
		for(i=0;i<x;i++){
			if(a[i]>a[i+1]){
				akhir = a[i];
				a[i]=a[i+1];
				a[i+1]=akhir;
			}
		}
	}
	for(i=0;i<x;i++){
		printf("%d ",a[i]);
	}
}
void max(int x,int a[]){
	printf("\nNilai max = %d",a[x-1]);

}
void min(int x,int a[]){
	printf("\nNilai min = %d",a[0]);

}
void median(int x,int a[]){
	float med;
	if(x%2==0){
		med=(a[(x/2)-1]+a[(x/2)])/2.0;
	printf("\nNilai median = %.2f",med);
	}
	else{
		med=a[x/2];
	printf("\nNilai median = %.2f",med);
	}
}
