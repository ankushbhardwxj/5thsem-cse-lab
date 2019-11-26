var
a : array [1 .. 10, 1 .. 10] of integer;
i,j,m,n : integer;
begin
writeln('Enter num of rows:');
readln(m);
writeln('Enter num of colm:');
readln(n);
writeln('Enter number of elements:');
for i:=1 to m do
	for j:=1 to n do
		readln(a[i][j]);

for i:=1 to m do
	for j:=1 to n do
		writeln(#9, a[i][j]);
		writeln(#10);

end.
