var
n,i,fac : integer;

begin
writeln('Enter a number:');
readln(n);
fac := 1;
for i:=1 to n do
	begin
		fac := fac * i;
	end;
writeln('factorial',fac);	
end.
