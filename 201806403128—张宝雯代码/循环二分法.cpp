#include<stdio.h>
#define N 8 

 bool binarySearch(int a[],int lt,int rt,int x){
        int mid;
        while (lt <= rt) 
		{
            mid = (rt-lt)/ 2+lt;
          
            if(a[mid] == x)
            {
			printf("���ҵ���Ŀ����a[%d]λ��",mid);
			return true;
	    	}
			else if (x < a[mid]) 
			{
                rt = mid - 1;
              
            }  
                // ��������ֵ���м�ֵ�������������ҷ�Χ�ĺ�벿����Ϊ�µĲ��ҷ�Χ
             else if (x> a[mid])
		   {
                lt = mid + 1;
                
           }     // �������������м�Ԫ��ֵ������ȣ���Ż��м�Ԫ��ֵ������
		    
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
