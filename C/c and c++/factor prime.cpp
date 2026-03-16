begin
   while n is divisible by 2, do
      print 2
      n := n / 2
   done
   for i := 3 to v??, increase i by 2, do
      while n is divisible by i, do
         print i
         n := n / i
      done
   done
   if n > 2, then
      print n
   end if
end
