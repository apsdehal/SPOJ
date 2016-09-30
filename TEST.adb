with Ada.Text_IO; use Ada.Text_IO;
with Ada.Integer_Text_IO; use Ada.Integer_Text_IO;

procedure Life_Universe is
	X: Integer;
begin
	loop
		get(X);
		exit when X = 42;
		put(X);
		new_line;
	end loop;
end Life_Universe;
