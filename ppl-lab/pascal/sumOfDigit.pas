var 
n,temp,sum : integer;

begin
writeln('Enter number:');
readln(n);
sum := 0;
while n > 0 do
	begin 
		temp := n mod 10;
		sum := sum + temp;
		n := n div 10;
	end;
writeln('sum of digits:',sum);
end.

