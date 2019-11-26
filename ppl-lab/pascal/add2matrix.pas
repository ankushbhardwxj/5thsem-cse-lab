var 
a1 : array[ 1 .. 10, 1 .. 10 ] of integer;
a2 : array[ 1 .. 10, 1 .. 10 ] of integer;
a3 : array[ 1 .. 10, 1 .. 10 ] of integer;
r,c,i,j : integer;

begin 
writeln('Enter rows:');
readln(r);
writeln('Enter colm:');
readln(c);

for i:=1 to r do
	for j:=1 to c do
		readln(a1[i][j]);

for i:=1 to r do
	for j:=1 to c do
		readln(a2[i][j]);

for i:=1 to r do
	for j:=1 to c do
		a3[i][j] := a1[i][j] + a2[i][j];

writeln('After adding:');

for i:=1 to r do
	for j:=1 to c do
		writeln(a3[i][j]);

end.
