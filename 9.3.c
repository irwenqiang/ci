#include<stdio.h>

int search(int a[], int l, int u, int x){
	
	while(l <= u){
		//int m = l + (u - l) >> 2;
		int m = (l + u) / 2;
		
		if(x == a[m])
			return m;
		else if(a[l] <= a[m]){
			if(x > a[m])
				l = m + 1;
			else if(x >= a[l])
				u = m - 1;
			else
				l = m + 1;
		}
		else if(x < a[m]) u = m - 1;
		else if(x <= a[u]) l = m + 1;
		else u = m - 1;
	}
}

int main(){
	int a[] = {15, 16, 19, 20, 25, 1, 3, 4, 5, 7, 10, 14};
	int index = search(a, 0, 11, 5);
	printf("%d\n", index);
}
