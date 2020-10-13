program project1;
uses sysutils;

Function Seq(var n: Integer): Integer;
var cont: Integer;
Begin
  cont := 1;
  While (n <> 1) do
  begin
       cont:= cont + 1;
       if (n mod 2 = 0) then
       begin
         n := n div 2;
       end
       else
       begin
            n := n * 3 + 1
       end;
  end;
  Seq := cont;
end;


Function max_longitud(var p_i: Integer; p_j: Integer): Integer;
Var i, max, new_value, i_param: Integer;
Begin
     max := 0;
     new_value := 0;
     for i:= p_i to p_j do
     begin
          i_param := i;
          new_value := Seq(i_param);
          if (new_value > max) then
          begin
               max := new_value;
          end;
     end;
     max_longitud := max;
End;


var b, i, j: Integer;
    s, t: String;
begin
     read(i, j);
     b:= max_longitud(i, j);
     str(i, s);
     str(j, t);
     s := s + ' ';
     t := t + ' ';
     writeln(s, t, b);
     readln();
end.
