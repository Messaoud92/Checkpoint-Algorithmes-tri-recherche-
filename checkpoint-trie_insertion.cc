program tie_insertion
VAR
t : array[] integer;
j,k,i : integer

begin
j:=2;
while (j<=longueur(t))  //boucle 1
  i:=j-1;
  k:=t[j];
  
			  while (i>0)&& (t[i]>k)   //boucle 2
				t[i+1]:=t[i];
				i:=i-1;
			  end
			  
  t[i+1]:=k
  j:=j+1;
  end
end.