var 
n, i : integer;

begin
writeln('Enter number:');
readln(n);
i := 1;
while i <= 10 do 
	begin
	writeln(n,'x',i,'=',n*i);
	i := i + 1;
	end;
end.
