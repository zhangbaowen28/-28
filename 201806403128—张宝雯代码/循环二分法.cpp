#include<stdio.h>
#define N 8 

 bool binarySearch(int a[],int lt,int rt,int x){
        int mid;
        while (lt <= rt) 
		{
            mid = (rt-lt)/ 2+lt;
          
            if(a[mid] == x)
            {
			printf("已找到，目标在a[%d]位置",mid);
			return true;
	    	}
			else if (x < a[mid]) 
			{
                rt = mid - 1;
              
            }  
                // 若查找数值比中间值大，则以整个查找范围的后半部分作为新的查找范围
             else if (x> a[mid])
		   {
                lt = mid + 1;
                
           }     // 若查找数据与中间元素值正好相等，则放回中间元素值的索引
		    
	}
        
        return -1;
    }
int main() {

	int a[N] = {2,6,9,17,21,63,87,107};
	int x;
	scanf("%d",&x);
	binarySearch(a,0,N-1,x);
	return 0; 
}
