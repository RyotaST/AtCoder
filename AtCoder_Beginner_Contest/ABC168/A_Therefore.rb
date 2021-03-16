N=gets.chomp.chars[-1].to_i
if N == 3
  puts "bon"
elsif N == 0 || N == 1 || N == 6 || N == 8
  puts "pon"
else
  puts "hon"
end