	void bubo(int *a,int k){        //*a = �s�Xa��}���� ��i�h�B�� 
	
		
	
		int temp,j,i;
			for (j=0;j<k;j++){			
				for(i=0;i<k;i++){ 
					
					if(a[i]>a[i+1]){
					temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;//�洫��}�̭����� 
					} 
				}
			}
	}	
