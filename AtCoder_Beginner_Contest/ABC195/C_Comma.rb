N = gets.to_i
if N < 10**3
  puts 0
elsif N < 10**6
  puts (N-10**3+1)
elsif N < 10**9
  puts (N-10**6+1)*2+999000
elsif N < 10**12
  puts (N-10**9+1)*3+999000+999000000*2
else
  puts (N-10**12)*4+999000+999000000*2+999000000000*3
end