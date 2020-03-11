var m,n,i,j,bottom,z:integer;
    full:array[1..20] of boolean;
    u:array[1..20,1..8] of char;

procedure runtuh(a,b:integer);
begin
   while (u[a,b]='0') and (a<=m) do begin
      u[a,b]:='1';
      u[a-1,b]:='0';
      inc(a);
   end;
end;

begin
   readln(m,n);
   for i:=1 to m do begin
      for j:=1 to n do read(u[i,j]);
      readln;
   end;
   repeat begin
      fillchar(full,sizeof(full),true);
      z:=0;
      for i:=1 to m do begin
         for j:=1 to n do
            if u[i,j]='0' then full[i]:=false;
         if full[i] then begin
            inc(z);
            bottom:=i;
            for j:=1 to n do u[i,j]:='0';
         end;
      end;
      for j:=1 to n do begin
         for i:=bottom-1 downto 1 do begin
            if u[i,j]='1' then runtuh(i+1,j);
         end;
      end;
   end; until z=0;
   for i:=1 to m do begin
      for j:=1 to n do write(u[i,j]);
      writeln;
   end;
end.

