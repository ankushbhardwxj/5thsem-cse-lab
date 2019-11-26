var 
n:array [1 .. 20] of integer;
i,n1 : integer;
begin 
writeln('Enter the number of elements:');
readln(n1);
writeln('Enter the elements:');
for i:=1 to n1 do
readln(n[i]);

for i:=1 to n1 do
writeln(n[i]);
end.
