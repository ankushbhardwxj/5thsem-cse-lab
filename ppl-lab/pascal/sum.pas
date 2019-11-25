(*declare variables*)
var 
i,s,p : integer;

(*remember to use a begin and end*)
(*use := instead of =*)
(*#no assignment operators, use =*)
(*#dont use " inside writeln()*)
begin
s :=  0;
p :=  0;
for i:=1 to 50 do
	begin
		if(i mod 2 = 0) then
		s:=s+i
		else
		p:=p+i
	end;
writeln('sum of even numbers:',s);
writeln('sum of odd numbers:',p);
end.
