#include <stdio.h>

int main()
{
	// khai bao 
	int arr[100];
	int choose,num,location,temp;
	int i,j,n;
	
	//hien thi menu
	while(choose!=11) {
	
	printf("\n MENU \n");
	printf("1.Nhap so phan tu va gia tri cho mang\n");
	printf("2.In ra cac phan t theo mang\n");
	printf("3.Dem so luong cac so hoan hao co trong mang\n");
	printf("4.Tim gia tri lon thu 2 trong mang\n");
	printf("5.Them 1 phan tu vao vi tri ngau nhien trong mang \n");
	printf("6 Xoa phan tu tai 1 vi tri cu the\n");
	printf("7.Sap xem mang theo thu tu tang dan\n");
	printf("8.Cho nguoi dung nhap vao 1 phan tu tim kiem xem phan tu co ton tai trong mang hay khong\n");
	printf("9.Sap xep lai mang va hien thi toan bo phan tu co trong mang sao cho chan dung truoc le dung sau\n");
	printf("10.Dao nguoc thu tu cac phan tu co trong mang\n");
	printf("11.Thoat\n");
	printf("Moi ban nhap lua chon cua minh:");
	scanf("%d",&choose);
	if(choose<1||choose>11) {
		printf("Lua chon khong hop le");
	}
	switch(choose) {
		case 1:
			printf("Moi ban nhap so phan tu muon nhap:");
			scanf("%d",&n);
			if(n>=0) {
			    for(i=0;i<n;i++) {
				printf("Moi ban nhap gia tri cho arr[%d]:",i);	
				scanf("%d",&arr[i]);
			    }
			} else{
				printf("SO phan tu khong hop le");
				break;
			}	
	    break;
	    case 2:
	    	for(i=0;i<n;i++) {
				printf("Gia tri cua arr[%d] la:%d",i,arr[i]);
				printf("\n");
	    	}
	    break;
	    case 3:
	    
		
		
		case 5:
	    	printf("Moi ban nhap phan tu ban muon them:");
	    	scanf("%d",&num);
	    	printf("Moi ban nhap vi tri ban muon them:");
	    	scanf("%d",&location);
	    	n++;
	    	for(i=n-1;i>=location;i--) {
			    arr[i]=arr[i-1];	
	    	}
		    arr[location-1]=num;
	     	printf("Mang sau khi them phan tu la:\n");
	    	for(i=0;i<n;i++) {
			    printf("%d ",arr[i]);
	    	}
		break;
		case 6:
			printf("Moi ban nhap vi tri muon xoa:");
			scanf("%d",&location);
			n--;
			for(i=location-1;i<n;i++) {
				arr[i]=arr[i+1];
			}
			printf("Mang sau khi xoa phan tu la:\n");
	    	for(i=0;i<n;i++) {
			    printf("%d ",arr[i]);
		    }
	    break;
	    case 7:
	    	printf("Mang truoc khi sap xep la:\n");
	    	for(i=0;i<n;i++) {
			    printf("%d ",arr[i]);
		    }
		    
		
		
		
		case 9:
		for(i=0;i<n-1;i++){
			for(j=0;j<n-i-1;j++){
				if(arr[j]>arr[j+1]) { 
				   temp=arr[j];
				   arr[j]=arr[j+1];
				   arr[j+1]=temp;
				}
			}
		}
		printf("Mang sau khi sap xep la:");
		for(i=0;i<n;i++) {
			if(arr[i]%2==0) {
				printf("%d ",arr[i]);
			} 	
		}
		for(i=0;i<n;i++) {
			if(arr[i]%2!=0) {
				printf("%d ",arr[i]);
			}
	    }    
	    break;
	    case 10:
	    for(i=0;i<n;i++) {
	    	for(j=n-1;j>=0;j--) {	
	    		if(j==n/2){
				break;
			    }
			    arr[i]=arr[j];
	    		break;	    		
			}
			if(i==n/2){
				break;
			}
		}
		printf("Mang sau khi dao nguoc la:\n");
		for(i=0;i<n;i++) {
			printf("%d ",arr[i]);
		}
		case 11: 
		break;    

	}
}
	printf("Hen Gap Lai"); 
	return 0;

 }

