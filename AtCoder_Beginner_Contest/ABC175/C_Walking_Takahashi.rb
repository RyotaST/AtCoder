x,k,d = gets.split.map(&:to_i)
x = x.abs

if k*d >= x
  k = k-x/d
  if k % 2 == 0
    puts x-(x/d)*d
    exit
  else
    puts (x-(x/d+1)*d).abs
    exit
  end
else
  puts x-k*d
  exit
end