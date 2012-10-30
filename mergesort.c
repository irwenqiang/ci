void merge(int a[], int b[], int n, int m){
	int k = m + n - 1;
	int i = n - 1;
	int j = m - 1;

	while(i >= 0 && j >= 0){
		if(a[i] > b[j])
			a[k--] = a[i--];
		else
			a[k--] = b[j--];
	}

	while(j >= 0)
		a[k--] = b[j--];
}

void prt(int a[], int n){
	int i = 0;
	for(i = 0; i < n; i++)
		printf("%d\n", a[i]);
	
}

int main(){
	int a[] = {6, 4, 3, 2, 1};
	int b[] = {3, 2, 1};
	
	merge(a, b, 5, 3);
	prt(a, 8);
	
}
