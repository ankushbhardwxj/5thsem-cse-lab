var 
n : array[1 .. 10] of integer;
i, num, c1, c2 : integer;

begin
c1 := 0;
c2 := 0;
writeln('Enter number of elements:');
readln(num);
writeln('Enter numbers in array:');
for i:=1 to num do
begin
	read(n[i]);
end;

for i:=1 to 10 do
begin
	if(n[i] mod 2 = 0)
	then 
		c1 := c1 + 1
	else
		c2 := c2 + 1;
end;
writeln('Total even num:',c1);
writeln('Total odd num:',c2);
end.
