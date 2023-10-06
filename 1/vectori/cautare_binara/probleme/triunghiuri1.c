////https://www.infoarena.ro/problema/nrtri
#include <stdio.h>
#include <stdlib.h>
const int N = 1000;
int comparator(const void *a, const void *b){
	return (*(int*)a - *(int*)b);
}

int main(){
	int a[N],n, ans=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d", a+i);
	qsort(a,n,sizeof(int),comparator);
	for(int i=0;i<n-2;i++)
		for(int j=i+1;j<n-1;j++){
			int st=j+1,dr=n-1,mid;
			while(st <= dr){
				mid = st + (dr-st)/2;
				if(a[mid] < a[i]+a[j])
					st = mid + 1;
				else
					dr = mid - 1;
			}
			ans+=(st-j-1);
		}
	printf("%d\n",ans);
	return 0; 
}
