var
a : array [1 .. 10, 1 .. 10] of integer;
i,j,m,n : integer;
begin
writeln('Enter number of rows:');
readln(m);
writeln('Enter number of colms:');
readln(n);

writeln('Enter number of elements:');
for i:=1 to m do 
	for j:=1 to n do
		readln(a[i][j]);

for i:=1 to n do
	begin
	for j:=1 to m do
		writeln(a[j][i]);
	end;
	writeln(#10);
end.
