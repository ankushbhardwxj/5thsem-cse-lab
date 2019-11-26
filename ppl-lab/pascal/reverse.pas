var
num, temp, tmp2 : integer;

begin
writeln('Enter number:');
readln(num);
tmp2 := 0;
while num > 0 do 
	begin 
	tmp2 := tmp2*10 + num mod 10;
	num := num div 10;		
	end;

writeln(tmp2);
end.

