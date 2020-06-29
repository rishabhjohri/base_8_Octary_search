#include<stdio.h>
main()
{
	int n;
	printf("enter size of array");
	scanf("%d",&n);
	int a[n];
	int i;
	printf("enter elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int ele;
	printf("Enter element to be searched");
	scanf("%d",&ele);
	int l,a1,a2,a3,m,b3,b2,b1,h;
	l=0;
	h=n-1;
	while(h>=l)
	{
		m=(l+h)/2;
        a1=(3*l+h)/8;
        a2=2*(3*l+h)/8;
        a3=3*(3*l+h)/8;
        b1= 6*(3*l+h)/8;
        b2=5*(3*l+h)/8;
        b3=4*(3*l+h)/8;
        if(a[a1]==ele)
        {
        	printf("found at position %d",a1+1);
        	break;
		}
		else if(ele==a[a2])
		{
			printf("found at position %d",a2+1);
			break;
		}
		else if(ele==a[a3])
		{
			printf("found at position %d",a3+1);
			break;
		}
		else if(ele==a[m])
		{
			printf("found at position %d",m+1);
			break;
		}
		else if(ele==a[b3])
		{
			printf("found at position %d",b3+1);
			break;
		}
		else if(ele==a[b2])
		{
			printf("found at position %d",b2+1);
			break;
		}
		else if(ele==a[b3])
		{
			printf("found at position %d",b3+1);
			break;
		}
		else if(ele<a[a1])
		{
			h=a1-1;
			
		}
		else if(ele>a[a1] && ele<a[a2])
		{
			l=a1+1;
			h=a2-1;
		}
		else if(ele>a[a2] && ele<a[a3])
		{
			l=a2+1;
			h=a3-1;
		}
		else if(ele>a[a3] && ele<a[m])
		{
			l=a3+1;
			h=m-1;
		}
		else if(ele>a[m] && ele<a[b3])
		{
			l=m+1;
			h=b3-1;
		}	
		else if(ele>a[b3] && ele<a[b2])
		{
			l=b3+1;
			h=b2-1;
		}
		else if(ele>a[b2] && ele<a[b1])
		{
			l=b2+1;
			h=b1-1;
		}
		else if(ele>a[b1])
		{
			l=b1+1;
		
		}

	}
	
}
