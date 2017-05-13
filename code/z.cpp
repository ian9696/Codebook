void z_algo(char *s, int z[]){
	z[0]=strlen(s);
	for(int n=strlen(s), l=0, r=0, i=1; i<n; i++){
		if( i>r ){
			for(l=r=i; r<n && s[r-l]==s[r]; r++);
			z[i]=r---l;
		}else{
			if( z[i-l]<r-i+1 ) z[i]=z[i-l];
			else{
				for(l=i; R<n && s[R-L]==s[R]; R++);
                z[i]=r---l;
			}
		}
	}
}